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
typedef void (*SimCityRecompAudioProgressCallback)(
    SimCityRecomp *instance, void *opaque);

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

/* Headless frame advance. CPU, PPU timing, S-SMP, S-DSP, controller
   history, and all SNES state advance identically, but the expensive host
   frame conversion is deferred. Call simcity_recomp_render_current_frame()
   when the current frame must be displayed. */
int simcity_recomp_advance_headless(SimCityRecomp *instance,
                                    uint16_t input_mask,
                                    uint32_t frame_count,
                                    SimCityRecompFrameResult *result);
int simcity_recomp_render_current_frame(SimCityRecomp *instance,
                                        char *error,
                                        size_t error_capacity);

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
int simcity_recomp_snapshot_load(SimCityRecomp *instance,
                                 const char *path,
                                 char *error, size_t error_capacity);
uint32_t simcity_recomp_snapshot_history_frames(const SimCityRecomp *instance);

/* Battery-backed cartridge SRAM. Reset preserves this memory, matching a real
   SNES reset. Frontends persist the exact 32 KiB image between processes. */
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
