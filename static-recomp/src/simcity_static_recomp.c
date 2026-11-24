#include "simcity_static_recomp.h"
#include "sc_experiment_config.h"

#include "sc_v11_runtime.h"
#include "sc_v28_video.h"
#include "sc_world_map.h"
#include "sc_world_catalog_draw.h"
#include "sc_stock_map_trace.h"
#include "sc_v11_audio_epoch_manifest.h"
#include "sc_audio_scpu_access_manifest.h"
#include "audio/initial-smp-aot/sc_initial_smp_aot_authority.h"
#include "sc_static_apu.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#ifdef _WIN32
#include <windows.h>
#endif

#define SIMCITY_FRAME_INSTRUCTION_GUARD UINT64_C(50000)
#define SIMCITY_HOST_PCM_CAPACITY_FRAMES 65536u

typedef struct SCStockWorldCity {
    uint16_t tiles[SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT];
    SimCityRecompStockWorldPower work;
} SCStockWorldCity;

typedef struct SCStockWorldNativeSlot {
    uint16_t *tiles;
    uint32_t identity;
} SCStockWorldNativeSlot;

struct SimCityRecomp {
    uint8_t *rom;
    SCV11Runtime *runtime;
    SCWorldMap *world;
    SCStockWorldCity *stock_world;
    SCStockWorldNativeSlot stock_native_slots[2];
    uint8_t *stock_native_committed_sram;
    int stock_native_has_commit;
    int sram_seed_loaded;
    int stock_native_storage_dirty;
    uint64_t stock_native_storage_revision;
    uint8_t stock_world_pending;
    uint8_t stock_world_template_id;
    uint8_t world_catalog_enabled, world_catalog_phase, world_catalog_id, world_catalog_route_frames;
    uint8_t world_catalog_tick_pending;
    uint16_t world_catalog_last_input;
    uint16_t world_catalog_swallow;
    unsigned world_demo_action, world_demo_menu_frames;
    uint8_t world_menu_state, world_demo_active, world_demo_release;
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
    uint64_t audio_dropped_frames;
    uint8_t static_acquired;
    char last_error[256];
    uint16_t *input_history;
    uint32_t input_history_count;
    uint32_t input_history_capacity;
    uint8_t replaying_snapshot;
    uint8_t initialized;
};

static void copy_text(char *destination, size_t capacity, const char *source);
static void stock_world_expand_camera(SCV11Runtime *runtime);
static uint32_t snapshot_hash_bytes(uint32_t h, const void *data, size_t size);

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
        instance->audio_dropped_frames++;
        return;
    }

    frame = instance->audio_write_frame;
    instance->audio_pcm[frame * SIMCITY_RECOMP_AUDIO_CHANNELS] = left;
    instance->audio_pcm[frame * SIMCITY_RECOMP_AUDIO_CHANNELS + 1u] = right;
    instance->audio_write_frame =
        (frame + 1u) % SIMCITY_HOST_PCM_CAPACITY_FRAMES;
    instance->audio_available_frames++;
}

int simcity_recomp_world_map_begin(SimCityRecomp *instance) {
    if (!instance || !instance->initialized || instance->world || instance->stock_world ||
        instance->stock_world_pending) return 0;
    if (instance->widescreen_cursor_anchor_valid) return 0;
    instance->world = sc_world_map_create();
    if (!instance->world) return 0;
    core_logf(instance, "world-map-begin", "width=240 height=200 guest_input=neutral");
    return 1;
}

int simcity_recomp_world_menu_ready(const SimCityRecomp *instance) {
    return instance && instance->runtime && !instance->world && !instance->stock_world &&
           !instance->runtime->route_failed && instance->world_menu_state == 3u &&
           connector_wram16(instance->runtime, 0x14u) == 3u &&
           connector_wram16(instance->runtime, 0x12u) == 0u;
}

int simcity_recomp_stock_world_request_new_city(SimCityRecomp *instance) {
    return simcity_recomp_stock_world_request_template(instance, 0u);
}

int simcity_recomp_stock_world_request_template(SimCityRecomp *instance, unsigned id) {
    if (!simcity_recomp_world_menu_ready(instance)) return 0;
    if (id && !simcity_recomp_world_map_template_info(id)) return 0;
    instance->stock_world_template_id = (uint8_t)id;
    instance->stock_world_pending = 1u;
    core_logf(instance, "stock-world-new-city-request", "source=native-main-menu template=%u", id);
    return 1;
}

int simcity_recomp_stock_world_new_city_pending(const SimCityRecomp *instance) {
    return instance && instance->stock_world_pending != 0u;
}

enum { CATALOG_ROUTE = SIMCITY_WORLD_CATALOG_LIST + 1 };

static void reset_world_catalog_input(SimCityRecomp *instance) {
    instance->world_catalog_phase = 0u;
    instance->world_catalog_id = 1u;
    instance->world_catalog_route_frames = 0u;
    instance->world_catalog_last_input = 0u;
    instance->world_catalog_swallow = 0u;
    instance->world_catalog_tick_pending = 0u;
}

void simcity_recomp_world_catalog_enable(SimCityRecomp *instance, int enabled) {
    if (!instance) return;
    instance->world_catalog_enabled = enabled != 0;
    reset_world_catalog_input(instance);
}

enum SimCityWorldCatalogScreen simcity_recomp_world_catalog_view(const SimCityRecomp *instance,
    unsigned *selected_id) {
    if (selected_id) *selected_id = instance && instance->world_catalog_id ? instance->world_catalog_id : 1u;
    if (!instance || !instance->world_catalog_enabled || !simcity_recomp_world_menu_ready(instance))
        return SIMCITY_WORLD_CATALOG_HIDDEN;
    return instance->world_catalog_phase == SIMCITY_WORLD_CATALOG_FOCUSED ? SIMCITY_WORLD_CATALOG_FOCUSED :
        (instance->world_catalog_phase == SIMCITY_WORLD_CATALOG_LIST ||
         instance->world_catalog_phase == CATALOG_ROUTE) ?
            SIMCITY_WORLD_CATALOG_LIST : SIMCITY_WORLD_CATALOG_MAIN;
}

static uint16_t world_catalog_guest_input(SimCityRecomp *instance, uint16_t input) {
    if (!instance->world_catalog_enabled || instance->replaying_snapshot) return input;
    instance->world_catalog_swallow &= input;
    /* Inputs pressed during the scripted handoff belong to the catalog.
       Carry that suppression into the first New City frame, even if
       the player released and pressed B again during the transition. */
    if (instance->world_catalog_phase == CATALOG_ROUTE)
        instance->world_catalog_swallow |= input;
    input &= (uint16_t)~instance->world_catalog_swallow;
    const uint16_t tapped = input & (uint16_t)~instance->world_catalog_last_input;
    instance->world_catalog_last_input = input;
    if (!simcity_recomp_world_menu_ready(instance)) {
        instance->world_catalog_phase = 0u;
        return input;
    }
    const unsigned native_selection = instance->runtime->machine.wram[0x3eu];
    switch (instance->world_catalog_phase) {
    case CATALOG_ROUTE: {
        const unsigned frame = instance->world_catalog_route_frames++;
        if (frame < 90u) {
            /* Drive the original menu, without writing its selection or
               setup state. Include a release interval between taps. */
            if (frame % 12u >= 3u) return 0u;
            if (native_selection == 3u) return SIMCITY_INPUT_UP;
            if (native_selection == 2u) return SIMCITY_INPUT_B;
        }
        instance->stock_world_pending = 0u;
        instance->world_catalog_phase = SIMCITY_WORLD_CATALOG_LIST;
        return 0u;
    }
    case SIMCITY_WORLD_CATALOG_LIST:
        if (tapped & SIMCITY_INPUT_X) instance->world_catalog_phase = SIMCITY_WORLD_CATALOG_FOCUSED;
        else if (tapped & (SIMCITY_INPUT_UP | SIMCITY_INPUT_DOWN)) {
            /* Opposing inputs can arrive from keyboard and controller.
               Don't move, or confirm the wrong row, on that frame. */
            const unsigned direction = input & (SIMCITY_INPUT_UP | SIMCITY_INPUT_DOWN);
            if (direction == SIMCITY_INPUT_UP) {
                instance->world_catalog_id = instance->world_catalog_id == 1u ?
                    SIMCITY_WORLD_MAP_TEMPLATE_COUNT : (uint8_t)(instance->world_catalog_id - 1u);
                instance->world_catalog_tick_pending = 1u;
            } else if (direction == SIMCITY_INPUT_DOWN) {
                instance->world_catalog_id = instance->world_catalog_id == SIMCITY_WORLD_MAP_TEMPLATE_COUNT ?
                    1u : (uint8_t)(instance->world_catalog_id + 1u);
                instance->world_catalog_tick_pending = 1u;
            }
        }
        else if ((tapped & SIMCITY_INPUT_B) &&
                 simcity_recomp_stock_world_request_template(instance, instance->world_catalog_id)) {
            instance->world_catalog_swallow |= input;
            instance->world_catalog_route_frames = 0u;
            instance->world_catalog_phase = CATALOG_ROUTE;
        }
        return 0u;
    case SIMCITY_WORLD_CATALOG_FOCUSED:
        if (tapped & SIMCITY_INPUT_B) instance->world_catalog_phase = SIMCITY_WORLD_CATALOG_LIST;
        else if (tapped & (SIMCITY_INPUT_UP | SIMCITY_INPUT_X)) {
            if (tapped & SIMCITY_INPUT_UP) instance->world_catalog_tick_pending = 1u;
            instance->world_catalog_swallow |= input;
            instance->world_catalog_phase = 0u;
        }
        return 0u;
    default:
        if (!instance->stock_world_pending && native_selection == 3u && (tapped & SIMCITY_INPUT_DOWN)) {
            instance->world_catalog_phase = SIMCITY_WORLD_CATALOG_FOCUSED;
            instance->world_catalog_tick_pending = 1u;
            return 0u;
        }
        return input;
    }
}

int simcity_recomp_stock_world_active(const SimCityRecomp *instance) {
    return instance && instance->stock_world != NULL;
}

int simcity_recomp_stock_world_tile(const SimCityRecomp *instance,
                                  unsigned x, unsigned y, uint16_t *tile) {
    if (!simcity_recomp_stock_world_active(instance) || !tile ||
        x >= SC_STOCK_WORLD_WIDTH || y >= SC_STOCK_WORLD_HEIGHT) return 0;
    *tile = instance->stock_world->tiles[(size_t)y * SC_STOCK_WORLD_WIDTH + x];
    return 1;
}

int simcity_recomp_stock_world_copy_tiles(const SimCityRecomp *instance,
                                         uint16_t *tiles, size_t capacity) {
    const size_t count = (size_t)SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT;
    if (!simcity_recomp_stock_world_active(instance) || !tiles || capacity < count) return 0;
    memcpy(tiles, instance->stock_world->tiles, count * sizeof(*tiles));
    return 1;
}

int simcity_recomp_stock_world_sample(const SimCityRecomp *instance,
    unsigned x, unsigned y, SimCityRecompStockWorldSample *sample) {
    if (!simcity_recomp_stock_world_active(instance) || !sample ||
        x >= SC_STOCK_WORLD_WIDTH || y >= SC_STOCK_WORLD_HEIGHT) return 0;
    const SimCityRecompStockWorldPower *work = &instance->stock_world->work;
    const unsigned half = (y / 2u) * (SC_STOCK_WORLD_WIDTH / 2u) + x / 2u;
    const unsigned coarse = (y / 8u) * (SC_STOCK_WORLD_WIDTH / 8u) + x / 8u;
    *sample = (SimCityRecompStockWorldSample){
        work->completed_cycles, work->density_cycles, work->environment_cycles,
        work->crime_cycles, work->fire_cycles, work->census.visited,
        work->census.order_errors, work->order_errors, work->traffic_writes,
        work->traffic_west, work->traffic_east, (int16_t)work->growth_rate[coarse],
        work->traffic[half], work->land_value[half], work->pollution[half],
        work->population_density[half], work->crime[half],
        work->service_coverage[1][coarse], work->service_coverage[0][coarse],
        work->density_visits, work->density_written, work->pollution_written, work->crime_written
    };
    return 1;
}

static int stock_world_commit_new_city(SimCityRecomp *instance) {
    if (instance->stock_world_pending != 2u || !connector_city_view(instance->runtime) ||
        !connector_map_focus(instance->runtime)) return 1;
    SCStockWorldCity *world = calloc(1u, sizeof(*world));
    if (!world) return 0;
    /* Start from the freshly generated landform, not the contents of a
       stock save. Copy only scenery: one budget and one sim for the world. */
    const unsigned template_id = instance->stock_world_template_id;
    if (template_id) {
        if (!simcity_recomp_world_map_template_tiles(template_id, world->tiles,
                SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT)) { free(world); return 0; }
    } else for (unsigned y = 0u; y < SC_STOCK_WORLD_HEIGHT; ++y)
        for (unsigned x = 0u; x < SC_STOCK_WORLD_WIDTH; ++x) {
            const unsigned i = (y % SC_STOCK_TILE_HEIGHT) * SC_STOCK_TILE_WIDTH +
                               x % SC_STOCK_TILE_WIDTH;
            const uint16_t tile = connector_wram16(instance->runtime, SC_STOCK_TILE_BASE + 2u * i) &
                                  0x03ffu;
            world->tiles[(size_t)y * SC_STOCK_WORLD_WIDTH + x] = tile < 0x28u ? tile : 0u;
        }
    instance->stock_world = world;
    instance->stock_world_pending = 0u;
    instance->widescreen_cursor_extension_x = 0;
    instance->widescreen_cursor_anchor_valid = 0u;
    stock_world_expand_camera(instance->runtime);
    core_logf(instance, "stock-world-new-city-active", "width=240 height=200 template=%u", template_id);
    return 1;
}

static void stock_world_end(SimCityRecomp *instance) {
    free(instance->stock_world);
    instance->stock_world = NULL;
    instance->stock_world_pending = 0u;
}

static const uint8_t *stock_authoritative_sram(const SimCityRecomp *instance) {
    return instance->stock_native_has_commit || instance->sram_seed_loaded ?
        instance->stock_native_committed_sram : NULL;
}

/* The original two slots are still responsible for the city metadata and
   slot UI. Associate each expansion with its own native payload, not just
   the number, so a replaced SRAM image cannot attach another city's map. */
static uint32_t stock_native_slot_identity(const uint8_t *sram, unsigned slot) {
    const size_t block = 0x3ff0u;
    return snapshot_hash_bytes(2166136261u,
        sram + slot * block + 0x10u, block - 0x10u);
}

static int stock_native_save_city(SimCityRecomp *instance) {
    /* Legacy snapshots replay controller history, including old Save
       commands. Replaying one must not replace a live native slot. */
    if (instance->replaying_snapshot && instance->stock_native_committed_sram)
        return 1;
    const unsigned selected = connector_wram16(instance->runtime, 0x0423u);
    if (selected < 1u || selected > 2u) return 1;
    SCStockWorldNativeSlot *record = &instance->stock_native_slots[selected - 1u];
    if (!instance->stock_world) {
        if (instance->stock_native_committed_sram) {
            memcpy(instance->stock_native_committed_sram, instance->runtime->sram, SC_V11_SRAM_SIZE);
            instance->stock_native_has_commit = 1;
            instance->stock_native_storage_dirty = 1;
            ++instance->stock_native_storage_revision;
        }
        free(record->tiles);
        *record = (SCStockWorldNativeSlot){0};
        return 1;
    }
    if (!record->tiles) record->tiles = malloc(sizeof(instance->stock_world->tiles));
    if (!record->tiles) return 0;
    memcpy(record->tiles, instance->stock_world->tiles, sizeof(instance->stock_world->tiles));
    record->identity = stock_native_slot_identity(instance->runtime->sram, selected - 1u);
    if (instance->stock_native_committed_sram) {
        memcpy(instance->stock_native_committed_sram, instance->runtime->sram, SC_V11_SRAM_SIZE);
        instance->stock_native_has_commit = 1;
        instance->stock_native_storage_dirty = 1;
        ++instance->stock_native_storage_revision;
    }
    core_logf(instance, "stock-world-native-save", "slot=%u identity=%08X cells=%u",
        selected, record->identity, SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT);
    return 1;
}

static const SCStockWorldNativeSlot *stock_native_loading_slot(const SimCityRecomp *instance) {
    const unsigned selected = connector_wram16(instance->runtime, 0x0421u);
    if (selected < 1u || selected > 2u) return NULL;
    const SCStockWorldNativeSlot *record = &instance->stock_native_slots[selected - 1u];
    return record->tiles && record->identity == stock_native_slot_identity(instance->runtime->sram, selected - 1u) ?
        record : NULL;
}

static int stock_native_load_city(SimCityRecomp *instance) {
    const SCStockWorldNativeSlot *record = stock_native_loading_slot(instance);
    if (!record) return 1;
    if (!instance->stock_world) instance->stock_world = calloc(1u, sizeof(*instance->stock_world));
    if (!instance->stock_world) return 0;
    /* The guest has just decompressed its 120×100 plane. Keep its city
       metadata and rebuild expanded working grids from the saved map. */
    memcpy(instance->stock_world->tiles, record->tiles, sizeof(instance->stock_world->tiles));
    memset(&instance->stock_world->work, 0, sizeof(instance->stock_world->work));
    instance->stock_world_pending = 0u;
    instance->widescreen_cursor_extension_x = 0;
    instance->widescreen_cursor_anchor_valid = 0u;
    core_logf(instance, "stock-world-native-load", "slot=%u identity=%08X cells=%u",
        connector_wram16(instance->runtime, 0x0421u), record->identity, SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT);
    return 1;
}

int simcity_recomp_world_enter_from_menu(SimCityRecomp *instance) {
    if (!simcity_recomp_world_menu_ready(instance)) return 0;
    if (!simcity_recomp_world_map_begin(instance)) return 0;
    core_logf(instance, "world-map-menu-enter", "source=stock-main-menu");
    return 1;
}

void simcity_recomp_world_demo_arm(SimCityRecomp *instance) {
    if (!instance || instance->world) return;
    instance->world_demo_active = 1u;
    instance->world_demo_action = instance->world_demo_menu_frames = 0u;
    instance->world_demo_release = 0u;
}

void simcity_recomp_world_demo_cancel(SimCityRecomp *instance) {
    if (instance) instance->world_demo_active = 0u;
}

int simcity_recomp_world_demo_active(const SimCityRecomp *instance) {
    return instance && instance->world_demo_active;
}

/* The live launcher and the main-menu probe use the same input stream.
   Geometry stays in the World Map module. This only chooses controller input. */
uint16_t simcity_recomp_world_demo_input(SimCityRecomp *instance) {
    static const unsigned rows[] = {86u, 96u, 104u, 114u};
    static const unsigned lots_x[] = {90u, 96u, 102u, 108u, 124u, 130u, 136u, 142u};
    static const unsigned lots_y[] = {83u, 87u, 93u, 97u, 101u, 105u, 111u, 115u};
    enum { ROW_ROADS = 272, SPINE_ROADS = 25, LOTS = 64 };
    SimCityWorldMapStatus status;
    unsigned action, x, y, tool;
    if (!simcity_recomp_world_demo_active(instance)) return 0u;
    if (!instance->world) {
        const uint32_t frame = instance->runtime->scheduler.frame;
        if (simcity_recomp_world_menu_ready(instance)) {
            if (++instance->world_demo_menu_frames == 120u &&
                !simcity_recomp_world_enter_from_menu(instance)) {
                simcity_recomp_world_demo_cancel(instance);
                core_logf(instance, "world-demo-failed", "stage=entry");
            }
        } else if (frame > 1200u) {
            simcity_recomp_world_demo_cancel(instance);
            core_logf(instance, "world-demo-failed", "stage=stock-main-menu");
        } else if (instance->world_menu_state == 1u && frame >= SIMCITY_RECOMP_TITLE_FRAME) {
            return SIMCITY_INPUT_START;
        }
        return 0u;
    }
    sc_world_map_status(instance->world, &status);
    if (status.rejected || status.edits != instance->world_demo_action) {
        core_logf(instance, "world-demo-failed", "stage=construction action=%u edits=%u rejected=%u",
                  instance->world_demo_action, status.edits, status.rejected);
        simcity_recomp_world_demo_cancel(instance);
        return 0u;
    }
    if (instance->world_demo_release) {
        instance->world_demo_release = 0u;
        return 0u;
    }
    action = instance->world_demo_action;
    if (action == 0u) {
        x = 82u; y = 86u; tool = SIMCITY_WORLD_TOOL_PLANT;
    } else if (--action < ROW_ROADS) {
        x = 86u + action % 68u; y = rows[action / 68u]; tool = SIMCITY_WORLD_TOOL_ROAD;
    } else if ((action -= ROW_ROADS) < SPINE_ROADS) {
        y = 87u + action;
        if (y >= 96u) ++y;
        if (y >= 104u) ++y;
        x = 119u; tool = SIMCITY_WORLD_TOOL_ROAD;
    } else if ((action -= SPINE_ROADS) < LOTS) {
        x = lots_x[action % 8u]; y = lots_y[action / 8u]; tool = SIMCITY_WORLD_TOOL_ZONE;
    } else {
        core_logf(instance, "world-demo-complete", "plants=%u roads=%u zones=%u served=%u funds=%u",
                  status.plants, status.roads, status.zones, status.served_zones, status.funds);
        simcity_recomp_world_demo_cancel(instance);
        return 0u;
    }
    if (status.cursor_x != x) return status.cursor_x < x ? SIMCITY_INPUT_RIGHT : SIMCITY_INPUT_LEFT;
    if (status.cursor_y != y) return status.cursor_y < y ? SIMCITY_INPUT_DOWN : SIMCITY_INPUT_UP;
    instance->world_demo_release = 1u;
    if (status.tool != tool) return SIMCITY_INPUT_R;
    ++instance->world_demo_action;
    return SIMCITY_INPUT_B;
}

void simcity_recomp_world_map_end(SimCityRecomp *instance) {
    if (!instance || !instance->world) return;
    core_logf(instance, "world-map-end", "");
    free(instance->world);
    instance->world = NULL;
}

int simcity_recomp_world_map_status(const SimCityRecomp *instance,
                                  SimCityWorldMapStatus *status) {
    if (!instance || !instance->world || !status) return 0;
    sc_world_map_status(instance->world, status);
    return 1;
}

int simcity_recomp_world_map_tile(const SimCityRecomp *instance,
                                int x, int y, uint16_t *tile) {
    return instance && sc_world_map_tile(instance->world, x, y, tile);
}

int simcity_recomp_probe_freeland_funds(SimCityRecomp *instance) {
    uint8_t *wram;
    if (!instance || !instance->runtime || instance->world ||
        instance->runtime->scheduler.frame < 2750u) return 0;
    wram = instance->runtime->machine.wram;
    if (wram[0x0040] != 7u || wram[0x0041] != 0u) return 0;
    wram[0x0b9d] = 0x3fu;
    wram[0x0b9e] = 0x42u;
    wram[0x0b9f] = 0x0fu;
    core_logf(instance, "probe-treasury", "freeland_funds=999999");
    return 1;
}

int simcity_recomp_probe_world_funds(SimCityRecomp *instance) {
    if (!instance || !instance->stock_world || !instance->runtime ||
        !connector_city_view(instance->runtime) || !connector_map_focus(instance->runtime))
        return 0;
    /* Test budget only. The normal launcher never calls this entry point. */
    connector_set_wram16(instance->runtime, 0x0b9du, 0x423fu);
    instance->runtime->machine.wram[0x0b9fu] = 0x0fu;
    core_logf(instance, "probe-treasury", "stock_world_funds=999999");
    return 1;
}

static void render_catalog_overlay(SimCityRecomp *instance, unsigned width, unsigned margin) {
    unsigned catalog_id = 0u;
    const enum SimCityWorldCatalogScreen catalog = simcity_recomp_world_catalog_view(instance, &catalog_id);
    sc_world_catalog_draw(catalog, catalog_id, connector_wram16(instance->runtime, 0x44u) != 0u,
                          width, margin, instance->bgr555, instance->bgra);
}

static int render_frame_with_options(SimCityRecomp *instance, char *error,
                                     size_t error_capacity, int diagnostics) {
    unsigned width = instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_WIDTH :
                                            SIMCITY_RECOMP_FRAME_WIDTH;
    unsigned margin = instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u;
    memset(&instance->video, 0, sizeof(instance->video));
    if (instance->world) {
        sc_world_map_render(instance->world, instance->bgra, width,
                            SIMCITY_RECOMP_FRAME_HEIGHT);
        instance->last_error[0] = '\0';
        return 1;
    }
    const SCV28CityMapView map = {
        instance->stock_world ? instance->stock_world->tiles : NULL,
        SC_STOCK_WORLD_WIDTH, SC_STOCK_WORLD_HEIGHT, 0, 0
    };
    const int use_world = instance->stock_world && connector_city_view(instance->runtime);
    if (!(use_world ? sc_v28_render_stock_map_view(instance->runtime, width, margin, diagnostics,
                                    instance->bgr555, instance->bgra, &instance->video, &map) :
          sc_v28_render_first_visible_frame(instance->runtime,
                                           width, margin, diagnostics,
                                           instance->bgr555,
                                           SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                           instance->bgra,
                                           SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                           &instance->video))) {
        set_error(instance,
                  instance->video.error[0] ? instance->video.error :
                  "The current PPU feature set cannot be rendered.",
                  error, error_capacity);
        return 0;
    }
    render_catalog_overlay(instance, width, margin);
    instance->last_error[0] = '\0';
    return 1;
}

static int render_current_frame(SimCityRecomp *instance, char *error,
                                size_t error_capacity) {
    return render_frame_with_options(instance, error, error_capacity, 1);
}

struct SimCityRecompVideoSnapshot {
    SCV28CapturedInput captured;
    uint16_t tiles[SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT];
    unsigned width, margin;
    unsigned catalog_id;
    enum SimCityWorldCatalogScreen catalog;
    int catalog_has_resume;
    int use_world;
};

typedef struct SCVideoWorldBounds {
    int first_x, first_y, last_x, last_y;
} SCVideoWorldBounds;

static SCVideoWorldBounds snapshot_world_tile_bounds(const SimCityRecompVideoSnapshot *snapshot) {
    const SCV28VideoInput *input = &snapshot->captured.input;
    /* Zero map origin. Allow up to 15 pixels of mosaic lookback and one
       neighboring tile for the lightning marker. The native HUD uses VRAM. */
    const int right_limit = SC_STOCK_WORLD_WIDTH * 8 - (int)snapshot->width;
    const int bottom_limit = SC_STOCK_WORLD_HEIGHT * 8 - SC_V11_PPU_VISIBLE_LINES;
    int left = input->camera_x - (int)snapshot->margin, top = input->camera_y;
    if (left < 0) left = 0;
    if (left > right_limit) left = right_limit;
    if (top < 0) top = 0;
    if (top > bottom_limit) top = bottom_limit;
    SCVideoWorldBounds r = {left >= 24 ? (left - 24) / 8 : 0,
        top >= 24 ? (top - 24) / 8 : 0,
        (left + (int)snapshot->width - 1) / 8,
        (top + SC_V11_PPU_VISIBLE_LINES) / 8}; /* renderer samples y + 1 */
    if (r.last_y >= SC_STOCK_WORLD_HEIGHT) r.last_y = SC_STOCK_WORLD_HEIGHT - 1;
    return r;
}

SimCityRecompVideoSnapshot *simcity_recomp_video_snapshot_create(void) {
    return calloc(1u, sizeof(SimCityRecompVideoSnapshot));
}

void simcity_recomp_video_snapshot_destroy(SimCityRecompVideoSnapshot *snapshot) {
    free(snapshot);
}

int simcity_recomp_video_snapshot_capture(SimCityRecompVideoSnapshot *snapshot,
                                           const SimCityRecomp *instance) {
    if (!snapshot || !instance || instance->world || !instance->runtime ||
        instance->runtime->route_failed)
        return 0;
    sc_v28_capture_input(&snapshot->captured, instance->runtime);
    snapshot->width = instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_WIDTH :
                                            SIMCITY_RECOMP_FRAME_WIDTH;
    snapshot->margin = instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u;
    snapshot->catalog = simcity_recomp_world_catalog_view(instance, &snapshot->catalog_id);
    snapshot->catalog_has_resume = connector_wram16(instance->runtime, 0x44u) != 0u;
    snapshot->use_world = instance->stock_world && connector_city_view(instance->runtime);
    if (snapshot->use_world) {
#ifdef SIMCITY_EXPERIMENT_VIEWPORT_CAPTURE
        const SCVideoWorldBounds r = snapshot_world_tile_bounds(snapshot);
        const size_t row_bytes = (size_t)(r.last_x - r.first_x + 1) * sizeof(snapshot->tiles[0]);
        for (int row = r.first_y; row <= r.last_y; ++row) {
            const size_t start = (size_t)row * SC_STOCK_WORLD_WIDTH + r.first_x;
            memcpy(snapshot->tiles + start, instance->stock_world->tiles + start, row_bytes);
        }
#else
        memcpy(snapshot->tiles, instance->stock_world->tiles, sizeof(snapshot->tiles));
#endif
    }
    return 1;
}

int simcity_recomp_video_snapshot_uses_world_map(const SimCityRecompVideoSnapshot *snapshot) {
    return snapshot && snapshot->use_world;
}

int simcity_recomp_video_snapshot_same_world_image_inputs(
    const SimCityRecompVideoSnapshot *a, const SimCityRecompVideoSnapshot *b) {
    if (!a || !b || !a->use_world || !b->use_world ||
        a->width != b->width || a->margin != b->margin ||
        a->catalog != b->catalog || a->catalog_id != b->catalog_id) return 0;
    const SCV28VideoInput *x = &a->captured.input, *y = &b->captured.input;
    if (x->rom != y->rom || x->rom_size != y->rom_size ||
        x->camera_x != y->camera_x || x->camera_y != y->camera_y ||
        x->cursor_x != y->cursor_x || x->cursor_base != y->cursor_base ||
        x->cursor_on_map != y->cursor_on_map || x->fixed_color != y->fixed_color ||
        x->oam_priority_rotation != y->oam_priority_rotation ||
        (x->oam_priority_rotation && x->oam_word_address != y->oam_word_address) ||
        x->brightness != y->brightness || x->forced_blank != y->forced_blank ||
        memcmp(x->registers, y->registers, sizeof(a->captured.registers)) ||
        memcmp(x->scroll, y->scroll, sizeof(a->captured.scroll)) ||
        memcmp(x->oam, y->oam, sizeof(a->captured.oam)) ||
        memcmp(x->cgram, y->cgram, sizeof(a->captured.cgram)) ||
        memcmp(x->vram, y->vram, sizeof(a->captured.vram))) return 0;
    for (unsigned row = 0u; row < SC_V11_PPU_VISIBLE_LINES; ++row) {
        const SCV11PpuLineState *p = &x->lines[row], *q = &y->lines[row];
        const int p_valid = x->completed_frame == x->frame && p->valid && p->frame == x->frame;
        const int q_valid = y->completed_frame == y->frame && q->valid && q->frame == y->frame;
        if (p_valid != q_valid ||
            (p_valid && (p->fixed_color != q->fixed_color ||
                        memcmp(p->registers, q->registers, sizeof(p->registers)) ||
                        memcmp(p->bg_scroll, q->bg_scroll, sizeof(p->bg_scroll)))))
            return 0;
    }
    const SCVideoWorldBounds r = snapshot_world_tile_bounds(a);
    const size_t bytes = (size_t)(r.last_x - r.first_x + 1) * sizeof(a->tiles[0]);
    for (int row = r.first_y; row <= r.last_y; ++row) {
        const size_t at = (size_t)row * SC_STOCK_WORLD_WIDTH + r.first_x;
        if (memcmp(a->tiles + at, b->tiles + at, bytes)) return 0;
    }
    return 1;
}

int simcity_recomp_video_snapshot_render(const SimCityRecompVideoSnapshot *snapshot,
    uint32_t *pixels, size_t capacity, unsigned *width) {
    uint16_t bgr555[SIMCITY_RECOMP_MAX_FRAME_PIXELS];
    SCV28VideoReport report;
    if (!snapshot || !pixels || !width || !snapshot->width ||
        capacity < (size_t)snapshot->width * SIMCITY_RECOMP_FRAME_HEIGHT)
        return 0;
    const SCV28CityMapView map = {
        snapshot->tiles, SC_STOCK_WORLD_WIDTH, SC_STOCK_WORLD_HEIGHT, 0, 0
    };
    *width = snapshot->width;
    const int ok = sc_v28_render_input(&snapshot->captured.input, snapshot->width,
        snapshot->margin, 0, bgr555, SIMCITY_RECOMP_MAX_FRAME_PIXELS,
        pixels, capacity, &report, snapshot->use_world ? &map : NULL);
    if (ok) sc_world_catalog_draw(snapshot->catalog, snapshot->catalog_id,
        snapshot->catalog_has_resume, snapshot->width, snapshot->margin, bgr555, pixels);
    return ok;
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
        const uint8_t *committed = stock_authoritative_sram(instance);
        memcpy(preserved_sram, committed ? committed : instance->runtime->sram, sizeof(preserved_sram));
        preserved_sram_dirty = committed ? 0u : instance->runtime->sram_dirty;
    }

    simcity_recomp_world_map_end(instance);
    stock_world_end(instance);
    instance->world_menu_state = 0u;
    reset_world_catalog_input(instance);
    simcity_recomp_world_demo_cancel(instance);
    memset(instance->runtime, 0, sizeof(*instance->runtime));
    memset(instance->bgr555, 0, sizeof(instance->bgr555));
    memset(instance->bgra, 0, sizeof(instance->bgra));
    memset(&instance->video, 0, sizeof(instance->video));
    instance->widescreen_cursor_extension_x = 0;
    instance->widescreen_cursor_anchor_valid = 0u;
    instance->widescreen_cursor_input_rebased = 0u;
    audio_queue_reset(instance);
    instance->audio_dropped_frames = 0u;
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
    simcity_recomp_world_map_end(instance);
    stock_world_end(instance);
    for (unsigned slot = 0; slot < 2u; ++slot) free(instance->stock_native_slots[slot].tiles);
    free(instance->stock_native_committed_sram);
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

static int advance_raw(SimCityRecomp *instance,
                            uint16_t input_mask,
                            uint32_t frame_count,
                            SimCityRecompFrameResult *result,
                            int render_frame,
                            SimCityRecompAudioProgressCallback audio_progress,
                            void *progress_opaque) {
    SimCityRecompFrameResult local;
    uint32_t target_frame;
    uint64_t guard;
    uint16_t guest_input;
    SCStockWorldWindow loaded_window;
    int loaded_window_bound = 0;

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
    guest_input = instance->world ? 0u : world_catalog_guest_input(instance, input_mask);
    instance->runtime->host_widescreen_enabled =
        instance->world || instance->stock_world ? 0u : instance->widescreen;
    if (!instance->world && !instance->stock_world)
        prepare_widescreen_cursor_input(instance, guest_input);
    instance->runtime->joypad[0] = guest_input;

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
            if (g_core_log && instance->runtime->machine.cpu.pbr == 0u &&
                instance->runtime->machine.cpu.pc == 0x9899u &&
                (instance->runtime->machine.cpu.a & 0xffu) == 7u)
                core_logf(instance, "menu-cursor-sound", "port=2143 command=07");
            if (!instance->world && instance->runtime->machine.cpu.pbr == 3u) {
                const unsigned pc = instance->runtime->machine.cpu.pc;
                switch (pc) {
                case 0xd360u:
                    if (instance->world_catalog_tick_pending &&
                        instance->runtime->machine.cpu.d == 0u &&
                        !instance->runtime->machine.wram[6u]) {
                        /* The stock move writes 07 to $06 immediately before
                           this checkpoint. Let the original audio transport
                           and SPC driver deliver the same sound. */
                        instance->runtime->machine.wram[6u] = 7u;
                        instance->world_catalog_tick_pending = 0u;
                    }
                    break;
                case 0xd370u:
                    /* Native main-menu confirmation has written its next
                       state to $14. State 3 is an idle menu pass, while
                       only state 4 enters New City at D388. */
                    if (instance->runtime->machine.cpu.d == 0u &&
                        instance->world_menu_state == 3u && instance->stock_world_pending == 1u &&
                        instance->runtime->machine.wram[0x14u] != 3u &&
                        instance->runtime->machine.wram[0x14u] != 4u) {
                        instance->stock_world_pending = 0u;
                        core_logf(instance, "stock-world-new-city-cancel", "reason=other-main-menu-item");
                    }
                    break;
                case 0xd388u:
                    if (instance->stock_world_pending == 1u)
                        instance->stock_world_pending = 2u;
                    break;
                case 0xc8c8u:
                    /* This is after the native slot was accepted and
                       immediately before map decompression. A regular
                       city must decompress into ordinary WRAM, not the
                       top corner of a previous expanded city. */
                    if (instance->stock_world && !stock_native_loading_slot(instance)) {
                        sc_v11_set_stock_world_window(NULL);
                        loaded_window_bound = 0;
                        stock_world_end(instance);
                        instance->runtime->host_widescreen_enabled = instance->widescreen;
                        core_logf(instance, "stock-world-native-load-regular", "");
                    }
                    break;
                case 0xcb0eu: case 0xcb11u: case 0xcb65u: case 0xcb68u:
                case 0xcbd5u: case 0xcc17u: case 0xce2eu: case 0xce8bu:
                case 0xc67fu: case 0xc8e1u:
                    if (g_core_log) {
                        const SCCpuState *cpu = &instance->runtime->machine.cpu;
                        core_logf(instance, "native-city-storage",
                            "pc=03:%04X a=%04X x=%04X y=%04X p=%02X save_slot=%04X load_slot=%04X world=%u",
                            pc, cpu->a, cpu->x, cpu->y, cpu->p,
                            connector_wram16(instance->runtime, 0x0423u),
                            connector_wram16(instance->runtime, 0x0421u),
                            instance->stock_world != NULL);
                    }
                    const int had_expanded_map = instance->stock_world != NULL;
                    if ((pc == 0xcbd5u && !stock_native_save_city(instance)) ||
                        (pc == 0xc8e1u && !stock_native_load_city(instance))) {
                        if (loaded_window_bound) sc_v11_set_stock_world_window(NULL);
                        copy_text(instance->last_error, sizeof(instance->last_error),
                                  "Not enough memory for the expanded in-game city save.");
                        if (result) *result = local;
                        return 0;
                    }
                    if (!had_expanded_map && instance->stock_world) {
                        SCStockWorldCity *city = instance->stock_world;
                        loaded_window = (SCStockWorldWindow){instance->runtime, city->tiles,
                            0u, 0u, 1, NULL, &city->work.census, &city->work, 1};
                        instance->runtime->host_widescreen_enabled = 0;
                        stock_world_expand_camera(instance->runtime);
                        sc_v11_set_stock_world_window(&loaded_window);
                        loaded_window_bound = 1;
                    }
                    break;
                case 0xd2c6u: case 0xd333u: case 0xd287u:
                    if (instance->runtime->machine.cpu.d == 0u) {
                        const uint16_t menu = connector_wram16(instance->runtime, 0x14u);
                        if (pc == 0xd2c6u && menu == 1u)
                            instance->stock_world_pending = 0u;
                        if (pc == 0xd333u && menu == 3u && instance->stock_world_pending == 2u)
                            instance->stock_world_pending = 0u;
                        if ((pc == 0xd2c6u && menu == 1u) || (pc == 0xd333u && menu == 3u)) {
                            if (instance->world_menu_state != menu)
                                core_logf(instance, "world-stock-menu", "state=%u pc=03:%04X",
                                          (unsigned)menu, pc);
                            instance->world_menu_state = (uint8_t)menu;
                        } else if (pc == 0xd287u && menu != instance->world_menu_state) {
                            instance->world_menu_state = 0u;
                        }
                    }
                    break;
                case 0x8297u: case 0x849eu: case 0x84c4u: case 0x83f8u:
                case 0xafb0u: case 0xb152u: case 0xb19cu: case 0xb1a4u:
                case 0xb37eu: case 0xb39au: case 0x9ad7u: case 0x9af7u:
                case 0x9bd4u: case 0xa29au: case 0x9c11u: case 0x9cdeu:
                case 0xa2b9u: case 0x9e8eu: case 0x9fa5u: case 0x9aa3u:
                case 0x9ad6u: case 0xa2d7u:
                case 0xbca2u: case 0xbcaau:
                case 0xb9e5u: case 0xb9f2u: case 0xb9ffu: case 0xba0cu:
                case 0xba51u: case 0xba61u:
                    sc_v11_stock_world_census_instruction(instance->runtime, (uint16_t)pc);
                    break;
                case 0xaa9fu: case 0x835du:
                    if (g_core_log && sc_v11_stock_world_census_active(instance->runtime)) {
                        const uint8_t *wram = instance->runtime->machine.wram;
                        core_logf(instance, "world-census-stage",
                                  "pc=03:%04X x=%u y=%u tile=%04X coal=%u nuclear=%u",
                                  pc, wram[0xb85u], wram[0xb86u],
                                  connector_wram16(instance->runtime, 0xb89u),
                                  connector_wram16(instance->runtime, 0xe0du),
                                  connector_wram16(instance->runtime, 0xe0fu));
                    }
                    break;
                case 0x931du: case 0x932du: case 0x9334u: case 0x9340u:
                case 0x934au: case 0x9354u: case 0x9356u:
                case 0x957eu: case 0x9580u: case 0x9969u: case 0x99b1u:
                    if (g_core_log && (connector_wram16(instance->runtime, 0x0b89u) & 0x03ffu) == 0x013bu) {
                        const uint8_t *wram = instance->runtime->machine.wram;
                        core_logf(instance, "commercial-growth",
                            "stage=%s x=%u y=%u value=%d center_half=(%u,%u) demand=%d power=%04X flags=%02X slot=%u dp0=%04X world=%u",
                            pc == 0x931du ? "traffic" : pc == 0x932du ? "sample" :
                            pc == 0x9334u ? "location" : pc == 0x9340u ? "effective" :
                            pc == 0x934au ? "roll" : pc == 0x9354u ? "decision" : pc == 0x9356u ? "grow" :
                            pc == 0x957eu ? "land-grade" : pc == 0x9580u ? "land-compare" :
                            pc == 0x9969u ? "footprint-check" : "tile-write",
                            wram[0x0b85u], wram[0x0b86u], (int)(int16_t)instance->runtime->machine.cpu.a,
                            wram[0x0babu], wram[0x0bacu],
                            (int)(int16_t)connector_wram16(instance->runtime, 0x0bafu),
                            connector_wram16(instance->runtime, 0x0b87u), instance->runtime->machine.cpu.p,
                            instance->runtime->machine.cpu.y,
                            connector_wram16(instance->runtime, instance->runtime->machine.cpu.d),
                            instance->stock_world != NULL);
                    }
                    break;
                default:
                    break;
                }
            }
            if (!static_cpu_step(instance->runtime)) break;
            if (audio_progress && (guard & UINT64_C(255)) == 0u)
                audio_progress(instance, progress_opaque);
            if (instance->runtime->scheduler.frame != guarded_frame) {
                guarded_frame = instance->runtime->scheduler.frame;
                if (instance->world) {
                    unsigned event = sc_world_map_step(instance->world, input_mask);
                    if (event) {
                        SimCityWorldMapStatus status;
                        sc_world_map_status(instance->world, &status);
                        core_logf(instance, "world-map-input",
                                  "input=%04X event=%u cursor=(%u,%u) tool=%u funds=%u edits=%u rejected=%u roads=%u plants=%u zones=%u powered_roads=%u served_zones=%u population=%u commuters=%u congested=%u peak_load=%u growth_ticks=%u queued_pcm=%u",
                                  (unsigned)input_mask, event, status.cursor_x, status.cursor_y,
                                  status.tool, status.funds, status.edits, status.rejected,
                                  status.roads, status.plants, status.zones,
                                  status.powered_roads, status.served_zones,
                                  status.population, status.commuters, status.congested_roads,
                                  status.peak_road_load, status.growth_ticks,
                                  instance->audio_available_frames);
                    }
                } else {
                    if (!instance->stock_world) apply_widescreen_cursor_connector(instance, guest_input);
                }
                guard = SIMCITY_FRAME_INSTRUCTION_GUARD;
            }
        }
    }
    if (loaded_window_bound) sc_v11_set_stock_world_window(NULL);

    if (!instance->runtime->route_failed &&
        !sc_v11_smp_sync_to_master(
            instance->runtime,
            instance->runtime->scheduler.master_clock)) {
        instance->runtime->route_failed = 1u;
    }
    if (audio_progress) audio_progress(instance, progress_opaque);

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

    if (!stock_world_commit_new_city(instance)) {
        copy_text(instance->last_error, sizeof(instance->last_error),
                  "Unable to allocate the expanded stock city.");
        if (result) *result = local;
        return 0;
    }
    if (render_frame && instance->world) {
        local.frame_rendered = (uint8_t)render_current_frame(instance, NULL, 0u);
    } else if (render_frame && instance->stock_world) {
        local.frame_rendered = (uint8_t)render_frame_with_options(instance, NULL, 0u, 0);
    } else if (render_frame) {
        memset(&instance->video, 0, sizeof(instance->video));
        {
            unsigned width = instance->widescreen ?
                SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH;
            unsigned margin = instance->widescreen ?
                SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u;
        if (sc_v28_render_first_visible_frame(instance->runtime,
                                              width, margin, 0,
                                              instance->bgr555,
                                              SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                              instance->bgra,
                                              SIMCITY_RECOMP_MAX_FRAME_PIXELS,
                                              &instance->video)) {
            render_catalog_overlay(instance, width, margin);
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
            instance->input_history[instance->input_history_count++] = guest_input;
    }
    if (instance->runtime->scheduler.frame % 60u == 0u) {
        core_logf(instance, "frame", "input=%04X rendered=%u pcm=%u",
                  input_mask, (unsigned)local.frame_rendered,
                  instance->audio_available_frames);
    }
    if (result) *result = local;
    return 1;
}

static int advance_internal(SimCityRecomp *instance, uint16_t input, uint32_t frames,
                            SimCityRecompFrameResult *result, int render_frame,
                            SimCityRecompAudioProgressCallback audio_progress, void *opaque) {
    if (!instance || !instance->stock_world)
        return advance_raw(instance, input, frames, result, render_frame, audio_progress, opaque);
    SCStockWorldCity *city = instance->stock_world;
    const SCStockWorldWindow window = {instance->runtime, city->tiles, 0u, 0u, 1, NULL,
                                      &city->work.census, &city->work, 1};
    stock_world_expand_camera(instance->runtime);
    sc_v11_set_stock_world_window(&window);
    const int ok = advance_raw(instance, input, frames, result, render_frame, audio_progress, opaque);
    sc_v11_set_stock_world_window(NULL);
    return ok;
}

int simcity_recomp_advance(SimCityRecomp *instance,
                           uint16_t input_mask,
                           uint32_t frame_count,
                           SimCityRecompFrameResult *result) {
    return advance_internal(instance, input_mask, frame_count, result, 1,
                            NULL, NULL);
}

int simcity_recomp_advance_streamed(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    SimCityRecompAudioProgressCallback audio_progress, void *opaque,
    SimCityRecompFrameResult *result) {
    return advance_internal(instance, input_mask, frame_count, result, 1,
                            audio_progress, opaque);
}

int simcity_recomp_advance_headless(SimCityRecomp *instance,
                                    uint16_t input_mask,
                                    uint32_t frame_count,
                                    SimCityRecompFrameResult *result) {
    return advance_internal(instance, input_mask, frame_count, result, 0,
                            NULL, NULL);
}

int simcity_recomp_advance_streamed_headless(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    SimCityRecompAudioProgressCallback audio_progress, void *opaque,
    SimCityRecompFrameResult *result) {
    return advance_internal(instance, input_mask, frame_count, result, 0,
                            audio_progress, opaque);
}

int simcity_recomp_advance_stock_map_trace(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    SimCityRecompStockMapAccess access, void *opaque) {
    int ok;
    if (!instance || !instance->runtime || instance->world || !access) return 0;
    sc_v11_set_stock_map_trace(instance->runtime, access, opaque);
    ok = advance_internal(instance, input_mask, frame_count, NULL, 0, NULL, NULL);
    sc_v11_set_stock_map_trace(NULL, NULL, NULL);
    return ok;
}

int simcity_recomp_advance_stock_world_window(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    uint16_t *tiles, size_t count, unsigned origin_x, unsigned origin_y) {
    SCStockWorldWindow window;
    int ok;
    if (!instance || !instance->runtime || instance->world || !tiles ||
        count != SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT ||
        origin_x > SC_STOCK_WORLD_WIDTH - SC_STOCK_TILE_WIDTH ||
        origin_y > SC_STOCK_WORLD_HEIGHT - SC_STOCK_TILE_HEIGHT)
        return 0;
    window = (SCStockWorldWindow){instance->runtime, tiles, origin_x, origin_y, 0, NULL, NULL, NULL, 0};
    sc_v11_set_stock_world_window(&window);
    ok = advance_internal(instance, input_mask, frame_count, NULL, 0, NULL, NULL);
    sc_v11_set_stock_world_window(NULL);
    return ok;
}

static void stock_world_expand_camera(SCV11Runtime *runtime) {
    const uint16_t max_x = connector_wram16(runtime, 0x01c5u);
    const uint16_t max_y = connector_wram16(runtime, 0x01c9u);
    if (max_x == 95u || max_x == 90u)
        connector_set_wram16(runtime, 0x01c5u, (uint16_t)(max_x + 120u));
    if (max_y == 78u || max_y == 74u)
        connector_set_wram16(runtime, 0x01c9u, (uint16_t)(max_y + 100u));
}

#define SC_STOCK_WORLD_TEST_INPUT (SIMCITY_INPUT_UP | SIMCITY_INPUT_DOWN | \
                                   SIMCITY_INPUT_B | SIMCITY_INPUT_LEFT | SIMCITY_INPUT_RIGHT)

int simcity_recomp_advance_stock_world_camera(
    SimCityRecomp *instance, uint16_t dpad, uint16_t *tiles, size_t count,
    uint32_t *extended_tile_reads) {
    SCStockWorldWindow window;
    SCV11Runtime *runtime;
    int ok;
    if (extended_tile_reads) *extended_tile_reads = 0u;
    if (!instance || !instance->runtime || instance->world || instance->widescreen ||
        !tiles || count != SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT ||
        (dpad & ~SC_STOCK_WORLD_TEST_INPUT))
        return 0;
    runtime = instance->runtime;
    /* Existing city sessions may already have initialized the stock clamp. */
    stock_world_expand_camera(runtime);
    window = (SCStockWorldWindow){runtime, tiles, 0u, 0u, 1, extended_tile_reads, NULL, NULL, 0};
    sc_v11_set_stock_world_window(&window);
    ok = advance_internal(instance, dpad, 1u, NULL, 0, NULL, NULL);
    sc_v11_set_stock_world_window(NULL);
    return ok;
}

int simcity_recomp_advance_stock_world_census(
    SimCityRecomp *instance, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldCensus *census) {
    SCStockWorldWindow window;
    int ok;
    if (!instance || !instance->runtime || instance->world || instance->widescreen ||
        !tiles || count != SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT ||
        !census || census->complete)
        return 0;
    window = (SCStockWorldWindow){instance->runtime, tiles, 0u, 0u, 1, NULL, census, NULL, 0};
    sc_v11_set_stock_world_window(&window);
    ok = advance_internal(instance, 0u, 1u, NULL, 0, NULL, NULL);
    sc_v11_set_stock_world_window(NULL);
    return ok;
}

int simcity_recomp_advance_stock_world_power(
    SimCityRecomp *instance, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldPower *power) {
    SCStockWorldWindow window;
    int ok;
    if (!instance || !instance->runtime || instance->widescreen || instance->world ||
        !tiles || count != SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT ||
        !power || power->complete)
        return 0;
    window = (SCStockWorldWindow){instance->runtime, tiles, 0u, 0u, 1, NULL, &power->census, power, 0};
    sc_v11_set_stock_world_window(&window);
    ok = advance_internal(instance, 0u, 1u, NULL, 0, NULL, NULL);
    sc_v11_set_stock_world_window(NULL);
    return ok;
}

int simcity_recomp_advance_stock_world_session(
    SimCityRecomp *instance, uint16_t input, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldPower *power) {
    SCStockWorldWindow window;
    int ok;
    if (!instance || !instance->runtime || instance->widescreen || instance->world ||
        !tiles || count != SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT ||
        !power || (input & ~SC_STOCK_WORLD_TEST_INPUT))
        return 0;
    stock_world_expand_camera(instance->runtime);
    window = (SCStockWorldWindow){instance->runtime, tiles, 0u, 0u, 1, NULL, &power->census, power, 1};
    sc_v11_set_stock_world_window(&window);
    ok = advance_internal(instance, input, 1u, NULL, 0, NULL, NULL);
    sc_v11_set_stock_world_window(NULL);
    return ok;
}

int simcity_recomp_render_presentation_frame(SimCityRecomp *instance,
                                             char *error, size_t error_capacity) {
    if (!instance || !instance->runtime) {
        copy_text(error, error_capacity, "No static recompilation instance is loaded.");
        return 0;
    }
    return render_frame_with_options(instance, error, error_capacity, 0);
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

int simcity_recomp_render_stock_world_preview(SimCityRecomp *instance,
    const uint16_t *tiles, size_t count, int offset_x, int offset_y) {
    const SCV28CityMapView map = {tiles, SC_STOCK_WORLD_WIDTH, SC_STOCK_WORLD_HEIGHT, offset_x, offset_y};
    if (!instance || !instance->runtime || instance->world ||
        !tiles || count != SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT ||
        !connector_city_view(instance->runtime) ||
        offset_x < -1920 || offset_x > 1920 || offset_y < -1600 || offset_y > 1600)
        return 0;
    return sc_v28_render_stock_map_view(instance->runtime,
        instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_WIDTH : SIMCITY_RECOMP_FRAME_WIDTH,
        instance->widescreen ? SIMCITY_RECOMP_WIDESCREEN_MARGIN : 0u,
        1,
        instance->bgr555, instance->bgra,
        &instance->video, &map);
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

static FILE *snapshot_open(const char *path, int writing) {
#ifdef _WIN32
    const int count = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, path, -1, NULL, 0);
    if (count <= 0) return NULL;
    wchar_t *wide = malloc((size_t)count * sizeof(*wide));
    if (!wide) return NULL;
    FILE *file = NULL;
    if (MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, path, -1, wide, count))
        file = _wfopen(wide, writing ? L"wb" : L"rb");
    free(wide);
    return file;
#else
    return fopen(path, writing ? "wb" : "rb");
#endif
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

enum { SC_WORLD_SNAPSHOT_CELLS = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT };
typedef struct SCWorldSnapshotWork {
    uint32_t fields[13];
    uint8_t bitmap[SC_WORLD_SNAPSHOT_CELLS / 8u];
} SCWorldSnapshotWork;
typedef struct SCWorldSnapshotTraffic {
    uint32_t writes, west, east;
    uint8_t density[SC_WORLD_SNAPSHOT_CELLS / 4u];
} SCWorldSnapshotTraffic;
typedef struct SCWorldSnapshotEnvironment {
    uint8_t land_value[SC_WORLD_SNAPSHOT_CELLS / 4u];
    uint8_t pollution[SC_WORLD_SNAPSHOT_CELLS / 4u];
    uint8_t density[SC_WORLD_SNAPSHOT_CELLS / 4u];
    uint16_t growth[SC_WORLD_SNAPSHOT_CELLS / 64u];
} SCWorldSnapshotEnvironment;
typedef struct SCWorldSnapshotDensity {
    uint32_t visits, written, cycles, coordinates, active;
    uint8_t scratch[2u][SC_WORLD_SNAPSHOT_CELLS / 4u];
} SCWorldSnapshotDensity;
typedef struct SCWorldSnapshotEnvironmentWork {
    uint32_t cycles, written, coordinates, active;
    uint8_t crime[SC_WORLD_SNAPSHOT_CELLS / 4u];
    uint8_t terrain_scratch[SC_WORLD_SNAPSHOT_CELLS / 16u];
    uint8_t terrain_value[SC_WORLD_SNAPSHOT_CELLS / 16u];
} SCWorldSnapshotEnvironmentWork;
typedef struct SCWorldSnapshotServices {
    uint32_t crime_cycles, fire_cycles, crime_written, coordinates, crime_active, fire_active;
    uint16_t services[2][SC_WORLD_SNAPSHOT_CELLS / 64u], scratch[SC_WORLD_SNAPSHOT_CELLS / 64u];
    uint8_t coverage[2][SC_WORLD_SNAPSHOT_CELLS / 64u];
} SCWorldSnapshotServices;

static void world_snapshot_encode(SCWorldSnapshotWork *work, const SimCityRecompStockWorldPower *state) {
    const uint32_t fields[] = {
        state->census.visited, state->census.order_errors, state->census.extended_centers,
        state->census.lookup_coordinates, state->census.active, state->census.complete,
        state->written_cells, state->powered_cells, state->order_errors, state->completed_cycles,
        state->propagating, state->materializing, state->complete
    };
    memcpy(work->fields, fields, sizeof(fields));
    memcpy(work->bitmap, state->bitmap, sizeof(work->bitmap));
}

static int world_snapshot_work_valid(const SCWorldSnapshotWork *work) {
    const uint32_t *f = work->fields;
    return f[0] <= SC_WORLD_SNAPSHOT_CELLS && f[1] <= f[0] && f[2] <= f[0] &&
           f[3] <= UINT16_MAX && f[4] <= 1u && f[5] <= 1u && f[4] + f[5] <= 1u &&
           f[6] <= SC_WORLD_SNAPSHOT_CELLS && f[7] <= f[6] && f[8] <= f[6] &&
           f[10] <= 1u && f[11] <= 1u && f[12] <= 1u && f[10] + f[11] + f[12] <= 1u &&
           (!f[12] || f[6] == SC_WORLD_SNAPSHOT_CELLS);
}

static void world_snapshot_decode(SimCityRecompStockWorldPower *state, const SCWorldSnapshotWork *work) {
    const uint32_t *f = work->fields;
    memset(state, 0, sizeof(*state));
    state->census.visited = f[0];
    state->census.order_errors = f[1];
    state->census.extended_centers = f[2];
    state->census.lookup_coordinates = (uint16_t)f[3];
    state->census.active = (uint8_t)f[4];
    state->census.complete = (uint8_t)f[5];
    state->written_cells = f[6];
    state->powered_cells = f[7];
    state->order_errors = f[8];
    state->completed_cycles = f[9];
    state->propagating = (uint8_t)f[10];
    state->materializing = (uint8_t)f[11];
    state->complete = (uint8_t)f[12];
    memcpy(state->bitmap, work->bitmap, sizeof(work->bitmap));
}

static uint8_t *snapshot_append(uint8_t *destination, const void *source, size_t size) {
    if (size) memcpy(destination, source, size);
    return destination + size;
}

static uint8_t *snapshot_encode_runtime(uint8_t *destination, const SCV11Runtime *runtime) {
    const uint8_t *const no_rom = NULL;
    const size_t no_rom_size = 0u;
    const SCV11AudioSink no_sink = NULL;
    void *const no_context = NULL;
    /* The serialized runtime follows a header and 16-bit input history;
       this storage can be unaligned for a live SCV11Runtime. */
    memcpy(destination, runtime, sizeof(*runtime));
    memcpy(destination + offsetof(SCV11Runtime, rom), &no_rom, sizeof(no_rom));
    memcpy(destination + offsetof(SCV11Runtime, rom_size), &no_rom_size, sizeof(no_rom_size));
    memcpy(destination + offsetof(SCV11Runtime, audio_sink), &no_sink, sizeof(no_sink));
    memcpy(destination + offsetof(SCV11Runtime, audio_sink_context), &no_context, sizeof(no_context));
    return destination + sizeof(*runtime);
}

static int snapshot_capture_internal(const SimCityRecomp *instance,
                                     const uint16_t *tiles, const SimCityRecompStockWorldPower *power,
                                     void **bytes, size_t *size, char *error, size_t error_capacity,
                                     int seal_now) {
    SimCitySnapshotHeaderV11 header = {0};
    SCWorldSnapshotWork work;
    SCWorldSnapshotTraffic traffic;
    SCWorldSnapshotEnvironment environment;
    SCWorldSnapshotDensity density;
    SCWorldSnapshotEnvironmentWork env_work;
    SCWorldSnapshotServices services;
    if (bytes) *bytes = NULL;
    if (size) *size = 0u;
    if (!instance || !instance->runtime || !bytes || !size) {
        copy_text(error, error_capacity, "A loaded game and snapshot outputs are required.");
        return 0;
    }
    if (instance->world) { copy_text(error,error_capacity,"World Map sandbox snapshots are unavailable."); return 0; }
    const size_t tiles_size = SC_WORLD_SNAPSHOT_CELLS * sizeof(*tiles);
    const size_t apu_size = sc_static_apu_snapshot_size();
    const size_t fixed_size = sizeof(header) + sizeof(*instance->runtime) +
        (power ? sizeof(work) + sizeof(traffic) + sizeof(environment) +
                 sizeof(density) + sizeof(env_work) + sizeof(services) + tiles_size : 0u);
    if (apu_size > UINT32_MAX || apu_size > SIZE_MAX - fixed_size ||
        instance->input_history_count > (SIZE_MAX - fixed_size - apu_size) / sizeof(uint16_t)) {
        copy_text(error, error_capacity, "Direct snapshot state is too large.");
        return 0;
    }
    const size_t history_size = (size_t)instance->input_history_count * sizeof(uint16_t);
    const size_t total = fixed_size + apu_size + history_size;
    uint8_t *data = malloc(total);
    if (!data) {
        copy_text(error, error_capacity, "Unable to allocate direct snapshot state.");
        return 0;
    }
    uint8_t *payload = snapshot_append(data + sizeof(header), instance->input_history, history_size);
    uint8_t *out = snapshot_encode_runtime(payload, instance->runtime);
    if (!sc_static_apu_snapshot_save(out, apu_size)) {
        free(data);
        copy_text(error, error_capacity, "Unable to capture static audio state.");
        return 0;
    }
    out += apu_size;
    /* Keep drafts distinguishable from loadable data even if their eventual
       checksums would happen to be zero. */
    memcpy(header.magic, power ? "scworld6" : "scsnap11", 8u);
    header.version = power ? 6u : 11u;
    header.history_frames = instance->input_history_count;
    header.runtime_size = (uint32_t)sizeof(*instance->runtime);
    header.apu_size = (uint32_t)apu_size;
    if (power) {
        world_snapshot_encode(&work, power);
        traffic.writes = power->traffic_writes;
        traffic.west = power->traffic_west;
        traffic.east = power->traffic_east;
        memcpy(traffic.density, power->traffic, sizeof(traffic.density));
        memcpy(environment.land_value, power->land_value, sizeof(environment.land_value));
        memcpy(environment.pollution, power->pollution, sizeof(environment.pollution));
        memcpy(environment.density, power->population_density, sizeof(environment.density));
        memcpy(environment.growth, power->growth_rate, sizeof(environment.growth));
        density.visits = power->density_visits;
        density.written = power->density_written;
        density.cycles = power->density_cycles;
        density.coordinates = power->density_coordinates;
        density.active = power->density_active;
        memcpy(density.scratch, power->density_scratch, sizeof(density.scratch));
        env_work.cycles = power->environment_cycles;
        env_work.written = power->pollution_written;
        env_work.coordinates = power->terrain_coordinates;
        env_work.active = power->environment_active;
        memcpy(env_work.crime, power->crime, sizeof(env_work.crime));
        memcpy(env_work.terrain_scratch, power->terrain_scratch, sizeof(env_work.terrain_scratch));
        memcpy(env_work.terrain_value, power->terrain_value, sizeof(env_work.terrain_value));
        services.crime_cycles = power->crime_cycles;
        services.fire_cycles = power->fire_cycles;
        services.crime_written = power->crime_written;
        services.coordinates = power->service_coordinates;
        services.crime_active = power->crime_active;
        services.fire_active = power->fire_active;
        memcpy(services.services, power->services, sizeof(services.services));
        memcpy(services.scratch, power->service_scratch, sizeof(services.scratch));
        memcpy(services.coverage, power->service_coverage, sizeof(services.coverage));
        out = snapshot_append(out, &work, sizeof(work));
        out = snapshot_append(out, &traffic, sizeof(traffic));
        out = snapshot_append(out, &environment, sizeof(environment));
        out = snapshot_append(out, &density, sizeof(density));
        out = snapshot_append(out, &env_work, sizeof(env_work));
        out = snapshot_append(out, &services, sizeof(services));
        out = snapshot_append(out, tiles, tiles_size);
    }
    memcpy(data, &header, sizeof(header));
    if ((size_t)(out - data) != total || (seal_now && !simcity_recomp_snapshot_seal(data, total))) {
        free(data);
        copy_text(error, error_capacity, "Unable to finalize direct snapshot state.");
        return 0;
    }
    *bytes = data;
    *size = total;
    copy_text(error, error_capacity, "");
    return 1;
}

int simcity_recomp_snapshot_seal(void *bytes, size_t size) {
    SimCitySnapshotHeaderV11 header;
    uint8_t *data = bytes;
    if (!data || size < sizeof(header)) return 0;
    memcpy(&header, data, sizeof(header));
    const int world = header.version == 6u && !memcmp(header.magic, "scworld6", 8u);
    if (!world && (header.version != 11u || memcmp(header.magic, "scsnap11", 8u))) return 0;
    const size_t extra = world ? sizeof(SCWorldSnapshotWork) + sizeof(SCWorldSnapshotTraffic) +
        sizeof(SCWorldSnapshotEnvironment) + sizeof(SCWorldSnapshotDensity) +
        sizeof(SCWorldSnapshotEnvironmentWork) + sizeof(SCWorldSnapshotServices) +
        SC_WORLD_SNAPSHOT_CELLS * sizeof(uint16_t) : 0u;
    const size_t body = size - sizeof(header);
    if (header.runtime_size != sizeof(SCV11Runtime) ||
        header.apu_size > body || body - header.apu_size < header.runtime_size ||
        body - header.apu_size - header.runtime_size < extra) return 0;
    const size_t history_size = body - header.apu_size - header.runtime_size - extra;
    if (history_size % sizeof(uint16_t) || history_size / sizeof(uint16_t) != header.history_frames) return 0;
    const uint8_t *history = data + sizeof(header);
    uint32_t history_hash = 2166136261u;
    /* Match snapshot_hash even on a host whose uint16_t representation
       isn't little-endian, and don't assume the passed buffer is aligned. */
    for (size_t offset = 0u; offset < history_size; offset += sizeof(uint16_t)) {
        uint16_t word;
        memcpy(&word, history + offset, sizeof(word));
        history_hash = (history_hash ^ (uint8_t)word) * 16777619u;
        history_hash = (history_hash ^ (uint8_t)(word >> 8u)) * 16777619u;
    }
    header.history_hash = history_hash;
    header.payload_hash = snapshot_hash_bytes(2166136261u, history + history_size, body - history_size);
    memcpy(header.magic, world ? "SCWORLD6" : "SCSNAP11", 8u);
    memcpy(data, &header, sizeof(header));
    return 1;
}

int simcity_recomp_snapshot_capture(const SimCityRecomp *instance, void **bytes,
                                    size_t *size, char *error, size_t error_capacity) {
    const SCStockWorldCity *world = instance ? instance->stock_world : NULL;
    return snapshot_capture_internal(instance, world ? world->tiles : NULL,
        world ? &world->work : NULL, bytes, size, error, error_capacity, 1);
}

int simcity_recomp_snapshot_capture_deferred(const SimCityRecomp *instance, void **bytes,
    size_t *size, char *error, size_t error_capacity) {
    const SCStockWorldCity *world = instance ? instance->stock_world : NULL;
    return snapshot_capture_internal(instance, world ? world->tiles : NULL,
        world ? &world->work : NULL, bytes, size, error, error_capacity, 0);
}

void simcity_recomp_snapshot_release(void *bytes) {
    free(bytes);
}

static int snapshot_save_internal(const SimCityRecomp *instance, const char *path,
                                  const uint16_t *tiles, const SimCityRecompStockWorldPower *power,
                                  char *error, size_t error_capacity) {
    void *bytes;
    size_t size;
    if (!instance || !path || !*path) {
        copy_text(error, error_capacity, "A loaded game and snapshot path are required.");
        return 0;
    }
    if (!snapshot_capture_internal(instance, tiles, power, &bytes, &size, error, error_capacity, 1))
        return 0;
    FILE *file = snapshot_open(path, 1);
    if (!file) {
        simcity_recomp_snapshot_release(bytes);
        copy_text(error, error_capacity, "Unable to create snapshot file.");
        return 0;
    }
    const int written = fwrite(bytes, 1u, size, file) == size;
    const int closed = fclose(file) == 0;
    simcity_recomp_snapshot_release(bytes);
    if (!written || !closed) {
        copy_text(error, error_capacity, written ? "Unable to finalize snapshot file." :
            "Unable to write complete snapshot file.");
        return 0;
    }
    return 1;
}

int simcity_recomp_snapshot_save(const SimCityRecomp *instance, const char *path,
                                 char *error, size_t error_capacity) {
    const SCStockWorldCity *world = instance ? instance->stock_world : NULL;
    return snapshot_save_internal(instance, path, world ? world->tiles : NULL,
                                  world ? &world->work : NULL, error, error_capacity);
}

static void snapshot_restore_battery(SimCityRecomp *instance) {
    /* The cold-boot seed can contain an imported legacy SRAM. It is
       authoritative before the first new save, too. */
    const uint8_t *committed = stock_authoritative_sram(instance);
    if (committed) {
        memcpy(instance->runtime->sram, committed, SC_V11_SRAM_SIZE);
        instance->runtime->sram_dirty = 0u;
    }
}

static int snapshot_load_internal(SimCityRecomp *instance, const char *path,
                                  uint16_t *tiles, SimCityRecompStockWorldPower *power,
                                  char *error, size_t error_capacity) {
    FILE *file; SimCitySnapshotHeader header; uint16_t *history=NULL; uint32_t i;
    SimCityRecompFrameResult frame;
    if (!instance || !path || !*path) { copy_text(error,error_capacity,"A loaded game and snapshot path are required."); return 0; }
    if (instance->world) { copy_text(error,error_capacity,"Exit World Map before loading a snapshot."); return 0; }
    file=snapshot_open(path,0); if(!file){copy_text(error,error_capacity,"Unable to open snapshot file.");return 0;}
    if(fread(&header,1u,sizeof(header),file)!=sizeof(header)){
        fclose(file); copy_text(error,error_capacity,"Snapshot header is invalid or unsupported."); return 0;
    }
    const int world_v6 = memcmp(header.magic, "SCWORLD6", 8u) == 0 && header.version == 6u;
    const int world_has_env_work = world_v6 ||
        (memcmp(header.magic, "SCWORLD5", 8u) == 0 && header.version == 5u);
    const int world_has_density = world_has_env_work ||
        (memcmp(header.magic, "SCWORLD4", 8u) == 0 && header.version == 4u);
    const int world_has_environment = world_has_density ||
        (memcmp(header.magic, "SCWORLD3", 8u) == 0 && header.version == 3u);
    const int world_has_traffic = world_has_environment ||
        (memcmp(header.magic, "SCWORLD2", 8u) == 0 && header.version == 2u);
    if ((power && (world_has_traffic || (memcmp(header.magic, "SCWORLD1", 8u) == 0 && header.version == 1u))) ||
        (!power && memcmp(header.magic, "SCSNAP11", 8u) == 0 && header.version == 11u)) {
        SimCitySnapshotHeaderV11 dh;SCV11Runtime *loaded=NULL;void *apu=NULL;uint32_t payload;int trailing;
        SCWorldSnapshotWork work;
        SCWorldSnapshotTraffic traffic = {0};
        SCWorldSnapshotEnvironment environment = {0};
        SCWorldSnapshotDensity density = {0};
        SCWorldSnapshotEnvironmentWork env_work = {0};
        SCWorldSnapshotServices services = {0};
        uint16_t *loaded_tiles = NULL;
        if(fseek(file,0,SEEK_SET)!=0||fread(&dh,1u,sizeof(dh),file)!=sizeof(dh)||dh.history_frames>10000000u||dh.runtime_size!=sizeof(SCV11Runtime)||dh.apu_size!=sc_static_apu_snapshot_size()){
            fclose(file);copy_text(error,error_capacity,"Direct snapshot is invalid or from another build.");return 0;
        }
        if(dh.history_frames){history=(uint16_t*)malloc((size_t)dh.history_frames*sizeof(uint16_t));if(!history||fread(history,sizeof(uint16_t),dh.history_frames,file)!=dh.history_frames){free(history);fclose(file);copy_text(error,error_capacity,"Snapshot history is truncated.");return 0;}}
        loaded=(SCV11Runtime*)malloc(sizeof(*loaded));apu=malloc(dh.apu_size);
        if (power) loaded_tiles = malloc(SC_WORLD_SNAPSHOT_CELLS * sizeof(*loaded_tiles));
        if(!loaded||!apu||fread(loaded,1u,sizeof(*loaded),file)!=sizeof(*loaded)||fread(apu,1u,dh.apu_size,file)!=dh.apu_size ||
           (power && (!loaded_tiles || fread(&work, 1u, sizeof(work), file) != sizeof(work) ||
                      !world_snapshot_work_valid(&work) ||
                      (world_has_traffic && (fread(&traffic, 1u, sizeof(traffic), file) != sizeof(traffic) ||
                                    traffic.writes != traffic.west + traffic.east)) ||
                      (world_has_environment && fread(&environment, 1u, sizeof(environment), file) != sizeof(environment)) ||
                      (world_has_density && (fread(&density, 1u, sizeof(density), file) != sizeof(density) ||
                                    density.active > 1u || density.coordinates > UINT16_MAX ||
                                    density.visits > SC_WORLD_SNAPSHOT_CELLS ||
                                    density.written > SC_WORLD_SNAPSHOT_CELLS / 4u)) ||
                      (world_has_env_work && (fread(&env_work, 1u, sizeof(env_work), file) != sizeof(env_work) ||
                                    env_work.active > 1u || env_work.coordinates > UINT16_MAX ||
                                    env_work.written > SC_WORLD_SNAPSHOT_CELLS / 4u)) ||
                      (world_v6 && (fread(&services, 1u, sizeof(services), file) != sizeof(services) ||
                                    services.crime_active > 1u || services.fire_active > 1u ||
                                    services.coordinates > UINT16_MAX ||
                                    services.crime_written > SC_WORLD_SNAPSHOT_CELLS / 4u)) ||
                      fread(loaded_tiles, sizeof(*loaded_tiles), SC_WORLD_SNAPSHOT_CELLS, file) != SC_WORLD_SNAPSHOT_CELLS)) ||
           (trailing=fgetc(file))!=EOF||ferror(file)){
            free(history);free(loaded);free(apu);free(loaded_tiles);fclose(file);copy_text(error,error_capacity,"Direct snapshot data is truncated or invalid.");return 0;
        }
        fclose(file);payload=snapshot_hash_bytes(2166136261u,loaded,sizeof(*loaded));payload=snapshot_hash_bytes(payload,apu,dh.apu_size);
        if (power) {
            payload = snapshot_hash_bytes(payload, &work, sizeof(work));
            if (world_has_traffic) payload = snapshot_hash_bytes(payload, &traffic, sizeof(traffic));
            if (world_has_environment) payload = snapshot_hash_bytes(payload, &environment, sizeof(environment));
            if (world_has_density) payload = snapshot_hash_bytes(payload, &density, sizeof(density));
            if (world_has_env_work) payload = snapshot_hash_bytes(payload, &env_work, sizeof(env_work));
            if (world_v6) payload = snapshot_hash_bytes(payload, &services, sizeof(services));
            payload = snapshot_hash_bytes(payload, loaded_tiles, SC_WORLD_SNAPSHOT_CELLS * sizeof(*loaded_tiles));
        }
        if(snapshot_hash(history,dh.history_frames)!=dh.history_hash||payload!=dh.payload_hash||!history_reserve(instance,dh.history_frames)){
            free(history);free(loaded);free(apu);free(loaded_tiles);copy_text(error,error_capacity,"Direct snapshot checksum or allocation failed.");return 0;
        }
        if(!sc_static_apu_snapshot_load(apu,dh.apu_size,error,error_capacity)){free(history);free(loaded);free(apu);free(loaded_tiles);return 0;}
        memcpy(instance->runtime,loaded,sizeof(*loaded));instance->runtime->rom=instance->rom;instance->runtime->rom_size=SIMCITY_RECOMP_ROM_SIZE;sc_v11_set_audio_sink(instance->runtime,audio_sink,instance);
        snapshot_restore_battery(instance);
        if(dh.history_frames)memcpy(instance->input_history,history,(size_t)dh.history_frames*sizeof(uint16_t));instance->input_history_count=dh.history_frames;
        free(history);free(loaded);free(apu);
        if (power) {
            memcpy(tiles, loaded_tiles, SC_WORLD_SNAPSHOT_CELLS * sizeof(*loaded_tiles));
            world_snapshot_decode(power, &work);
            if (world_has_traffic) {
                power->traffic_writes = traffic.writes;
                power->traffic_west = traffic.west;
                power->traffic_east = traffic.east;
                memcpy(power->traffic, traffic.density, sizeof(power->traffic));
            }
            if (world_has_environment) {
                memcpy(power->land_value, environment.land_value, sizeof(power->land_value));
                memcpy(power->pollution, environment.pollution, sizeof(power->pollution));
                memcpy(power->population_density, environment.density, sizeof(power->population_density));
                memcpy(power->growth_rate, environment.growth, sizeof(power->growth_rate));
            }
            if (world_has_density) {
                power->density_visits = density.visits;
                power->density_written = density.written;
                power->density_cycles = density.cycles;
                power->density_coordinates = (uint16_t)density.coordinates;
                power->density_active = (uint8_t)density.active;
                memcpy(power->density_scratch, density.scratch, sizeof(power->density_scratch));
            }
            if (world_has_env_work) {
                power->environment_cycles = env_work.cycles;
                power->pollution_written = env_work.written;
                power->terrain_coordinates = (uint16_t)env_work.coordinates;
                power->environment_active = (uint8_t)env_work.active;
                memcpy(power->crime, env_work.crime, sizeof(power->crime));
                memcpy(power->terrain_scratch, env_work.terrain_scratch, sizeof(power->terrain_scratch));
                memcpy(power->terrain_value, env_work.terrain_value, sizeof(power->terrain_value));
            }
            if (world_v6) {
                power->crime_cycles = services.crime_cycles;
                power->fire_cycles = services.fire_cycles;
                power->crime_written = services.crime_written;
                power->service_coordinates = (uint16_t)services.coordinates;
                power->crime_active = (uint8_t)services.crime_active;
                power->fire_active = (uint8_t)services.fire_active;
                memcpy(power->services, services.services, sizeof(power->services));
                memcpy(power->service_scratch, services.scratch, sizeof(power->service_scratch));
                memcpy(power->service_coverage, services.coverage, sizeof(power->service_coverage));
            }
        }
        free(loaded_tiles);
        const int rendered = render_current_frame(instance, error, error_capacity);
        audio_queue_reset(instance);
        if (!rendered && !power) return 0;
        copy_text(error,error_capacity,"");return 1;
    }
    if (power || memcmp(header.magic, "SCWORLD", 7u) == 0) {
        fclose(file);
        copy_text(error, error_capacity, power ? "Not a World Map snapshot." : "Open this snapshot in World Map mode.");
        return 0;
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
            snapshot_restore_battery(instance);
            instance->replaying_snapshot=0u; free(history); return 0;
        }
        i+=run;
    }
    snapshot_restore_battery(instance);
    if(!render_current_frame(instance,error,error_capacity)){
        instance->replaying_snapshot=0u; free(history); return 0;
    }
    instance->replaying_snapshot=0u; free(history); audio_queue_reset(instance);
    /* Legacy input-replay snapshots are upgraded in place after one
       successful replay so every subsequent load uses direct machine state. */
    (void)simcity_recomp_snapshot_save(instance,path,NULL,0u);
    copy_text(error,error_capacity,""); return 1;
}

int simcity_recomp_snapshot_load(SimCityRecomp *instance, const char *path,
                                 char *error, size_t error_capacity) {
    if (instance && path && *path) {
        FILE *file = snapshot_open(path, 0);
        if (file) {
            char magic[8];
            const int expanded = fread(magic, 1u, sizeof(magic), file) == sizeof(magic) &&
                                 memcmp(magic, "SCWORLD", 7u) == 0;
            fclose(file);
            if (expanded)
                return simcity_recomp_stock_world_open_snapshot(instance, path, error, error_capacity);
        }
    }
    SCStockWorldCity *world = instance ? instance->stock_world : NULL;
    if (instance) instance->stock_world = NULL;
    const int ok = snapshot_load_internal(instance, path, NULL, NULL, error, error_capacity);
    if (ok) {
        free(world);
        instance->stock_world_pending = 0u;
        instance->world_menu_state = 0u;
        reset_world_catalog_input(instance);
    } else if (instance) instance->stock_world = world;
    return ok;
}

int simcity_recomp_stock_world_open_snapshot(SimCityRecomp *instance,
                                           const char *path, char *error, size_t error_capacity) {
    if (!instance || !instance->initialized || instance->world) {
        copy_text(error, error_capacity, "Load the ROM before opening a World Map snapshot.");
        return 0;
    }
    SCStockWorldCity *previous = instance->stock_world;
    SCStockWorldCity *city = calloc(1u, sizeof(*city));
    if (!city) {
        copy_text(error, error_capacity, "Unable to allocate the expanded city.");
        return 0;
    }
    instance->stock_world = city;
    if (!snapshot_load_internal(instance, path, city->tiles, &city->work, error, error_capacity)) {
        instance->stock_world = previous;
        free(city);
        return 0;
    }
    free(previous);
    instance->stock_world_pending = 0u;
    instance->world_menu_state = 0u;
    reset_world_catalog_input(instance);
    instance->widescreen_cursor_extension_x = 0;
    instance->widescreen_cursor_anchor_valid = 0u;
    return 1;
}

int simcity_recomp_stock_world_snapshot_save(const SimCityRecomp *instance,
    const char *path, const uint16_t *tiles, size_t count,
    const SimCityRecompStockWorldPower *power, char *error, size_t error_capacity) {
    if (!tiles || count != SC_WORLD_SNAPSHOT_CELLS || !power) {
        copy_text(error, error_capacity, "A complete World Map and simulation state are required.");
        return 0;
    }
    return snapshot_save_internal(instance, path, tiles, power, error, error_capacity);
}

int simcity_recomp_stock_world_snapshot_load(SimCityRecomp *instance,
    const char *path, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldPower *power, char *error, size_t error_capacity) {
    if (!tiles || count != SC_WORLD_SNAPSHOT_CELLS || !power) {
        copy_text(error, error_capacity, "World Map storage and simulation state are required.");
        return 0;
    }
    return snapshot_load_internal(instance, path, tiles, power, error, error_capacity);
}

uint32_t simcity_recomp_snapshot_history_frames(const SimCityRecomp *instance) {
    return instance ? instance->input_history_count : 0u;
}

enum {
    WORLD_BATTERY_HEADER = 16,
    WORLD_BATTERY_TILES = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT,
    WORLD_BATTERY_SLOT_BYTES = 4 + 2 * WORLD_BATTERY_TILES,
    WORLD_BATTERY_BYTES = WORLD_BATTERY_HEADER + SC_V11_SRAM_SIZE + 2 * WORLD_BATTERY_SLOT_BYTES
};

static uint32_t battery_read32(const uint8_t *from) {
    return (uint32_t)from[0] | (uint32_t)from[1] << 8 |
           (uint32_t)from[2] << 16 | (uint32_t)from[3] << 24;
}

static void battery_write32(uint8_t *to, uint32_t value) {
    for (unsigned i = 0; i < 4u; ++i) to[i] = (uint8_t)(value >> (8u * i));
}

size_t simcity_recomp_world_battery_size(void) { return WORLD_BATTERY_BYTES; }

int simcity_recomp_world_battery_enable(SimCityRecomp *instance) {
    if (!instance || !instance->runtime || instance->runtime->scheduler.frame != 0u) return 0;
    if (instance->stock_native_committed_sram) return 1;
    instance->stock_native_committed_sram = malloc(SC_V11_SRAM_SIZE);
    if (!instance->stock_native_committed_sram) return 0;
    memcpy(instance->stock_native_committed_sram, instance->runtime->sram, SC_V11_SRAM_SIZE);
    return 1;
}

int simcity_recomp_world_battery_import(SimCityRecomp *instance, const void *data, size_t size) {
    const uint8_t *image = data;
    SCStockWorldNativeSlot loaded[2] = {0};
    if (!instance || !instance->runtime || instance->runtime->scheduler.frame != 0u ||
        !image || size != WORLD_BATTERY_BYTES || memcmp(image, "SCWBAT01", 8u) != 0) return 0;
    const uint8_t *sram = image + WORLD_BATTERY_HEADER;
    const uint32_t mask = battery_read32(image + 8);
    const uint32_t hash = snapshot_hash_bytes(snapshot_hash_bytes(2166136261u, image + 8, 4u),
                                            sram, size - WORLD_BATTERY_HEADER);
    if ((mask & ~3u) || hash != battery_read32(image + 12)) return 0;
    for (unsigned slot = 0; slot < 2u; ++slot) {
        if (!(mask & (1u << slot))) continue;
        const uint8_t *encoded = sram + SC_V11_SRAM_SIZE + slot * WORLD_BATTERY_SLOT_BYTES;
        loaded[slot].identity = battery_read32(encoded);
        if (loaded[slot].identity != stock_native_slot_identity(sram, slot)) goto fail;
        loaded[slot].tiles = malloc(WORLD_BATTERY_TILES * sizeof(uint16_t));
        if (!loaded[slot].tiles) goto fail;
        for (unsigned i = 0; i < WORLD_BATTERY_TILES; ++i)
            loaded[slot].tiles[i] = (uint16_t)(encoded[4u + i * 2u] | (uint16_t)encoded[5u + i * 2u] << 8);
    }
    if (!simcity_recomp_world_battery_enable(instance)) goto fail;
    memcpy(instance->stock_native_committed_sram, sram, SC_V11_SRAM_SIZE);
    memcpy(instance->runtime->sram, sram, SC_V11_SRAM_SIZE);
    instance->runtime->sram_dirty = 0u;
    instance->stock_native_has_commit = 1;
    instance->stock_native_storage_dirty = 0;
    for (unsigned slot = 0; slot < 2u; ++slot) {
        free(instance->stock_native_slots[slot].tiles);
        instance->stock_native_slots[slot] = loaded[slot];
    }
    return 1;
fail:
    for (unsigned slot = 0; slot < 2u; ++slot) free(loaded[slot].tiles);
    return 0;
}

int simcity_recomp_world_battery_export(const SimCityRecomp *instance, void *data, size_t size) {
    uint8_t *image = data;
    uint32_t mask = 0;
    if (!instance || !instance->stock_native_has_commit || !image || size != WORLD_BATTERY_BYTES) return 0;
    memset(image, 0, size);
    memcpy(image, "SCWBAT01", 8u);
    uint8_t *sram = image + WORLD_BATTERY_HEADER;
    memcpy(sram, instance->stock_native_committed_sram, SC_V11_SRAM_SIZE);
    for (unsigned slot = 0; slot < 2u; ++slot) {
        const SCStockWorldNativeSlot *record = &instance->stock_native_slots[slot];
        if (!record->tiles) continue;
        if (record->identity != stock_native_slot_identity(sram, slot)) return 0;
        mask |= 1u << slot;
        uint8_t *encoded = sram + SC_V11_SRAM_SIZE + slot * WORLD_BATTERY_SLOT_BYTES;
        battery_write32(encoded, record->identity);
        for (unsigned i = 0; i < WORLD_BATTERY_TILES; ++i) {
            encoded[4u + i * 2u] = (uint8_t)record->tiles[i];
            encoded[5u + i * 2u] = (uint8_t)(record->tiles[i] >> 8);
        }
    }
    battery_write32(image + 8, mask);
    battery_write32(image + 12, snapshot_hash_bytes(snapshot_hash_bytes(2166136261u, image + 8, 4u),
                                                  sram, size - WORLD_BATTERY_HEADER));
    return 1;
}

int simcity_recomp_world_battery_dirty(const SimCityRecomp *instance) {
    return instance && instance->stock_native_storage_dirty;
}

void simcity_recomp_world_battery_mark_clean(SimCityRecomp *instance) {
    if (instance) instance->stock_native_storage_dirty = 0;
}

uint64_t simcity_recomp_world_battery_revision(const SimCityRecomp *instance) {
    return instance ? instance->stock_native_storage_revision : 0u;
}

void simcity_recomp_world_battery_acknowledge(SimCityRecomp *instance, uint64_t revision) {
    if (instance && instance->stock_native_storage_revision == revision)
        instance->stock_native_storage_dirty = 0;
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
    instance->sram_seed_loaded = 1;
    if (instance->stock_native_committed_sram && !instance->stock_native_has_commit)
        memcpy(instance->stock_native_committed_sram, source, SC_V11_SRAM_SIZE);
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
    if (instance->world) { copy_text(error,error_capacity,"Exit World Map before loading a diagnostic state."); return 0; }
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

uint64_t simcity_recomp_master_clock(const SimCityRecomp *instance) {
    return instance && instance->runtime ?
        instance->runtime->scheduler.master_clock : 0u;
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

uint64_t simcity_recomp_audio_dropped_frames(
    const SimCityRecomp *instance) {
    return instance ? instance->audio_dropped_frames : 0u;
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
    status->pcm_frames=source.pcm_frames;
    status->pcm_known_frames=source.pcm_known_frames;
    status->pcm_unknown_frames=source.pcm_unknown_frames;
    status->pcm_hash=source.pcm_hash;
    status->pcm_overflows=source.pcm_overflows;
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
