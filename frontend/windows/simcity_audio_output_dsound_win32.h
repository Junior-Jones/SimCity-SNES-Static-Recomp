#ifndef SIMCITY_AUDIO_OUTPUT_DSOUND_WIN32_H
#define SIMCITY_AUDIO_OUTPUT_DSOUND_WIN32_H

#if !defined(_WIN32)
#error This audio backend is for Windows only.
#endif

#include <windows.h>
#include <mmsystem.h>
#include <dsound.h>
#include <stdint.h>

#include "simcity_app_core.h"
#include "simcity_audio_resampler.h"

#define SIMCITY_AUDIO_DEVICE_NAME_CAPACITY 128u
#define SIMCITY_AUDIO_QUEUE_HISTORY_CAPACITY 60u

#define SIMCITY_AUDIO_MIN_LATENCY_MS 0
#define SIMCITY_AUDIO_MAX_LATENCY_MS 40
#define SIMCITY_AUDIO_MIN_SAFETY_BUFFER_MS 0
#define SIMCITY_AUDIO_MAX_SAFETY_BUFFER_MS 100
#define SIMCITY_AUDIO_MIN_RING_BUFFER_MS 50
#define SIMCITY_AUDIO_MAX_RING_BUFFER_MS 1000
#define SIMCITY_AUDIO_MIN_RECOVERY_MS 10
#define SIMCITY_AUDIO_MAX_RECOVERY_MS 500
#define SIMCITY_AUDIO_MIN_DRIFT_TOLERANCE_MS 0
#define SIMCITY_AUDIO_MAX_DRIFT_TOLERANCE_MS 20
#define SIMCITY_AUDIO_MIN_RATE_ADJUSTMENT_PPM 0
#define SIMCITY_AUDIO_MAX_RATE_ADJUSTMENT_PPM 10000
#define SIMCITY_AUDIO_MIN_AVERAGING_FRAMES 1
#define SIMCITY_AUDIO_MAX_AVERAGING_FRAMES 60
#define SIMCITY_AUDIO_MIN_FADE_MS 0
#define SIMCITY_AUDIO_MAX_FADE_MS 100

typedef struct SimCityAudioSettings {
    int enabled;
    int volume_percent;
    int latency_enabled;
    int latency_ms;
    int output_sample_rate;
    int resampler_mode;
    int safety_buffer_ms;
    int ring_buffer_ms;
    int drift_correction_enabled;
    int drift_tolerance_ms;
    int max_rate_adjustment_ppm;
    int averaging_frames;
    int integral_correction_enabled;
    int recovery_enabled;
    int recovery_threshold_ms;
    int realign_on_underrun;
    int clear_on_pause;
    int resume_fade_ms;
    wchar_t device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
} SimCityAudioSettings;

typedef struct SimCityAudioDiagnostics {
    uint64_t native_frames_queued;
    uint64_t underruns;
    uint64_t queue_failures;
    uint64_t queue_recoveries;
    uint64_t stale_frames_dropped;
    uint64_t device_reopens;
    uint32_t queue_depth_frames;
    uint32_t safe_queue_depth_frames;
    uint32_t peak_queue_depth_frames;
    uint32_t target_latency_frames;
    float playback_ratio;
    float average_latency_ms;
    int device_sample_rate;
} SimCityAudioDiagnostics;

typedef struct SimCityAudioOutput {
    LPDIRECTSOUND8 direct_sound;
    LPDIRECTSOUNDBUFFER primary_buffer;
    LPDIRECTSOUNDBUFFER8 secondary_buffer;
    SimCityAudioHermiteResampler resampler;
    DWORD buffer_size_bytes;
    DWORD write_offset;
    DWORD previous_play_cursor;
    uint64_t total_bytes_written;
    uint64_t total_bytes_played;
    uint32_t target_latency_frames;
    uint32_t queue_history[SIMCITY_AUDIO_QUEUE_HISTORY_CAPACITY];
    uint32_t queue_history_index;
    uint32_t queue_history_count;
    int32_t under_target;
    int paused;
    int playing;
    int priming;
    int volume_percent;
    int latency_enabled;
    int device_sample_rate;
    int drift_correction_enabled;
    int drift_tolerance_ms;
    int max_rate_adjustment_ppm;
    int averaging_frames;
    int integral_correction_enabled;
    int recovery_enabled;
    int recovery_threshold_ms;
    int realign_on_underrun;
    int clear_on_pause;
    uint32_t fade_frames_remaining;
    uint32_t fade_frames_total;
    int starved_last_pump;
    double playback_ratio;
    wchar_t opened_device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
    SimCityAudioDiagnostics diagnostics;
} SimCityAudioOutput;

void simcity_audio_settings_defaults(SimCityAudioSettings *settings);
void simcity_audio_settings_load(SimCityAudioSettings *settings,
                                 const wchar_t *ini_path);
void simcity_audio_settings_save(const SimCityAudioSettings *settings,
                                 const wchar_t *ini_path);

UINT simcity_audio_device_count(void);
int simcity_audio_device_name(UINT device_index, wchar_t *name,
                             size_t name_capacity);

void simcity_audio_output_initialize(SimCityAudioOutput *output);
int simcity_audio_output_open(SimCityAudioOutput *output,
                             const SimCityAudioSettings *settings,
                             HWND owner, wchar_t *error,
                             size_t error_capacity);
void simcity_audio_output_close(SimCityAudioOutput *output);
void simcity_audio_output_pause(SimCityAudioOutput *output);
void simcity_audio_output_resume(SimCityAudioOutput *output);
void simcity_audio_output_flush(SimCityAudioOutput *output);
int simcity_audio_output_is_open(const SimCityAudioOutput *output);
int32_t simcity_audio_output_pacing_ppm(
    const SimCityAudioOutput *output);
void simcity_audio_output_get_diagnostics(
    const SimCityAudioOutput *output,
    SimCityAudioDiagnostics *diagnostics);

/* Recording remains native 32,040 Hz PCM; only speaker output is resampled. */
void simcity_audio_output_pump(SimCityAudioOutput *output,
                              SimCityRecomp *game);
/* Drain a partial in-frame DSP batch without running end-of-frame latency
   control more than once per emulated frame. */
void simcity_audio_output_pump_progress(SimCityAudioOutput *output,
                                       SimCityRecomp *game);

#endif
