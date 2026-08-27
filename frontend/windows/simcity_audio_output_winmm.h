#ifndef SIMCITY_AUDIO_OUTPUT_WINMM_H
#define SIMCITY_AUDIO_OUTPUT_WINMM_H

#if !defined(_WIN32)
#error This audio backend is for Windows only.
#endif

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <mmsystem.h>

#include "simcity_app_core.h"
#include "simcity_audio_recorder_win32.h"

#include <stddef.h>
#include <stdint.h>

#define SIMCITY_AUDIO_DEVICE_NAME_CAPACITY 128u
#define SIMCITY_AUDIO_BUFFER_COUNT 4u

typedef struct SimCityAudioSettings {
    int enabled;
    int volume_percent;
    int latency_ms;
    wchar_t device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
} SimCityAudioSettings;

typedef struct SimCityAudioOutput {
    HWAVEOUT handle;
    WAVEHDR headers[SIMCITY_AUDIO_BUFFER_COUNT];
    int16_t *sample_storage;
    int16_t *pending_storage;
    uint32_t buffer_frames;
    uint32_t pending_frames;
    uint32_t queued_buffers;
    uint32_t fade_frames_remaining;
    int priming;
    int paused;
    int volume_percent;
    wchar_t opened_device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
} SimCityAudioOutput;

void simcity_audio_settings_defaults(SimCityAudioSettings *settings);
void simcity_audio_settings_load(SimCityAudioSettings *settings,
                                 const wchar_t *ini_path);
void simcity_audio_settings_save(const SimCityAudioSettings *settings,
                                 const wchar_t *ini_path);

UINT simcity_audio_device_count(void);
int simcity_audio_device_name(UINT device_index,
                              wchar_t *name,
                              size_t name_capacity);

void simcity_audio_output_initialize(SimCityAudioOutput *output);
int simcity_audio_output_open(SimCityAudioOutput *output,
                              const SimCityAudioSettings *settings,
                              wchar_t *error,
                              size_t error_capacity);
void simcity_audio_output_close(SimCityAudioOutput *output);
void simcity_audio_output_pause(SimCityAudioOutput *output);
void simcity_audio_output_resume(SimCityAudioOutput *output);
void simcity_audio_output_flush(SimCityAudioOutput *output);
int simcity_audio_output_is_open(const SimCityAudioOutput *output);

/* Pulls only native PCM from the isolated static-recompilation core. */
void simcity_audio_output_pump(SimCityAudioOutput *output,
                               SimCityAudioRecorderWin32 *recorder,
                               SimCityRecomp *game);

#endif
