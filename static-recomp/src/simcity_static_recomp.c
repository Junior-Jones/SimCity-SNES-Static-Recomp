#include "simcity_static_recomp.h"

#include "sc_v11_runtime.h"
#include "sc_v28_video.h"
#include "sc_v11_audio_epoch_manifest.h"
#include "sc_audio_scpu_access_manifest.h"
#include "audio/initial-smp-aot/sc_initial_smp_aot_authority.h"
#include "sc_static_apu.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#define SIMCITY_FRAME_INSTRUCTION_GUARD UINT64_C(50000)
#define SIMCITY_HOST_PCM_CAPACITY_FRAMES 65536u

struct SimCityRecomp {
    uint8_t *rom;
    SCV11Runtime *runtime;
    uint16_t bgr555[SIMCITY_RECOMP_MAX_FRAME_PIXELS];
    uint32_t bgra[SIMCITY_RECOMP_MAX_FRAME_PIXELS];
    uint8_t widescreen;
    int16_t widescreen_cursor_extension_x;
    int16_t widescreen_cursor_base_x;
    int16_t widescreen_cursor_anchor_view_x;
    uint16_t widescreen_cursor_anchor_fine_x;
    uint8_t widescreen_cursor_anchor_valid;
    uint8_t widescreen_cursor_input_rebased;
    SCV28VideoReport video;
    int16_t audio_pcm[SIMCITY_HOST_PCM_CAPACITY_FRAMES *
                      SIMCITY_RECOMP_AUDIO_CHANNELS];
    uint32_t audio_read_frame;
    uint32_t audio_write_frame;
    uint32_t audio_available_frames;
    uint8_t audio_overflow;
    uint8_t static_acquired;
    char last_error[256];
    uint16_t *input_history;
    uint32_t input_history_count;
    uint32_t input_history_capacity;
    uint8_t replaying_snapshot;
    uint8_t initialized;
};

static void copy_text(char *destination, size_t capacity, const char *source);

static FILE *g_core_log;
static unsigned long long g_core_log_sequence;

static void core_logf(const SimCityRecomp *instance, const char *event,
                      const char *format, ...) {
    va_list arguments;
    if (!g_core_log) return;
    (void)fprintf(g_core_log, "%llu [CORE] event=%s",
                  ++g_core_log_sequence, event ? event : "message");
    if (instance && instance->runtime) {
        (void)fprintf(g_core_log, " frame=%u instructions=%llu master=%llu",
                      instance->runtime->scheduler.frame,
                      (unsigned long long)instance->runtime->scheduler.cpu_instructions,
                      (unsigned long long)instance->runtime->scheduler.master_clock);
    }
    if (format && *format) {
        (void)fputc(' ', g_core_log);
        va_start(arguments, format);
        (void)vfprintf(g_core_log, format, arguments);
        va_end(arguments);
    }
    (void)fputc('\n', g_core_log);
    (void)fflush(g_core_log);
}

int simcity_recomp_log_open(const char *path, char *error,
                            size_t error_capacity) {
    simcity_recomp_log_close();
    if (!path || !*path) {
        copy_text(error, error_capacity, "A static-core log path is required.");
        return 0;
    }
    g_core_log = fopen(path, "ab");
    if (!g_core_log) {
        copy_text(error, error_capacity, "Unable to open the static-core log file.");
        return 0;
    }
    g_core_log_sequence = 0u;
    core_logf(NULL, "log-open", "native_fps=%.12f audio_rate=%u",
              simcity_recomp_nominal_fps(), SIMCITY_RECOMP_AUDIO_SAMPLE_RATE);
    copy_text(error, error_capacity, "");
    return 1;
}

void simcity_recomp_log_close(void) {
    if (!g_core_log) return;
    core_logf(NULL, "log-close", "");
    (void)fclose(g_core_log);
    g_core_log = NULL;
}

static void copy_text(char *destination, size_t capacity, const char *source) {
    if (!destination || capacity == 0u) return;
    (void)snprintf(destination, capacity, "%s", source ? source : "");
}

static void set_error(SimCityRecomp *instance, const char *message,
                      char *external, size_t external_capacity) {
    if (instance)
        copy_text(instance->last_error, sizeof(instance->last_error), message);
    copy_text(external, external_capacity, message);
}

static int static_cpu_step(SCV11Runtime *runtime) {
    if (runtime->scheduler.cpu_instructions < SC_V11_V02_GLOBAL_INSTRUCTIONS)
        return sc_v11_bootstrap_step(runtime);
    return sc_v11_cpu_step(runtime);
}

static uint16_t connector_wram16(const SCV11Runtime *runtime,
                                 size_t offset) {
    return (uint16_t)(runtime->machine.wram[offset] |
           ((uint16_t)runtime->machine.wram[offset + 1u] << 8));
}

static void connector_set_wram16(SCV11Runtime *runtime, size_t offset,
                                 uint16_t value) {
    runtime->machine.wram[offset] = (uint8_t)value;
    runtime->machine.wram[offset + 1u] = (uint8_t)(value >> 8);
}

static int connector_city_view(const SCV11Runtime *runtime) {
    return runtime &&
        (runtime->machine.mmio[0x2105u - SC_MMIO_BASE] & 0x0fu) == 0x09u &&
        runtime->machine.mmio[0x2107u - SC_MMIO_BASE] == 0x58u &&
        runtime->machine.mmio[0x2108u - SC_MMIO_BASE] == 0x5cu;
}

static int connector_map_focus(const SCV11Runtime *runtime) {
    return runtime && connector_wram16(runtime, 0x0201u) == 0x00ffu;
}

static int connector_cursor_right_base(const SCV11Runtime *runtime) {
    /* $0261=2 is the 4x4 Coal Power placement cursor. Its anchor stops 24
       pixels earlier so the complete footprint remains in the native view. */
    return connector_wram16(runtime, 0x0261u) == 2u ? 208 : 232;
}

static int connector_cursor_left_base(const SCV11Runtime *runtime) {
    (void)runtime;
    /* The native city cursor begins at screen x=16. Widescreen contributes
       another 71 pixels of real map view to its left. */
    return 16;
}

static void restore_widescreen_cursor_camera(SimCityRecomp *instance) {
    if (!instance || !instance->runtime ||
        !instance->widescreen_cursor_anchor_valid)
        return;
    connector_set_wram16(instance->runtime, 0x01bdu,
        (uint16_t)instance->widescreen_cursor_anchor_view_x);
    connector_set_wram16(instance->runtime, 0x0139u,
        instance->widescreen_cursor_anchor_fine_x);
}

static void cancel_widescreen_horizontal_scroll(SCV11Runtime *runtime) {
    uint16_t scroll;
    if (!runtime) return;
    /* $01F5 bits 0/1 are the native right/left camera animation.  The host
       connector consumes that motion while the cursor traverses a widened
       margin, so leaving either bit set would permanently gate Select and X.
       Preserve bits 2/3 so authentic vertical camera motion is unaffected. */
    scroll = connector_wram16(runtime, 0x01f5u);
    connector_set_wram16(runtime, 0x01f5u,
        (uint16_t)(scroll & (uint16_t)~UINT16_C(0x0003)));
}

static void store_widescreen_cursor_extension(SimCityRecomp *instance) {
    int cursor_x;
    SCV11Runtime *runtime;
    if (!instance || instance->widescreen_cursor_extension_x == 0 ||
        !connector_city_view(instance->runtime) ||
        !connector_map_focus(instance->runtime))
        return;
    runtime = instance->runtime;
    restore_widescreen_cursor_camera(instance);
    cursor_x = instance->widescreen_cursor_base_x +
               instance->widescreen_cursor_extension_x;
    connector_set_wram16(runtime, 0x01ebu, (uint16_t)cursor_x);
    connector_set_wram16(runtime, 0x025du, (uint16_t)cursor_x);
    connector_set_wram16(runtime, 0x007fu, (uint16_t)(cursor_x / 8));
}

static void prepare_widescreen_cursor_input(SimCityRecomp *instance,
                                            uint16_t input_mask) {
    SCV11Runtime *runtime;
    int camera_pixels;
    int view_x;
    int fine_x;
    int cursor_base;
    uint16_t fine_word;
    int native_rebase_required;
    if (!instance || !instance->runtime) return;
    instance->widescreen_cursor_input_rebased = 0u;
    if (!connector_city_view(instance->runtime) ||
        !connector_map_focus(instance->runtime))
        return;
    if (instance->widescreen_cursor_extension_x != 0 &&
        (input_mask & SIMCITY_INPUT_A) != 0u &&
        (input_mask & (SIMCITY_INPUT_LEFT | SIMCITY_INPUT_RIGHT)) != 0u &&
        instance->widescreen_cursor_anchor_valid) {
        /* A+Left/Right is the native camera-pan command.  Convert the
           widened cursor extension into an equivalent permanent camera
           offset first, keeping the selected world cell unchanged, then let
           the core continue its normal pan from a native-safe cursor. */
        runtime = instance->runtime;
        camera_pixels = instance->widescreen_cursor_anchor_view_x * 8 +
            (int)(instance->widescreen_cursor_anchor_fine_x & 7u) +
            instance->widescreen_cursor_extension_x;
        view_x = camera_pixels / 8;
        fine_x = camera_pixels % 8;
        if (fine_x < 0) {
            --view_x;
            fine_x += 8;
        }
        fine_word = (uint16_t)((instance->widescreen_cursor_anchor_fine_x &
                                UINT16_C(0xfff8)) | (uint16_t)fine_x);
        cursor_base = instance->widescreen_cursor_extension_x < 0 ?
            connector_cursor_left_base(runtime) :
            connector_cursor_right_base(runtime);
        connector_set_wram16(runtime, 0x01bdu, (uint16_t)view_x);
        connector_set_wram16(runtime, 0x0139u, fine_word);
        connector_set_wram16(runtime, 0x01ebu, (uint16_t)cursor_base);
        connector_set_wram16(runtime, 0x025du, (uint16_t)cursor_base);
        connector_set_wram16(runtime, 0x007fu,
            (uint16_t)(cursor_base / 8));
        instance->widescreen_cursor_extension_x = 0;
        instance->widescreen_cursor_anchor_valid = 0u;
        cancel_widescreen_horizontal_scroll(runtime);
        return;
    }
    native_rebase_required =
        (instance->widescreen_cursor_extension_x < 0 &&
         (input_mask & SIMCITY_INPUT_B) != 0u) ||
        (instance->widescreen_cursor_extension_x != 0 &&
         (input_mask & (SIMCITY_INPUT_SELECT | SIMCITY_INPUT_X)) != 0u);
    if (instance->widescreen_cursor_extension_x != 0 &&
        (input_mask & (SIMCITY_INPUT_SELECT | SIMCITY_INPUT_X)) != 0u)
        cancel_widescreen_horizontal_scroll(instance->runtime);
    if (!native_rebase_required ||
        !instance->widescreen_cursor_anchor_valid) {
        store_widescreen_cursor_extension(instance);
        return;
    }
    /* Native city routines assume an 8-bit screen-space map cursor.  Rebase
       the camera for only the input-processing frame so negative placement
       confirms and Select/X HUD commands from either widened margin operate
       on the same world cell.  The widened camera is restored at the frame
       boundary. */
    runtime = instance->runtime;
    camera_pixels = instance->widescreen_cursor_anchor_view_x * 8 +
        (int)(instance->widescreen_cursor_anchor_fine_x & 7u) +
        instance->widescreen_cursor_extension_x;
    view_x = camera_pixels / 8;
    fine_x = camera_pixels % 8;
    if (fine_x < 0) {
        --view_x;
        fine_x += 8;
    }
    fine_word = (uint16_t)((instance->widescreen_cursor_anchor_fine_x &
                            UINT16_C(0xfff8)) | (uint16_t)fine_x);
    cursor_base = instance->widescreen_cursor_extension_x < 0 ?
        connector_cursor_left_base(runtime) :
        connector_cursor_right_base(runtime);
    connector_set_wram16(runtime, 0x01bdu, (uint16_t)view_x);
    connector_set_wram16(runtime, 0x0139u, fine_word);
    connector_set_wram16(runtime, 0x01ebu, (uint16_t)cursor_base);
    connector_set_wram16(runtime, 0x025du, (uint16_t)cursor_base);
    connector_set_wram16(runtime, 0x007fu, (uint16_t)(cursor_base / 8));
    instance->widescreen_cursor_input_rebased = 1u;
}

static void apply_widescreen_cursor_connector(SimCityRecomp *instance,
                                              uint16_t input_mask) {
    SCV11Runtime *runtime;
    int cursor_x;
    int camera_x;
    int world_x;
    int step;
    int cursor_base;
    int left_base;
    if (!instance || !instance->widescreen || !instance->runtime)
        return;
    runtime = instance->runtime;
    if (!connector_city_view(runtime)) {
        instance->widescreen_cursor_extension_x = 0;
        instance->widescreen_cursor_anchor_valid = 0u;
        instance->widescreen_cursor_input_rebased = 0u;
        return;
    }
    if (instance->widescreen_cursor_input_rebased) {
        restore_widescreen_cursor_camera(instance);
        instance->widescreen_cursor_input_rebased = 0u;
    }
    /* $01EB/$01ED are the map cursor only while $0201 is $00FF.  Toolbar
       focus reuses them for the hand cursor, so never overwrite the core's
       toolbar coordinates or animation state. */
    if (!connector_map_focus(runtime)) return;
    cursor_x = (int)(int16_t)connector_wram16(runtime, 0x01ebu);
    cursor_base = connector_cursor_right_base(runtime);
    left_base = connector_cursor_left_base(runtime);
    if (instance->widescreen_cursor_extension_x > 0 &&
        instance->widescreen_cursor_base_x != cursor_base) {
        instance->widescreen_cursor_extension_x = 0;
        instance->widescreen_cursor_anchor_valid = 0u;
    }
    camera_x = (int)(int16_t)connector_wram16(runtime, 0x01bdu) * 8 +
               (int)(connector_wram16(runtime, 0x0139u) & 7u);
    if (instance->widescreen_cursor_extension_x < 0 &&
        instance->widescreen_cursor_base_x != left_base) {
        instance->widescreen_cursor_extension_x = 0;
        instance->widescreen_cursor_anchor_valid = 0u;
    }
    world_x = camera_x +
              (instance->widescreen_cursor_extension_x < 0 ? left_base :
               (instance->widescreen_cursor_extension_x > 0 ? cursor_base :
                cursor_x)) + instance->widescreen_cursor_extension_x;
    if (camera_x < 0 && world_x < 0) {
        /* Native camera panning can recenter the cursor outside the west map
           edge. Preserve world pixel zero after LEFT is released as well;
           otherwise subsequent vertical movement replaces the corrected
           screen x position while the camera remains at its safety margin. */
        cursor_x = -camera_x;
        instance->widescreen_cursor_extension_x = 0;
        instance->widescreen_cursor_anchor_valid = 0u;
        connector_set_wram16(runtime, 0x01ebu, (uint16_t)cursor_x);
        connector_set_wram16(runtime, 0x025du, (uint16_t)cursor_x);
        connector_set_wram16(runtime, 0x007fu, (uint16_t)(cursor_x / 8));
        connector_set_wram16(runtime, 0x01ffu,
            (uint16_t)(connector_wram16(runtime, 0x01ffu) &
                       (uint16_t)~SIMCITY_INPUT_LEFT));
        return;
    }
    if ((input_mask & SIMCITY_INPUT_RIGHT) != 0u &&
        instance->widescreen_cursor_extension_x < 0 &&
        (input_mask & (SIMCITY_INPUT_LEFT | SIMCITY_INPUT_A)) == 0u) {
        instance->widescreen_cursor_extension_x = (int16_t)(
            instance->widescreen_cursor_extension_x + 2);
        if (instance->widescreen_cursor_extension_x > 0)
            instance->widescreen_cursor_extension_x = 0;
        if (instance->widescreen_cursor_extension_x == 0)
            instance->widescreen_cursor_anchor_valid = 0u;
        cancel_widescreen_horizontal_scroll(runtime);
    } else if ((input_mask & SIMCITY_INPUT_RIGHT) != 0u &&
        (input_mask & (SIMCITY_INPUT_LEFT | SIMCITY_INPUT_A)) == 0u &&
        (instance->widescreen_cursor_extension_x > 0 ||
         cursor_x >= cursor_base) &&
        world_x < 952) {
        if (instance->widescreen_cursor_extension_x == 0) {
            instance->widescreen_cursor_base_x = (int16_t)cursor_base;
            instance->widescreen_cursor_anchor_view_x =
                (int16_t)connector_wram16(runtime, 0x01bdu);
            instance->widescreen_cursor_anchor_fine_x =
                connector_wram16(runtime, 0x0139u);
            instance->widescreen_cursor_anchor_valid = 1u;
        }
        step = 952 - world_x;
        if (step > 2) step = 2;
        instance->widescreen_cursor_extension_x = (int16_t)(
            instance->widescreen_cursor_extension_x + step);
        if (instance->widescreen_cursor_extension_x >
            (int)SIMCITY_RECOMP_WIDESCREEN_MARGIN)
            instance->widescreen_cursor_extension_x =
                (int16_t)SIMCITY_RECOMP_WIDESCREEN_MARGIN;
        cancel_widescreen_horizontal_scroll(runtime);
    } else if ((input_mask & SIMCITY_INPUT_LEFT) != 0u &&
               instance->widescreen_cursor_extension_x > 0) {
        instance->widescreen_cursor_extension_x = (int16_t)(
            instance->widescreen_cursor_extension_x - 2);
        if (instance->widescreen_cursor_extension_x < 0)
            instance->widescreen_cursor_extension_x = 0;
        if (instance->widescreen_cursor_extension_x == 0)
            instance->widescreen_cursor_anchor_valid = 0u;
        cancel_widescreen_horizontal_scroll(runtime);
    } else if ((input_mask & SIMCITY_INPUT_LEFT) != 0u &&
               (input_mask & (SIMCITY_INPUT_RIGHT | SIMCITY_INPUT_A)) == 0u &&
               (instance->widescreen_cursor_extension_x < 0 ||
                cursor_x <= left_base) && world_x > 0) {
        if (instance->widescreen_cursor_extension_x == 0) {
            instance->widescreen_cursor_base_x = (int16_t)left_base;
            instance->widescreen_cursor_anchor_view_x =
                (int16_t)connector_wram16(runtime, 0x01bdu);
            instance->widescreen_cursor_anchor_fine_x =
                connector_wram16(runtime, 0x0139u);
            instance->widescreen_cursor_anchor_valid = 1u;
        }
        step = world_x;
        if (step > 2) step = 2;
        instance->widescreen_cursor_extension_x = (int16_t)(
            instance->widescreen_cursor_extension_x - step);
        if (instance->widescreen_cursor_extension_x <
            -(int)SIMCITY_RECOMP_WIDESCREEN_MARGIN)
            instance->widescreen_cursor_extension_x =
                -(int16_t)SIMCITY_RECOMP_WIDESCREEN_MARGIN;
        cancel_widescreen_horizontal_scroll(runtime);
    }
    store_widescreen_cursor_extension(instance);
}

static int history_reserve(SimCityRecomp *instance, uint32_t needed) {
    uint32_t capacity;
    uint16_t *grown;
    if (needed <= instance->input_history_capacity) return 1;
    capacity = instance->input_history_capacity ? instance->input_history_capacity : 4096u;
    while (capacity < needed) {
        if (capacity > UINT32_MAX / 2u) return 0;
        capacity *= 2u;
    }
    grown = (uint16_t *)realloc(instance->input_history, (size_t)capacity * sizeof(uint16_t));
    if (!grown) return 0;
    instance->input_history = grown;
    instance->input_history_capacity = capacity;
    return 1;
}

static void audio_queue_reset(SimCityRecomp *instance) {
    if (!instance) return;
    instance->audio_read_frame = 0u;
    instance->audio_write_frame = 0u;
    instance->audio_available_frames = 0u;
    instance->audio_overflow = 0u;
}

static void audio_sink(void *context, int16_t left, int16_t right) {
    SimCityRecomp *instance = (SimCityRecomp *)context;
    uint32_t frame;
    if (!instance) return;

    /* Host buffering is deliberately outside SCV11Runtime.  It is not SNES
       state and cannot change CPU, S-SMP, S-DSP, or generated-route state. */
    if (instance->audio_available_frames >=
        SIMCITY_HOST_PCM_CAPACITY_FRAMES) {
        instance->audio_overflow = 1u;
        return;
    }

    frame = instance->audio_write_frame;
    instance->audio_pcm[frame * SIMCITY_RECOMP_AUDIO_CHANNELS] = left;
    instance->audio_pcm[frame * SIMCITY_RECOMP_AUDIO_CHANNELS + 1u] = right;
    instance->audio_write_frame =
        (frame + 1u) % SIMCITY_HOST_PCM_CAPACITY_FRAMES;
    instance->audio_available_frames++;
}

static int render_current_frame(SimCityRecomp *instance, char *error,
                                size_t error_capacity) {
    unsigned width = instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_WIDTH :
                                            SIMCITY_RECOMP_FRAME_WIDTH;
    unsigned margin = instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u;
    memset(&instance->video, 0, sizeof(instance->video));
    if (!sc_v28_render_first_visible_frame(instance->runtime,
                                           width, margin,
                                           instance->bgr555,
                                           SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                           instance->bgra,
                                           SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                           &instance->video)) {
        set_error(instance,
                  instance->video.error[0] ? instance->video.error :
                  "The current PPU feature set cannot be rendered.",
                  error, error_capacity);
        return 0;
    }
    instance->last_error[0] = '\0';
    return 1;
}

size_t simcity_recomp_audio_discard(SimCityRecomp *instance) {
    size_t discarded;
    if (!instance) return 0u;
    discarded = instance->audio_available_frames;
    audio_queue_reset(instance);
    return discarded;
}

static int cold_reset(SimCityRecomp *instance, char *error,
                      size_t error_capacity) {
    uint8_t preserved_sram[SC_V11_SRAM_SIZE];
    uint8_t preserved_sram_dirty = 0u;
    int preserve_sram = 0;
    if (!instance || !instance->runtime || !instance->rom) {
        set_error(instance, "The static recompilation instance is incomplete.",
                  error, error_capacity);
        return 0;
    }

    preserve_sram = instance->initialized != 0u;
    if (preserve_sram) {
        memcpy(preserved_sram, instance->runtime->sram, sizeof(preserved_sram));
        preserved_sram_dirty = instance->runtime->sram_dirty;
    }

    memset(instance->runtime, 0, sizeof(*instance->runtime));
    memset(instance->bgr555, 0, sizeof(instance->bgr555));
    memset(instance->bgra, 0, sizeof(instance->bgra));
    memset(&instance->video, 0, sizeof(instance->video));
    instance->widescreen_cursor_extension_x = 0;
    instance->widescreen_cursor_anchor_valid = 0u;
    instance->widescreen_cursor_input_rebased = 0u;
    audio_queue_reset(instance);
    if (!instance->replaying_snapshot) instance->input_history_count = 0u;
    instance->last_error[0] = '\0';

    sc_v11_runtime_init(instance->runtime, instance->rom,
                        SIMCITY_RECOMP_ROM_SIZE);
    if (preserve_sram) {
        memcpy(instance->runtime->sram, preserved_sram, sizeof(preserved_sram));
        instance->runtime->sram_dirty = preserved_sram_dirty;
    }
    instance->initialized = 1u;
    sc_v11_set_audio_sink(instance->runtime, audio_sink, instance);
    if (instance->runtime->route_failed) {
        set_error(instance,
                  instance->runtime->route_error[0] ?
                  instance->runtime->route_error :
                  "The exact SimCity (USA) ROM is required.",
                  error, error_capacity);
        return 0;
    }

    /* Present the real power-on PPU state.  The host now observes every frame
       from reset onward; no hidden title-frame acceleration remains. */
    if (!render_current_frame(instance, error, error_capacity)) return 0;
    audio_queue_reset(instance);
    return 1;
}

const char *simcity_recomp_video_standard(void) {
    return "NTSC";
}

double simcity_recomp_nominal_fps(void) {
    /* Native NTSC hardware cadence is the single CPU, PPU, S-SMP, S-DSP
       and host-presentation master clock. */
    return (1890000000.0 / 88.0) /
           (double)SIMCITY_RECOMP_NTSC_AVERAGE_MASTER_CLOCKS_PER_FRAME;
}

double simcity_recomp_presentation_fps(void) {
    return (double)SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR /
           (double)SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
}

uint32_t simcity_recomp_host_audio_sample_rate(void) {
    return SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE;
}

uint32_t simcity_recomp_average_master_clocks_per_frame(void) {
    return SIMCITY_RECOMP_NTSC_AVERAGE_MASTER_CLOCKS_PER_FRAME;
}

int simcity_recomp_create(SimCityRecomp **out_instance,
                          const uint8_t *rom,
                          size_t rom_size,
                          char *error,
                          size_t error_capacity) {
    SimCityRecomp *instance;
    char static_error[192];
    if (out_instance) *out_instance = NULL;
    if (!out_instance || !rom || rom_size != SIMCITY_RECOMP_ROM_SIZE) {
        copy_text(error, error_capacity,
                  "The exact 524,288-byte SimCity (USA) ROM is required.");
        return 0;
    }
    instance = (SimCityRecomp *)calloc(1u, sizeof(*instance));
    if (!instance) {
        copy_text(error, error_capacity,
                  "Unable to allocate the static recompilation instance.");
        return 0;
    }
    instance->rom = (uint8_t *)malloc(SIMCITY_RECOMP_ROM_SIZE);
    instance->runtime = (SCV11Runtime *)calloc(1u, sizeof(*instance->runtime));
    if (!instance->rom || !instance->runtime) {
        simcity_recomp_destroy(instance);
        copy_text(error, error_capacity,
                  "Unable to allocate the static recompilation runtime.");
        return 0;
    }
    memcpy(instance->rom, rom, SIMCITY_RECOMP_ROM_SIZE);
    if (!sc_static_apu_acquire(static_error, sizeof(static_error))) {
        simcity_recomp_destroy(instance);
        copy_text(error,error_capacity,static_error);
        return 0;
    }
    instance->static_acquired = 1u;
    core_logf(instance, "create", "audio=FullStatic");
    if (!cold_reset(instance, error, error_capacity)) {
        core_logf(instance, "reset-failed", "error=%s",
                  error && *error ? error : instance->last_error);
        simcity_recomp_destroy(instance);
        return 0;
    }
    core_logf(instance, "cold-reset-ready", "");
    *out_instance = instance;
    return 1;
}

void simcity_recomp_destroy(SimCityRecomp *instance) {
    if (!instance) return;
    core_logf(instance, "destroy", "");
    if (instance->static_acquired) {
        sc_static_apu_release();
        instance->static_acquired=0u;
    }
    free(instance->input_history);
    free(instance->runtime);
    free(instance->rom);
    memset(instance, 0, sizeof(*instance));
    free(instance);
}

int simcity_recomp_reset(SimCityRecomp *instance,
                         char *error,
                         size_t error_capacity) {
    if (!instance) {
        copy_text(error, error_capacity,
                  "No static recompilation instance is loaded.");
        return 0;
    }
    return cold_reset(instance, error, error_capacity);
}

static int advance_internal(SimCityRecomp *instance,
                            uint16_t input_mask,
                            uint32_t frame_count,
                            SimCityRecompFrameResult *result,
                            int render_frame) {
    SimCityRecompFrameResult local;
    uint32_t target_frame;
    uint64_t guard;

    memset(&local, 0, sizeof(local));
    if (!instance || !instance->runtime || frame_count == 0u) {
        if (instance)
            copy_text(instance->last_error, sizeof(instance->last_error),
                      "A loaded instance and a nonzero frame count are required.");
        if (result) *result = local;
        return 0;
    }

    local.input_mask = input_mask;
    local.start_frame = instance->runtime->scheduler.frame;
    if (UINT32_MAX - local.start_frame < frame_count) {
        copy_text(instance->last_error, sizeof(instance->last_error),
                  "The requested frame range overflowed.");
        if (result) *result = local;
        return 0;
    }
    target_frame = local.start_frame + frame_count;
    if (!history_reserve(instance, instance->input_history_count + frame_count)) {
        copy_text(instance->last_error, sizeof(instance->last_error),
                  "Unable to grow deterministic snapshot history.");
        if (result) *result = local;
        return 0;
    }
    guard = SIMCITY_FRAME_INSTRUCTION_GUARD;
    instance->runtime->host_widescreen_enabled = instance->widescreen;
    prepare_widescreen_cursor_input(instance, input_mask);
    instance->runtime->joypad[0] = input_mask;

    {
        uint32_t guarded_frame = instance->runtime->scheduler.frame;
        while (!instance->runtime->route_failed &&
               instance->runtime->scheduler.frame < target_frame) {
            if (guard == 0u) {
                uint32_t address =
                    ((uint32_t)instance->runtime->machine.cpu.pbr << 16) |
                    instance->runtime->machine.cpu.pc;
                (void)sc_v11_fail(instance->runtime, address,
                    "per-frame generated callback guard exceeded");
                break;
            }
            --guard;
            if (!static_cpu_step(instance->runtime)) break;
            if (instance->runtime->scheduler.frame != guarded_frame) {
                guarded_frame = instance->runtime->scheduler.frame;
                apply_widescreen_cursor_connector(instance, input_mask);
                guard = SIMCITY_FRAME_INSTRUCTION_GUARD;
            }
        }
    }

    if (!instance->runtime->route_failed &&
        !sc_v11_smp_sync_to_master(
            instance->runtime,
            instance->runtime->scheduler.master_clock)) {
        instance->runtime->route_failed = 1u;
    }

    local.end_frame = instance->runtime->scheduler.frame;
    local.route_continued = (uint8_t)(
        !instance->runtime->route_failed && local.end_frame >= target_frame);

    if (!local.route_continued) {
        copy_text(instance->last_error, sizeof(instance->last_error),
                  instance->runtime->route_error[0] ?
                  instance->runtime->route_error :
                  guard == 0u ?
                  "The static route exceeded the per-frame instruction guard." :
                  "The static route ended before the requested frame.");
        core_logf(instance, "route-failed", "input=%04X error=%s",
                  input_mask, instance->last_error);
        if (result) *result = local;
        return 0;
    }

    if (render_frame) {
        memset(&instance->video, 0, sizeof(instance->video));
        {
            unsigned width = instance->widescreen ?
                SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH;
            unsigned margin = instance->widescreen ?
                SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u;
        if (sc_v28_render_first_visible_frame(instance->runtime,
                                              width, margin,
                                              instance->bgr555,
                                              SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                              instance->bgra,
                                              SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                              &instance->video)) {
            local.frame_rendered = 1u;
            instance->last_error[0] = '\0';
        } else {
            copy_text(local.renderer_error, sizeof(local.renderer_error),
                      instance->video.error[0] ? instance->video.error :
                      "The current PPU feature set cannot be rendered.");
            copy_text(instance->last_error, sizeof(instance->last_error),
                      local.renderer_error);
            core_logf(instance, "renderer-warning", "input=%04X error=%s",
                      input_mask, local.renderer_error);
        }
        }
    } else {
        instance->last_error[0] = '\0';
    }

    {
        uint32_t i;
        for (i = 0u; i < frame_count; ++i)
            instance->input_history[instance->input_history_count++] = input_mask;
    }
    if (instance->runtime->scheduler.frame % 60u == 0u) {
        core_logf(instance, "frame", "input=%04X rendered=%u pcm=%u",
                  input_mask, (unsigned)local.frame_rendered,
                  instance->audio_available_frames);
    }
    if (result) *result = local;
    return 1;
}

int simcity_recomp_advance(SimCityRecomp *instance,
                           uint16_t input_mask,
                           uint32_t frame_count,
                           SimCityRecompFrameResult *result) {
    return advance_internal(instance, input_mask, frame_count, result, 1);
}

int simcity_recomp_advance_headless(SimCityRecomp *instance,
                                    uint16_t input_mask,
                                    uint32_t frame_count,
                                    SimCityRecompFrameResult *result) {
    return advance_internal(instance, input_mask, frame_count, result, 0);
}

int simcity_recomp_render_current_frame(SimCityRecomp *instance,
                                        char *error,
                                        size_t error_capacity) {
    if (!instance || !instance->runtime) {
        copy_text(error, error_capacity, "No static recompilation instance is loaded.");
        return 0;
    }
    return render_current_frame(instance, error, error_capacity);
}

static uint32_t snapshot_hash(const uint16_t *history, uint32_t count) {
    uint32_t h = 2166136261u, i;
    for (i = 0u; i < count; ++i) {
        h ^= (uint8_t)history[i]; h *= 16777619u;
        h ^= (uint8_t)(history[i] >> 8); h *= 16777619u;
    }
    return h;
}
static uint32_t snapshot_hash_bytes(uint32_t h,const void *data,size_t size){
    const uint8_t *bytes=(const uint8_t*)data;size_t i;
    for(i=0u;i<size;++i){h^=bytes[i];h*=16777619u;}return h;
}

typedef struct SimCitySnapshotHeader {
    char magic[8];
    uint32_t version;
    uint32_t history_frames;
    uint32_t history_hash;
    uint32_t reserved;
} SimCitySnapshotHeader;
typedef struct SimCitySnapshotHeaderV11 {
    char magic[8];uint32_t version,history_frames,history_hash;
    uint32_t runtime_size,apu_size,payload_hash,reserved;
} SimCitySnapshotHeaderV11;

int simcity_recomp_snapshot_save(const SimCityRecomp *instance, const char *path,
                                 char *error, size_t error_capacity) {
    FILE *file;SimCitySnapshotHeaderV11 header;SCV11Runtime *runtime_copy;void *apu_snapshot;size_t apu_size;
    if (!instance || !path || !*path) { copy_text(error,error_capacity,"A loaded game and snapshot path are required."); return 0; }
    apu_size=sc_static_apu_snapshot_size();runtime_copy=(SCV11Runtime*)malloc(sizeof(*runtime_copy));apu_snapshot=malloc(apu_size);
    if(!runtime_copy||!apu_snapshot){free(runtime_copy);free(apu_snapshot);copy_text(error,error_capacity,"Unable to allocate direct snapshot state.");return 0;}
    memcpy(runtime_copy,instance->runtime,sizeof(*runtime_copy));runtime_copy->rom=NULL;runtime_copy->rom_size=0u;runtime_copy->audio_sink=NULL;runtime_copy->audio_sink_context=NULL;
    if(!sc_static_apu_snapshot_save(apu_snapshot,apu_size)){free(runtime_copy);free(apu_snapshot);copy_text(error,error_capacity,"Unable to capture static audio state.");return 0;}
    memset(&header,0,sizeof(header));memcpy(header.magic,"SCSNAP11",8u);header.version=11u;header.history_frames=instance->input_history_count;
    header.history_hash=snapshot_hash(instance->input_history,instance->input_history_count);
    header.runtime_size=(uint32_t)sizeof(*runtime_copy);header.apu_size=(uint32_t)apu_size;
    header.payload_hash=snapshot_hash_bytes(2166136261u,runtime_copy,sizeof(*runtime_copy));header.payload_hash=snapshot_hash_bytes(header.payload_hash,apu_snapshot,apu_size);
    file=fopen(path,"wb"); if(!file){free(runtime_copy);free(apu_snapshot);copy_text(error,error_capacity,"Unable to create snapshot file.");return 0;}
    if(fwrite(&header,1u,sizeof(header),file)!=sizeof(header) ||
       (header.history_frames&&fwrite(instance->input_history,sizeof(uint16_t),header.history_frames,file)!=header.history_frames)||
       fwrite(runtime_copy,1u,sizeof(*runtime_copy),file)!=sizeof(*runtime_copy)||fwrite(apu_snapshot,1u,apu_size,file)!=apu_size){
        free(runtime_copy);free(apu_snapshot);fclose(file);copy_text(error,error_capacity,"Unable to write complete snapshot file.");return 0;
    }
    free(runtime_copy);free(apu_snapshot);
    if(fclose(file)!=0){copy_text(error,error_capacity,"Unable to finalize snapshot file.");return 0;}
    copy_text(error,error_capacity,""); return 1;
}

int simcity_recomp_snapshot_load(SimCityRecomp *instance, const char *path,
                                 char *error, size_t error_capacity) {
    FILE *file; SimCitySnapshotHeader header; uint16_t *history=NULL; uint32_t i;
    SimCityRecompFrameResult frame;
    if (!instance || !path || !*path) { copy_text(error,error_capacity,"A loaded game and snapshot path are required."); return 0; }
    file=fopen(path,"rb"); if(!file){copy_text(error,error_capacity,"Unable to open snapshot file.");return 0;}
    if(fread(&header,1u,sizeof(header),file)!=sizeof(header)){
        fclose(file); copy_text(error,error_capacity,"Snapshot header is invalid or unsupported."); return 0;
    }
    if(memcmp(header.magic,"SCSNAP11",8u)==0&&header.version==11u){
        SimCitySnapshotHeaderV11 dh;SCV11Runtime *loaded=NULL;void *apu=NULL;uint32_t payload;int trailing;
        if(fseek(file,0,SEEK_SET)!=0||fread(&dh,1u,sizeof(dh),file)!=sizeof(dh)||dh.history_frames>10000000u||dh.runtime_size!=sizeof(SCV11Runtime)||dh.apu_size!=sc_static_apu_snapshot_size()){
            fclose(file);copy_text(error,error_capacity,"Direct snapshot is invalid or from another build.");return 0;
        }
        if(dh.history_frames){history=(uint16_t*)malloc((size_t)dh.history_frames*sizeof(uint16_t));if(!history||fread(history,sizeof(uint16_t),dh.history_frames,file)!=dh.history_frames){free(history);fclose(file);copy_text(error,error_capacity,"Snapshot history is truncated.");return 0;}}
        loaded=(SCV11Runtime*)malloc(sizeof(*loaded));apu=malloc(dh.apu_size);
        if(!loaded||!apu||fread(loaded,1u,sizeof(*loaded),file)!=sizeof(*loaded)||fread(apu,1u,dh.apu_size,file)!=dh.apu_size||(trailing=fgetc(file))!=EOF||ferror(file)){
            free(history);free(loaded);free(apu);fclose(file);copy_text(error,error_capacity,"Direct snapshot data is truncated or invalid.");return 0;
        }
        fclose(file);payload=snapshot_hash_bytes(2166136261u,loaded,sizeof(*loaded));payload=snapshot_hash_bytes(payload,apu,dh.apu_size);
        if(snapshot_hash(history,dh.history_frames)!=dh.history_hash||payload!=dh.payload_hash||!history_reserve(instance,dh.history_frames)){
            free(history);free(loaded);free(apu);copy_text(error,error_capacity,"Direct snapshot checksum or allocation failed.");return 0;
        }
        memcpy(instance->runtime,loaded,sizeof(*loaded));instance->runtime->rom=instance->rom;instance->runtime->rom_size=SIMCITY_RECOMP_ROM_SIZE;sc_v11_set_audio_sink(instance->runtime,audio_sink,instance);
        if(!sc_static_apu_snapshot_load(apu,dh.apu_size,error,error_capacity)){free(history);free(loaded);free(apu);return 0;}
        if(dh.history_frames)memcpy(instance->input_history,history,(size_t)dh.history_frames*sizeof(uint16_t));instance->input_history_count=dh.history_frames;
        free(history);free(loaded);free(apu);if(!render_current_frame(instance,error,error_capacity))return 0;audio_queue_reset(instance);copy_text(error,error_capacity,"");return 1;
    }
    if(memcmp(header.magic,"SCSNAP10",8u)!=0||header.version!=10u||header.history_frames>10000000u){fclose(file);copy_text(error,error_capacity,"Snapshot header is invalid or unsupported.");return 0;}
    if(header.history_frames){history=(uint16_t*)malloc((size_t)header.history_frames*sizeof(uint16_t)); if(!history){fclose(file);copy_text(error,error_capacity,"Unable to allocate snapshot history.");return 0;}
        if(fread(history,sizeof(uint16_t),header.history_frames,file)!=header.history_frames){free(history);fclose(file);copy_text(error,error_capacity,"Snapshot history is truncated.");return 0;}}
    fclose(file);
    if(snapshot_hash(history,header.history_frames)!=header.history_hash){free(history);copy_text(error,error_capacity,"Snapshot history checksum failed.");return 0;}
    instance->replaying_snapshot=1u;
    if(!cold_reset(instance,error,error_capacity)){instance->replaying_snapshot=0u;free(history);return 0;}
    instance->input_history_count=0u;
    for(i=0u;i<header.history_frames;){
        uint32_t run=1u;
        while(i+run<header.history_frames && history[i+run]==history[i] && run<UINT32_MAX) run++;
        if(!simcity_recomp_advance_headless(instance,history[i],run,&frame)){
            instance->replaying_snapshot=0u; free(history); return 0;
        }
        i+=run;
    }
    if(!render_current_frame(instance,error,error_capacity)){
        instance->replaying_snapshot=0u; free(history); return 0;
    }
    instance->replaying_snapshot=0u; free(history); audio_queue_reset(instance);
    /* Legacy input-replay snapshots are upgraded in place after one
       successful replay so every subsequent load uses direct machine state. */
    (void)simcity_recomp_snapshot_save(instance,path,NULL,0u);
    copy_text(error,error_capacity,""); return 1;
}

uint32_t simcity_recomp_snapshot_history_frames(const SimCityRecomp *instance) {
    return instance ? instance->input_history_count : 0u;
}

size_t simcity_recomp_sram_size(void) {
    return SC_V11_SRAM_SIZE;
}

int simcity_recomp_sram_copy(const SimCityRecomp *instance,
                             void *destination, size_t capacity) {
    if (!instance || !instance->runtime || !destination ||
        capacity < SC_V11_SRAM_SIZE) return 0;
    memcpy(destination, instance->runtime->sram, SC_V11_SRAM_SIZE);
    return 1;
}

int simcity_recomp_sram_load(SimCityRecomp *instance,
                             const void *source, size_t size,
                             char *error, size_t error_capacity) {
    if (!instance || !instance->runtime || !source ||
        size != SC_V11_SRAM_SIZE) {
        set_error(instance, "The battery SRAM image must be exactly 32 KiB.",
                  error, error_capacity);
        return 0;
    }
    memcpy(instance->runtime->sram, source, SC_V11_SRAM_SIZE);
    instance->runtime->sram_dirty = 0u;
    copy_text(error, error_capacity, "");
    core_logf(instance, "sram-load", "bytes=%u", (unsigned)SC_V11_SRAM_SIZE);
    return 1;
}

int simcity_recomp_sram_dirty(const SimCityRecomp *instance) {
    return instance && instance->runtime && instance->runtime->sram_dirty != 0u;
}

void simcity_recomp_sram_mark_clean(SimCityRecomp *instance) {
    if (instance && instance->runtime) instance->runtime->sram_dirty = 0u;
}

int simcity_recomp_load_diagnostic_runtime_state(
    SimCityRecomp *instance,const char *path,char *error,size_t error_capacity) {
    FILE *file; SCV11Runtime *loaded; int trailing;
    if(!instance||!instance->runtime||!instance->rom||!path||!*path){
        copy_text(error,error_capacity,"A loaded game and diagnostic state path are required.");return 0;
    }
    file=fopen(path,"rb");if(!file){copy_text(error,error_capacity,"Unable to open diagnostic runtime state.");return 0;}
    loaded=(SCV11Runtime*)malloc(sizeof(*loaded));
    if(!loaded){fclose(file);copy_text(error,error_capacity,"Unable to allocate diagnostic runtime state.");return 0;}
    if(fread(loaded,1u,sizeof(*loaded),file)!=sizeof(*loaded)||(trailing=fgetc(file))!=EOF||ferror(file)){
        free(loaded);fclose(file);copy_text(error,error_capacity,"Diagnostic runtime state is truncated or from another build.");return 0;
    }
    fclose(file);memcpy(instance->runtime,loaded,sizeof(*loaded));free(loaded);
    instance->runtime->rom=instance->rom;instance->runtime->rom_size=SIMCITY_RECOMP_ROM_SIZE;
    sc_v11_set_audio_sink(instance->runtime,audio_sink,instance);
    instance->input_history_count=0u;audio_queue_reset(instance);
    instance->widescreen_cursor_extension_x=0;
    instance->widescreen_cursor_anchor_valid=0u;
    instance->widescreen_cursor_input_rebased=0u;
    if(!render_current_frame(instance,error,error_capacity))return 0;
    copy_text(error,error_capacity,"");return 1;
}

const uint32_t *simcity_recomp_frame_bgra(const SimCityRecomp *instance) {
    return instance ? instance->bgra : NULL;
}

uint32_t simcity_recomp_frame_width(const SimCityRecomp *instance) {
    return instance && instance->widescreen ?
        SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH;
}

int simcity_recomp_widescreen_enabled(const SimCityRecomp *instance) {
    return instance && instance->widescreen != 0u;
}

int simcity_recomp_set_widescreen(SimCityRecomp *instance, int enabled,
                                  char *error, size_t error_capacity) {
    uint8_t value;
    if (!instance || !instance->runtime) {
        copy_text(error, error_capacity,
                  "A loaded static core is required to change display geometry.");
        return 0;
    }
    value = enabled ? 1u : 0u;
    if (instance->widescreen == value) {
        instance->runtime->host_widescreen_enabled = value;
        copy_text(error, error_capacity, "");
        return 1;
    }
    instance->widescreen = value;
    instance->runtime->host_widescreen_enabled = value;
    if (!value) {
        instance->widescreen_cursor_extension_x = 0;
        instance->widescreen_cursor_anchor_valid = 0u;
        instance->widescreen_cursor_input_rebased = 0u;
    }
    return render_current_frame(instance, error, error_capacity);
}

uint32_t simcity_recomp_current_frame(const SimCityRecomp *instance) {
    return instance && instance->runtime ?
           instance->runtime->scheduler.frame : 0u;
}

uint64_t simcity_recomp_instruction_count(const SimCityRecomp *instance) {
    return instance && instance->runtime ?
           instance->runtime->scheduler.cpu_instructions : 0u;
}

int simcity_recomp_failed(const SimCityRecomp *instance) {
    return !instance || !instance->runtime ||
           instance->runtime->route_failed != 0u;
}

int simcity_recomp_read_wram(const SimCityRecomp *instance,
                             uint32_t offset,
                             void *destination,
                             size_t length) {
    size_t start=(size_t)offset;
    if(!instance || !instance->runtime || !destination) return 0;
    if(start>sizeof(instance->runtime->machine.wram) ||
       length>sizeof(instance->runtime->machine.wram)-start) return 0;
    if(length) memcpy(destination,instance->runtime->machine.wram+start,length);
    return 1;
}

const char *simcity_recomp_last_error(const SimCityRecomp *instance) {
    return instance ? instance->last_error :
           "No static recompilation instance is loaded.";
}

size_t simcity_recomp_audio_available(const SimCityRecomp *instance) {
    return instance ? instance->audio_available_frames : 0u;
}

size_t simcity_recomp_audio_read(SimCityRecomp *instance,
                                 int16_t *interleaved_stereo,
                                 size_t frame_capacity) {
    size_t count = 0u;
    if (!instance || !interleaved_stereo || frame_capacity == 0u) return 0u;

    while (count < frame_capacity && instance->audio_available_frames > 0u) {
        uint32_t frame = instance->audio_read_frame;
        interleaved_stereo[count * SIMCITY_RECOMP_AUDIO_CHANNELS] =
            instance->audio_pcm[frame * SIMCITY_RECOMP_AUDIO_CHANNELS];
        interleaved_stereo[count * SIMCITY_RECOMP_AUDIO_CHANNELS + 1u] =
            instance->audio_pcm[frame * SIMCITY_RECOMP_AUDIO_CHANNELS + 1u];
        instance->audio_read_frame =
            (frame + 1u) % SIMCITY_HOST_PCM_CAPACITY_FRAMES;
        instance->audio_available_frames--;
        count++;
    }
    return count;
}

int simcity_recomp_audio_overflowed(const SimCityRecomp *instance) {
    return instance && instance->audio_overflow != 0u;
}

void simcity_recomp_audio_clear_overflow(SimCityRecomp *instance) {
    if (instance) instance->audio_overflow = 0u;
}

int simcity_recomp_audio_static_status(const SimCityRecomp *instance,
                                       SimCityRecompAudioStaticStatus *status) {
    SCStaticApuStatus source;
    unsigned i; uint32_t observed=0u;
    if(!instance||!instance->runtime||!status||!sc_static_apu_status(&source))return 0;
    memset(status,0,sizeof(*status));
    for(i=0u;i<SC_V11_SMP_CODE_BYTES;++i){uint8_t v=instance->runtime->smp_core.observed_pc[i];while(v){observed+=(uint32_t)(v&1u);v>>=1;}}
    status->current_epoch=source.current_epoch;status->route_failed=(uint8_t)(instance->runtime->route_failed||source.aot_failed);
    status->current_smp_pc=source.smp_pc;status->compiled_instruction_count=SC_INITIAL_SMP_AOT_TOTAL_CONTEXTS;
    status->compiled_driver_instruction_count=SC_INITIAL_SMP_AOT_DRIVER_INSTRUCTIONS;
    status->observed_instruction_count=observed;status->opcode_mismatches=(uint32_t)(source.aot_fail_reason==2u);
    status->code_write_barriers=source.code_write_barriers;status->validated_instructions=source.aot_validated_instructions;
    copy_text(status->manifest_sha256, sizeof(status->manifest_sha256),
              SC_INITIAL_SMP_AOT_AUTHORITY_SHA256);
    return 1;
}


int simcity_recomp_audio_transport_status(const SimCityRecomp *instance,
                                          SimCityRecompAudioTransportStatus *status) {
    const SCAudioTransportState *transport;
    uint32_t observed = 0u;
    uint32_t mask;
    if (!instance || !instance->runtime || !status) return 0;
    memset(status, 0, sizeof(*status));
    transport = &instance->runtime->audio_transport;
    mask = transport->observed_access_site_mask;
    while (mask) { observed += mask & 1u; mask >>= 1; }
    status->ready_observed = (uint8_t)(transport->ready_mask == 3u);
    status->upload_handshake_started = transport->upload_handshake_started;
    status->upload_complete = transport->upload_complete;
    status->upload_verified = transport->upload_verified;
    status->entrypoint = transport->entrypoint;
    status->upload_block_count = transport->upload_block_count;
    status->upload_write_count = transport->upload_write_count;
    status->upload_unique_byte_count = transport->upload_unique_byte_count;
    status->upload_overlap_writes = transport->upload_overlap_writes;
    status->upload_verify_mismatches = transport->upload_verify_mismatches;
    status->generated_scpu_apu_sites = sc_audio_scpu_access_site_count();
    status->observed_scpu_apu_sites = observed;
    status->unmanifested_scpu_apu_accesses = transport->unmanifested_cpu_accesses;
    status->post_upload_scpu_reads = transport->post_upload_cpu_reads;
    status->post_upload_scpu_writes = transport->post_upload_cpu_writes;
    copy_text(status->upload_image_sha256, sizeof(status->upload_image_sha256), transport->image_sha256);
    copy_text(status->upload_mask_sha256, sizeof(status->upload_mask_sha256), transport->mask_sha256);
    copy_text(status->scpu_apu_manifest_sha256, sizeof(status->scpu_apu_manifest_sha256), SC_AUDIO_SCPU_ACCESS_MANIFEST_SHA256);
    return 1;
}
