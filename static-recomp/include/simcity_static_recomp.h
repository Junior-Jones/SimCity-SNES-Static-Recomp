#ifndef SIMCITY_STATIC_RECOMP_H
#define SIMCITY_STATIC_RECOMP_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SIMCITY_RECOMP_API_VERSION 1u
#define SIMCITY_RECOMP_ROM_SIZE 524288u
#define SIMCITY_RECOMP_FRAME_WIDTH 256u
#define SIMCITY_RECOMP_WIDESCREEN_MARGIN 71u
#define SIMCITY_RECOMP_WIDESCREEN_WIDTH \
    (SIMCITY_RECOMP_FRAME_WIDTH + SIMCITY_RECOMP_WIDESCREEN_MARGIN * 2u)
#define SIMCITY_RECOMP_FRAME_HEIGHT 239u
#define SIMCITY_RECOMP_FRAME_PIXELS \
    (SIMCITY_RECOMP_FRAME_WIDTH * SIMCITY_RECOMP_FRAME_HEIGHT)
#define SIMCITY_RECOMP_MAX_FRAME_PIXELS \
    (SIMCITY_RECOMP_WIDESCREEN_WIDTH * SIMCITY_RECOMP_FRAME_HEIGHT)
#define SIMCITY_RECOMP_TITLE_FRAME 840u
#define SIMCITY_RECOMP_AUDIO_SAMPLE_RATE 32040u
#define SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR 39375000u
#define SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR 655171u
#define SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE 32040u
#define SIMCITY_RECOMP_AUDIO_CHANNELS 2u
#define SIMCITY_RECOMP_AUDIO_BITS_PER_SAMPLE 16u
#define SIMCITY_RECOMP_VIDEO_STANDARD_NTSC 1u
#define SIMCITY_RECOMP_NTSC_SCANLINES 262u
#define SIMCITY_RECOMP_NTSC_AVERAGE_MASTER_CLOCKS_PER_FRAME 357366u

/* Native SNES controller bit layout used by the static runtime. */
enum SimCityRecompInput {
    SIMCITY_INPUT_B      = 0x8000u,
    SIMCITY_INPUT_Y      = 0x4000u,
    SIMCITY_INPUT_SELECT = 0x2000u,
    SIMCITY_INPUT_START  = 0x1000u,
    SIMCITY_INPUT_UP     = 0x0800u,
    SIMCITY_INPUT_DOWN   = 0x0400u,
    SIMCITY_INPUT_LEFT   = 0x0200u,
    SIMCITY_INPUT_RIGHT  = 0x0100u,
    SIMCITY_INPUT_A      = 0x0080u,
    SIMCITY_INPUT_X      = 0x0040u,
    SIMCITY_INPUT_L      = 0x0020u,
    SIMCITY_INPUT_R      = 0x0010u
};

typedef struct SimCityRecomp SimCityRecomp;
enum SimCityWorldTile {
    SIMCITY_WORLD_MARKER = 1,
    SIMCITY_WORLD_ROAD = 2,
    SIMCITY_WORLD_PLANT = 3,
    SIMCITY_WORLD_ZONE = 4
};
enum SimCityWorldTool {
    SIMCITY_WORLD_TOOL_MARKER,
    SIMCITY_WORLD_TOOL_ROAD,
    SIMCITY_WORLD_TOOL_PLANT,
    SIMCITY_WORLD_TOOL_ZONE,
    SIMCITY_WORLD_TOOL_COUNT
};
typedef struct SimCityWorldMapStatus {
    unsigned width, height, cursor_x, cursor_y, edits, rejected;
    unsigned tool, funds, roads, plants, zones, powered_roads, served_zones;
    unsigned population, commuters, congested_roads, peak_road_load, growth_ticks;
} SimCityWorldMapStatus;

/* Experimental host map. L/R select a construction tool and B applies it.
   Roads are utility corridors. World Map saves are unavailable. */
int simcity_recomp_world_map_begin(SimCityRecomp *instance);
int simcity_recomp_world_menu_ready(const SimCityRecomp *instance);
int simcity_recomp_world_enter_from_menu(SimCityRecomp *instance);
void simcity_recomp_world_demo_arm(SimCityRecomp *instance);
void simcity_recomp_world_demo_cancel(SimCityRecomp *instance);
int simcity_recomp_world_demo_active(const SimCityRecomp *instance);
/* Call once before each naturally paced frame while running the demo. */
uint16_t simcity_recomp_world_demo_input(SimCityRecomp *instance);
void simcity_recomp_world_map_end(SimCityRecomp *instance);
int simcity_recomp_world_map_status(const SimCityRecomp *instance,
                                  SimCityWorldMapStatus *status);
int simcity_recomp_world_map_tile(const SimCityRecomp *instance,
                                int x, int y, uint16_t *tile);
/* Isolated gameplay probe only. Sets Freeland's 24-bit test treasury. */
int simcity_recomp_probe_freeland_funds(SimCityRecomp *instance);
int simcity_recomp_probe_world_funds(SimCityRecomp *instance);
typedef void (*SimCityRecompAudioProgressCallback)(
    SimCityRecomp *instance, void *opaque);
/* Headless stock-map research. Observes byte accesses to upper WRAM,
   including DMA, without changing the guest bus or snapshot layout. */
typedef void (*SimCityRecompStockMapAccess)(
    void *opaque, uint32_t instruction, uint16_t offset, int write, int dma);

typedef struct SimCityRecompAudioTransportStatus {
    uint8_t ready_observed;
    uint8_t upload_handshake_started;
    uint8_t upload_complete;
    uint8_t upload_verified;
    uint16_t entrypoint;
    uint32_t upload_block_count;
    uint32_t upload_write_count;
    uint32_t upload_unique_byte_count;
    uint32_t upload_overlap_writes;
    uint32_t upload_verify_mismatches;
    uint32_t generated_scpu_apu_sites;
    uint32_t observed_scpu_apu_sites;
    uint32_t unmanifested_scpu_apu_accesses;
    uint32_t post_upload_scpu_reads;
    uint32_t post_upload_scpu_writes;
    char upload_image_sha256[65];
    char upload_mask_sha256[65];
    char scpu_apu_manifest_sha256[65];
} SimCityRecompAudioTransportStatus;

typedef struct SimCityRecompAudioStaticStatus {
    uint8_t current_epoch;
    uint8_t route_failed;
    uint16_t current_smp_pc;
    uint32_t compiled_instruction_count;
    uint32_t compiled_driver_instruction_count;
    uint32_t observed_instruction_count;
    uint32_t opcode_mismatches;
    uint32_t code_write_barriers;
    uint64_t validated_instructions;
    uint64_t pcm_frames;
    uint64_t pcm_known_frames;
    uint64_t pcm_unknown_frames;
    uint64_t pcm_hash;
    uint64_t pcm_overflows;
    char manifest_sha256[65];
} SimCityRecompAudioStaticStatus;

typedef struct SimCityRecompFrameResult {
    uint8_t route_continued;
    uint8_t frame_rendered;
    uint16_t input_mask;
    uint32_t start_frame;
    uint32_t end_frame;
    char renderer_error[192];
} SimCityRecompFrameResult;

/* Creates an independent static-recompilation instance at the real cold-reset
   state. The ROM is copied by the instance; no hidden title acceleration is
   performed. Advance frames normally to observe the complete boot. */
int simcity_recomp_create(SimCityRecomp **out_instance,
                          const uint8_t *rom,
                          size_t rom_size,
                          char *error,
                          size_t error_capacity);

/* Cartridge and scheduler timing contract for the exact USA ROM. */
const char *simcity_recomp_video_standard(void);
double simcity_recomp_nominal_fps(void);
double simcity_recomp_presentation_fps(void);
uint32_t simcity_recomp_host_audio_sample_rate(void);
uint32_t simcity_recomp_average_master_clocks_per_frame(void);

/* Opens a process-wide static-core log file. Frontends call this before
   creating the game so cold boot, rendering and audio events are recorded. */
int simcity_recomp_log_open(const char *path, char *error, size_t error_capacity);
void simcity_recomp_log_close(void);

void simcity_recomp_destroy(SimCityRecomp *instance);

/* Returns the existing instance to the real cold-reset state. */
int simcity_recomp_reset(SimCityRecomp *instance,
                         char *error,
                         size_t error_capacity);

/* Advances whole SNES frames through generated static dispatch. A successful
   return means the CPU route advanced. frame_rendered can still be false when
   the reached PPU feature set is outside the current renderer. */
int simcity_recomp_advance(SimCityRecomp *instance,
                           uint16_t input_mask,
                           uint32_t frame_count,
                           SimCityRecompFrameResult *result);

/* Advances natural guest frames while permitting the host to drain already
   produced PCM during a long frame. The callback is observational and must
   never advance or modify guest state. */
int simcity_recomp_advance_streamed(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    SimCityRecompAudioProgressCallback audio_progress, void *opaque,
    SimCityRecompFrameResult *result);
/* Same native timing and PCM delivery, with host frame conversion deferred. */
int simcity_recomp_advance_streamed_headless(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    SimCityRecompAudioProgressCallback audio_progress, void *opaque,
    SimCityRecompFrameResult *result);
int simcity_recomp_render_presentation_frame(SimCityRecomp *instance,
                                             char *error, size_t error_capacity);

/* Detached video snapshot for the original game and stock-engine World Map.
   Capture on the owning thread at a guest frame boundary. Then one worker
   may render it without touching the live instance. Wait for that render
   before capturing again or destroying the snapshot or its ROM owner. */
typedef struct SimCityRecompVideoSnapshot SimCityRecompVideoSnapshot;
SimCityRecompVideoSnapshot *simcity_recomp_video_snapshot_create(void);
void simcity_recomp_video_snapshot_destroy(SimCityRecompVideoSnapshot *snapshot);
int simcity_recomp_video_snapshot_capture(SimCityRecompVideoSnapshot *snapshot,
                                           const SimCityRecomp *instance);
int simcity_recomp_video_snapshot_uses_world_map(const SimCityRecompVideoSnapshot *snapshot);
/* Conservative equality check for prepared World Map playback. Ignores
   host/guest frame IDs when their only role is selecting scanline state. */
int simcity_recomp_video_snapshot_same_world_image_inputs(
    const SimCityRecompVideoSnapshot *a, const SimCityRecompVideoSnapshot *b);
int simcity_recomp_video_snapshot_render(const SimCityRecompVideoSnapshot *snapshot,
    uint32_t *pixels, size_t capacity, unsigned *width);

/* Headless frame advance. CPU, PPU timing, S-SMP, S-DSP, controller
   history, and all SNES state advance identically, but the expensive host
   frame conversion is deferred. Call simcity_recomp_render_current_frame()
   when the current frame must be displayed. */
int simcity_recomp_advance_headless(SimCityRecomp *instance,
                                    uint16_t input_mask,
                                    uint32_t frame_count,
                                    SimCityRecompFrameResult *result);
int simcity_recomp_advance_stock_map_trace(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    SimCityRecompStockMapAccess access, void *opaque);
/* Experimental stock-engine port: run original gameplay against a fixed
   120x100 window into a 240x200 tile grid. Origin is in tiles. Simulation
   state outside the tile plane remains stock-sized; use one fixed origin
   for a headless test session, and do not save or switch origins mid-city. */
int simcity_recomp_advance_stock_world_window(
    SimCityRecomp *instance, uint16_t input_mask, uint32_t frame_count,
    uint16_t *tiles, size_t count, unsigned origin_x, unsigned origin_y);
/* Original camera/cursor and PPU tile streaming across the whole World Map.
   Headless test only: accepts D-pad buttons and B. Not all tools, global
   simulation, and persistence have been ported to the larger coordinates. */
int simcity_recomp_advance_stock_world_camera(
    SimCityRecomp *instance, uint16_t dpad, uint16_t *tiles, size_t count,
    uint32_t *extended_tile_reads);
typedef struct SimCityRecompStockWorldCensus {
    uint32_t visited, order_errors, extended_centers;
    uint16_t lookup_coordinates;
    uint8_t active, complete;
} SimCityRecompStockWorldCensus;
/* Headless census fixture: widen one stock census pass. Zero census before the
   first call, then keep the same state and map until complete is reported.
   Other simulation passes (power spread, traffic, save) are still stock. */
int simcity_recomp_advance_stock_world_census(
    SimCityRecomp *instance, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldCensus *census);
typedef struct SimCityRecompStockWorldPower {
    SimCityRecompStockWorldCensus census;
    uint8_t bitmap[240u * 200u / 8u];
    uint32_t written_cells, powered_cells, order_errors;
    uint32_t completed_cycles;
    uint8_t propagating, materializing, complete;
    uint8_t traffic[120u * 100u];
    uint32_t traffic_writes, traffic_west, traffic_east;
    uint8_t land_value[120u * 100u], pollution[120u * 100u], population_density[120u * 100u];
    uint16_t growth_rate[30u * 25u];
    uint8_t density_scratch[2][120u * 100u];
    uint32_t density_visits, density_written, density_cycles;
    uint16_t density_coordinates;
    uint8_t density_active;
    uint8_t crime[120u * 100u], terrain_scratch[60u * 50u], terrain_value[60u * 50u];
    uint32_t environment_cycles, pollution_written;
    uint16_t terrain_coordinates;
    uint8_t environment_active;
    uint16_t services[2u][30u * 25u], service_scratch[30u * 25u];
    uint8_t service_coverage[2u][30u * 25u];
    uint32_t crime_cycles, fire_cycles, crime_written;
    uint16_t service_coordinates;
    uint8_t crime_active, fire_active;
} SimCityRecompStockWorldPower;
/* Headless power probe. Zero state before starting; use the same map and
   state through one original census, propagation and power-bit commit. */
int simcity_recomp_advance_stock_world_power(
    SimCityRecomp *instance, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldPower *power);
/* Headless integration fixture. Keep the same grid and zero-initialized
   work state for the entire city. Runs stock D-pad/B, census and power
   together for repeated cycles. Includes expanded stock traffic routing;
   citywide overlays, remaining simulation passes and tools are experimental. */
int simcity_recomp_advance_stock_world_session(
    SimCityRecomp *instance, uint16_t input, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldPower *power);
/* Select World Map on the clean stock main menu, then finish the original
   New City flow. The core owns the expanded terrain once the city starts. */
int simcity_recomp_stock_world_request_new_city(SimCityRecomp *instance);
enum { SIMCITY_WORLD_MAP_TEMPLATE_COUNT = 9 };
typedef struct SimCityWorldMapTemplateInfo {
    const char *name;
    unsigned land_percent;
} SimCityWorldMapTemplateInfo;
/* Authored IDs 1 through COUNT; ID 0 keeps the legacy repeated terrain. */
const SimCityWorldMapTemplateInfo *simcity_recomp_world_map_template_info(unsigned id);
int simcity_recomp_world_map_template_tiles(unsigned id, uint16_t *tiles, size_t cells);
int simcity_recomp_stock_world_request_template(SimCityRecomp *instance, unsigned id);
enum SimCityWorldCatalogScreen {
    SIMCITY_WORLD_CATALOG_HIDDEN, SIMCITY_WORLD_CATALOG_MAIN,
    SIMCITY_WORLD_CATALOG_FOCUSED, SIMCITY_WORLD_CATALOG_LIST
};
/* Frontends enable this only when they can show the in-game catalog. */
void simcity_recomp_world_catalog_enable(SimCityRecomp *instance, int enabled);
enum SimCityWorldCatalogScreen simcity_recomp_world_catalog_view(const SimCityRecomp *instance,
    unsigned *selected_id);
int simcity_recomp_stock_world_new_city_pending(const SimCityRecomp *instance);
int simcity_recomp_stock_world_active(const SimCityRecomp *instance);
int simcity_recomp_stock_world_open_snapshot(SimCityRecomp *instance,
                                           const char *path, char *error, size_t error_capacity);
int simcity_recomp_stock_world_tile(const SimCityRecomp *instance,
                                  unsigned x, unsigned y, uint16_t *tile);
/* Copy the active World Map in row-major order on the guest owner thread.
   The caller owns the detached tile buffer; capacity is in tile words. */
int simcity_recomp_stock_world_copy_tiles(const SimCityRecomp *instance,
                                         uint16_t *tiles, size_t capacity);
typedef struct SimCityRecompStockWorldSample {
    uint32_t power_cycles, density_cycles, environment_cycles, crime_cycles, fire_cycles;
    uint32_t census_visits, census_order_errors, power_order_errors;
    uint32_t traffic_writes, traffic_west, traffic_east;
    int16_t growth;
    uint8_t traffic, land_value, pollution, density, crime, police, fire;
    uint32_t density_visits, density_written, pollution_written, crime_written;
} SimCityRecompStockWorldSample;
/* Observe the city-owned simulation at a map tile without changing its state. */
int simcity_recomp_stock_world_sample(const SimCityRecomp *instance,
    unsigned x, unsigned y, SimCityRecompStockWorldSample *sample);
/* Expanded-map snapshots are separate from ordinary stock snapshots. They
   restore the guest and the caller's entire World Map and in-flight work. */
int simcity_recomp_stock_world_snapshot_save(const SimCityRecomp *instance,
    const char *path, const uint16_t *tiles, size_t count,
    const SimCityRecompStockWorldPower *power, char *error, size_t error_capacity);
int simcity_recomp_stock_world_snapshot_load(SimCityRecomp *instance,
    const char *path, uint16_t *tiles, size_t count,
    SimCityRecompStockWorldPower *power, char *error, size_t error_capacity);
int simcity_recomp_render_current_frame(SimCityRecomp *instance,
                                        char *error,
                                        size_t error_capacity);
/* Preview a 240x200 grid of original SNES city words with the stock tiles,
   palette and HUD. The offsets are in pixels relative to the stock camera.
   This does not redirect original gameplay or persist the supplied map. */
int simcity_recomp_render_stock_world_preview(SimCityRecomp *instance,
    const uint16_t *tiles, size_t count, int offset_x, int offset_y);

const uint32_t *simcity_recomp_frame_bgra(const SimCityRecomp *instance);
uint32_t simcity_recomp_frame_width(const SimCityRecomp *instance);
int simcity_recomp_widescreen_enabled(const SimCityRecomp *instance);
int simcity_recomp_set_widescreen(SimCityRecomp *instance, int enabled,
                                  char *error, size_t error_capacity);
uint32_t simcity_recomp_current_frame(const SimCityRecomp *instance);
uint64_t simcity_recomp_instruction_count(const SimCityRecomp *instance);
uint64_t simcity_recomp_master_clock(const SimCityRecomp *instance);
int simcity_recomp_failed(const SimCityRecomp *instance);

/* Bounds-checked read of the native 128 KiB SNES WRAM image. This never
   modifies emulated state. */
int simcity_recomp_read_wram(const SimCityRecomp *instance,
                             uint32_t offset,
                             void *destination,
                             size_t length);

const char *simcity_recomp_last_error(const SimCityRecomp *instance);

/* PCM is produced only by the native S-SMP/S-DSP runtime contained in this
   static-recompilation instance. The host frontend owns playback. The deterministic core exposes no recording API; platform recorders must remain
   outside SNES state. Each returned frame contains interleaved stereo
   signed 16-bit samples at SIMCITY_RECOMP_AUDIO_SAMPLE_RATE. */
size_t simcity_recomp_audio_available(const SimCityRecomp *instance);
size_t simcity_recomp_audio_read(SimCityRecomp *instance,
                                 int16_t *interleaved_stereo,
                                 size_t frame_capacity);
size_t simcity_recomp_audio_discard(SimCityRecomp *instance);

/* Reports static S-SMP epoch coverage and fail-closed guard activity. This is
   diagnostic metadata only; it does not certify S-DSP waveform accuracy. */
int simcity_recomp_audio_static_status(const SimCityRecomp *instance,
                                       SimCityRecompAudioStaticStatus *status);

/* Reports the fail-closed S-CPU/APUIO uploader and initial ARAM epoch receipt. */
int simcity_recomp_audio_transport_status(const SimCityRecomp *instance,
                                          SimCityRecompAudioTransportStatus *status);


/* Current snapshots store direct static-core runtime and audio state plus the exact
   controller history needed for continued deterministic saves. Legacy version 10
   replay snapshots are still accepted, deterministically replayed once, and upgraded
   in place to the direct version 11 format. */
int simcity_recomp_snapshot_save(const SimCityRecomp *instance,
                                 const char *path,
                                 char *error, size_t error_capacity);
/* Capture the same on-disk bytes without file I/O. Call on the owning
   simulation thread at a frame boundary, not concurrently with core
   operations. On success the caller owns a detached buffer that can be
   written on another thread, then freed by simcity_recomp_snapshot_release().
   Both output pointers are required; failure clears the outputs. */
int simcity_recomp_snapshot_capture(const SimCityRecomp *instance,
                                    void **bytes, size_t *size,
                                    char *error, size_t error_capacity);
/* Copy the canonical snapshot into an unsealed draft on the game thread.
   The caller may transfer ownership to a writer thread. Call seal exactly
   once before publishing or writing it, with no concurrent byte readers.
   A draft cannot be loaded as a snapshot. Release it with the same API. */
int simcity_recomp_snapshot_capture_deferred(const SimCityRecomp *instance,
    void **bytes, size_t *size, char *error, size_t error_capacity);
int simcity_recomp_snapshot_seal(void *bytes, size_t size);
void simcity_recomp_snapshot_release(void *bytes);
int simcity_recomp_snapshot_load(SimCityRecomp *instance,
                                 const char *path,
                                 char *error, size_t error_capacity);
uint32_t simcity_recomp_snapshot_history_frames(const SimCityRecomp *instance);

/* Battery-backed cartridge SRAM. Reset preserves this memory, matching a real
   SNES reset. Frontends persist the exact 32 KiB image between processes. */
/* World Map battery storage is separate from snapshots and ordinary SRAM.
   Enable/import at cold boot, then export only after a committed native save. */
size_t simcity_recomp_world_battery_size(void);
int simcity_recomp_world_battery_enable(SimCityRecomp *instance);
int simcity_recomp_world_battery_import(SimCityRecomp *instance, const void *data, size_t size);
int simcity_recomp_world_battery_export(const SimCityRecomp *instance, void *data, size_t size);
int simcity_recomp_world_battery_dirty(const SimCityRecomp *instance);
void simcity_recomp_world_battery_mark_clean(SimCityRecomp *instance);
/* Host-only commit revision. A completed async write can clear dirty only
   if no newer native commit has happened on this instance. */
uint64_t simcity_recomp_world_battery_revision(const SimCityRecomp *instance);
void simcity_recomp_world_battery_acknowledge(SimCityRecomp *instance, uint64_t revision);

size_t simcity_recomp_sram_size(void);
int simcity_recomp_sram_copy(const SimCityRecomp *instance,
                             void *destination, size_t capacity);
int simcity_recomp_sram_load(SimCityRecomp *instance,
                             const void *source, size_t size,
                             char *error, size_t error_capacity);
int simcity_recomp_sram_dirty(const SimCityRecomp *instance);
void simcity_recomp_sram_mark_clean(SimCityRecomp *instance);

/* Loads a build-matched raw runtime state for paused rendering. This is not a
   user save format and must not be resumed as an audio-continuous game. */
int simcity_recomp_load_diagnostic_runtime_state(
    SimCityRecomp *instance,const char *path,char *error,size_t error_capacity);

int simcity_recomp_audio_overflowed(const SimCityRecomp *instance);
uint64_t simcity_recomp_audio_dropped_frames(
    const SimCityRecomp *instance);
void simcity_recomp_audio_clear_overflow(SimCityRecomp *instance);

#ifdef __cplusplus
}
#endif

#endif
