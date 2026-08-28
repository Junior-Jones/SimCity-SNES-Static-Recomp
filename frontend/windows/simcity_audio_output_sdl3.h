#ifndef SIMCITY_AUDIO_OUTPUT_SDL3_H
#define SIMCITY_AUDIO_OUTPUT_SDL3_H

#if !defined(_WIN32)
#error This audio backend is for Windows only.
#endif
#include <windows.h>
#include <stdint.h>

#include <SDL3/SDL_audio.h>

#include "simcity_app_core.h"

#define SIMCITY_AUDIO_DEVICE_NAME_CAPACITY 128u

typedef struct SimCityAudioSettings {
    int enabled;
    int volume_percent;
    int latency_ms;
    wchar_t device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
} SimCityAudioSettings;

typedef struct SimCityAudioDiagnostics {
    uint64_t native_frames_queued;
    uint64_t underruns;
    uint64_t queue_failures;
    uint64_t device_reopens;
    uint32_t queue_depth_frames;
    uint32_t target_latency_frames;
    float playback_ratio;
    int device_sample_rate;
} SimCityAudioDiagnostics;

typedef struct SimCityAudioOutput {
    SDL_AudioStream *stream;
    uint32_t target_latency_frames;
    uint32_t fade_frames_remaining;
    int paused;
    int priming;
    int volume_percent;
    int audio_subsystem_initialized;
    int starved_last_pump;
    int preserve_on_resume;
    float playback_ratio;
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
                              wchar_t *error, size_t error_capacity);
void simcity_audio_output_close(SimCityAudioOutput *output);
void simcity_audio_output_pause(SimCityAudioOutput *output);
void simcity_audio_output_resume(SimCityAudioOutput *output);
void simcity_audio_output_flush(SimCityAudioOutput *output);
int simcity_audio_output_is_open(const SimCityAudioOutput *output);
void simcity_audio_output_get_diagnostics(
    const SimCityAudioOutput *output, SimCityAudioDiagnostics *diagnostics);

/* Recording remains native 32,040 Hz PCM; only speaker output is resampled. */
void simcity_audio_output_pump(SimCityAudioOutput *output,
                               SimCityRecomp *game);

#endif
