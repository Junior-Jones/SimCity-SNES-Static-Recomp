#if !defined(_WIN32)
#error This audio backend is for Windows only.
#endif

#include "simcity_audio_output_sdl3.h"

#include <SDL3/SDL.h>

#include <limits.h>
#include <string.h>
#include <wchar.h>

#define AUDIO_INI_SECTION L"Audio"
#define AUDIO_DEFAULT_DEVICE_LABEL L"Default Windows audio device"
#define AUDIO_MIN_LATENCY_MS 20
#define AUDIO_MAX_LATENCY_MS 250
#define AUDIO_DEFAULT_LATENCY_MS 60
#define AUDIO_RESUME_FADE_MS 10u
#define AUDIO_DRIFT_TOLERANCE_MS 3u
#define AUDIO_MAX_RATE_ADJUSTMENT 0.0025f

static uint32_t queued_native_frames(SimCityAudioOutput *output);

static void copy_wide(wchar_t *destination, size_t capacity,
                      const wchar_t *source) {
    if (!destination || capacity == 0u) return;
    if (!source) source = L"";
    wcsncpy(destination, source, capacity - 1u);
    destination[capacity - 1u] = L'\0';
}

static void utf8_to_wide(const char *text, wchar_t *wide, size_t capacity) {
    int converted;
    if (!wide || capacity == 0u) return;
    wide[0] = L'\0';
    if (!text || !text[0]) return;
    converted = MultiByteToWideChar(CP_UTF8, 0, text, -1, wide,
                                    (int)capacity);
    if (converted <= 0) wide[0] = L'\0';
    wide[capacity - 1u] = L'\0';
}

static void set_sdl_error(wchar_t *error, size_t capacity,
                          const wchar_t *prefix) {
    wchar_t detail[256];
    wchar_t message[384];
    if (!error || capacity == 0u) return;
    utf8_to_wide(SDL_GetError(), detail,
                 sizeof(detail) / sizeof(detail[0]));
    if (!detail[0]) copy_wide(detail, 256u, L"Unknown SDL audio error");
    (void)_snwprintf(message, sizeof(message) / sizeof(message[0]),
                     L"%s: %s", prefix ? prefix : L"Audio error", detail);
    message[(sizeof(message) / sizeof(message[0])) - 1u] = L'\0';
    copy_wide(error, capacity, message);
}

void simcity_audio_settings_defaults(SimCityAudioSettings *settings) {
    if (!settings) return;
    memset(settings, 0, sizeof(*settings));
    settings->enabled = 1;
    settings->volume_percent = 50;
    settings->latency_ms = AUDIO_DEFAULT_LATENCY_MS;
}

void simcity_audio_settings_load(SimCityAudioSettings *settings,
                                 const wchar_t *ini_path) {
    if (!settings) return;
    simcity_audio_settings_defaults(settings);
    if (!ini_path || !ini_path[0]) return;
    settings->enabled = GetPrivateProfileIntW(
        AUDIO_INI_SECTION, L"Enabled", settings->enabled, ini_path) != 0;
    settings->volume_percent = GetPrivateProfileIntW(
        AUDIO_INI_SECTION, L"VolumePercent", settings->volume_percent,
        ini_path);
    settings->latency_ms = GetPrivateProfileIntW(
        AUDIO_INI_SECTION, L"LatencyMs", settings->latency_ms, ini_path);
    if (settings->volume_percent < 0) settings->volume_percent = 0;
    if (settings->volume_percent > 100) settings->volume_percent = 100;
    if (settings->latency_ms < AUDIO_MIN_LATENCY_MS)
        settings->latency_ms = AUDIO_MIN_LATENCY_MS;
    if (settings->latency_ms > AUDIO_MAX_LATENCY_MS)
        settings->latency_ms = AUDIO_MAX_LATENCY_MS;
    (void)GetPrivateProfileStringW(
        AUDIO_INI_SECTION, L"DeviceName", L"", settings->device_name,
        (DWORD)SIMCITY_AUDIO_DEVICE_NAME_CAPACITY, ini_path);
}

void simcity_audio_settings_save(const SimCityAudioSettings *settings,
                                 const wchar_t *ini_path) {
    wchar_t number[32];
    if (!settings || !ini_path || !ini_path[0]) return;
    (void)WritePrivateProfileStringW(
        AUDIO_INI_SECTION, L"Enabled", settings->enabled ? L"1" : L"0",
        ini_path);
    (void)_snwprintf(number, 32u, L"%d", settings->volume_percent);
    number[31] = L'\0';
    (void)WritePrivateProfileStringW(
        AUDIO_INI_SECTION, L"VolumePercent", number, ini_path);
    (void)_snwprintf(number, 32u, L"%d", settings->latency_ms);
    number[31] = L'\0';
    (void)WritePrivateProfileStringW(
        AUDIO_INI_SECTION, L"LatencyMs", number, ini_path);
    (void)WritePrivateProfileStringW(
        AUDIO_INI_SECTION, L"DeviceName", settings->device_name, ini_path);
}

static int ensure_audio_subsystem(void) {
    return SDL_WasInit(SDL_INIT_AUDIO) != 0u ||
           SDL_InitSubSystem(SDL_INIT_AUDIO);
}

UINT simcity_audio_device_count(void) {
    SDL_AudioDeviceID *devices;
    int count = 0;
    if (!ensure_audio_subsystem()) return 0u;
    devices = SDL_GetAudioPlaybackDevices(&count);
    SDL_free(devices);
    return count > 0 ? (UINT)count : 0u;
}

int simcity_audio_device_name(UINT device_index, wchar_t *name,
                              size_t name_capacity) {
    SDL_AudioDeviceID *devices;
    const char *device_name;
    int count = 0;
    int result = 0;
    if (!name || name_capacity == 0u || !ensure_audio_subsystem()) return 0;
    name[0] = L'\0';
    devices = SDL_GetAudioPlaybackDevices(&count);
    if (!devices || device_index >= (UINT)count) {
        SDL_free(devices);
        return 0;
    }
    device_name = SDL_GetAudioDeviceName(devices[device_index]);
    if (device_name) {
        utf8_to_wide(device_name, name, name_capacity);
        result = name[0] != L'\0';
    }
    SDL_free(devices);
    return result;
}

static SDL_AudioDeviceID resolve_device(const wchar_t *requested,
                                        wchar_t *resolved,
                                        size_t resolved_capacity) {
    SDL_AudioDeviceID selected = SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK;
    SDL_AudioDeviceID *devices;
    int count = 0;
    int index;
    copy_wide(resolved, resolved_capacity, AUDIO_DEFAULT_DEVICE_LABEL);
    if (!requested || !requested[0]) return selected;
    devices = SDL_GetAudioPlaybackDevices(&count);
    for (index = 0; devices && index < count; ++index) {
        wchar_t candidate[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
        utf8_to_wide(SDL_GetAudioDeviceName(devices[index]), candidate,
                     sizeof(candidate) / sizeof(candidate[0]));
        if (candidate[0] && wcscmp(candidate, requested) == 0) {
            selected = devices[index];
            copy_wide(resolved, resolved_capacity, candidate);
            break;
        }
    }
    SDL_free(devices);
    return selected;
}

void simcity_audio_output_initialize(SimCityAudioOutput *output) {
    if (output) memset(output, 0, sizeof(*output));
}

int simcity_audio_output_open(SimCityAudioOutput *output,
                              const SimCityAudioSettings *settings,
                              wchar_t *error, size_t error_capacity) {
    SDL_AudioSpec source_spec;
    SDL_AudioSpec device_spec;
    SDL_AudioDeviceID device;
    int sample_frames = 0;
    if (error && error_capacity) error[0] = L'\0';
    if (!output || !settings) return 0;
    simcity_audio_output_close(output);
    output->volume_percent = settings->volume_percent;
    if (!settings->enabled) return 1;
    if (!SDL_InitSubSystem(SDL_INIT_AUDIO)) {
        set_sdl_error(error, error_capacity,
                      L"Unable to initialize SDL audio");
        return 0;
    }
    output->audio_subsystem_initialized = 1;
    device = resolve_device(settings->device_name,
                            output->opened_device_name,
                            sizeof(output->opened_device_name) /
                            sizeof(output->opened_device_name[0]));
    SDL_zero(source_spec);
    source_spec.format = SDL_AUDIO_S16;
    source_spec.channels = SIMCITY_RECOMP_AUDIO_CHANNELS;
    source_spec.freq = SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE;
    output->stream = SDL_OpenAudioDeviceStream(device, &source_spec,
                                                NULL, NULL);
    if (!output->stream) {
        set_sdl_error(error, error_capacity,
                      L"Unable to open the selected audio device");
        simcity_audio_output_close(output);
        return 0;
    }
    output->target_latency_frames =
        (uint32_t)(((uint64_t)SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE *
                    (uint64_t)settings->latency_ms) / 1000u);
    output->playback_ratio = 1.0f;
    output->paused = 1;
    output->priming = 1;
    (void)SDL_SetAudioStreamGain(output->stream,
        (float)settings->volume_percent / 100.0f);
    if (SDL_GetAudioDeviceFormat(SDL_GetAudioStreamDevice(output->stream),
                                 &device_spec, &sample_frames))
        output->diagnostics.device_sample_rate = device_spec.freq;
    output->diagnostics.target_latency_frames =
        output->target_latency_frames;
    output->diagnostics.playback_ratio = 1.0f;
    return 1;
}

void simcity_audio_output_flush(SimCityAudioOutput *output) {
    if (!output || !output->stream) return;
    (void)SDL_ClearAudioStream(output->stream);
    output->priming = 1;
    output->starved_last_pump = 0;
    output->preserve_on_resume = 0;
    output->diagnostics.queue_depth_frames = 0u;
}

void simcity_audio_output_close(SimCityAudioOutput *output) {
    if (!output) return;
    if (output->stream) SDL_DestroyAudioStream(output->stream);
    if (output->audio_subsystem_initialized)
        SDL_QuitSubSystem(SDL_INIT_AUDIO);
    memset(output, 0, sizeof(*output));
}

void simcity_audio_output_pause(SimCityAudioOutput *output) {
    if (!output || !output->stream || output->paused) return;
    if (SDL_PauseAudioStreamDevice(output->stream)) {
        output->paused = 1;
        output->preserve_on_resume = 1;
        output->diagnostics.queue_depth_frames =
            queued_native_frames(output);
    }
}

void simcity_audio_output_resume(SimCityAudioOutput *output) {
    if (!output || !output->stream || !output->paused) return;
    if (output->preserve_on_resume) {
        output->preserve_on_resume = 0;
        output->paused = 0;
        output->diagnostics.queue_depth_frames =
            queued_native_frames(output);
        if (output->diagnostics.queue_depth_frames > 0u) {
            if (SDL_ResumeAudioStreamDevice(output->stream))
                output->priming = 0;
        } else {
            output->priming = 1;
        }
        return;
    }
    simcity_audio_output_flush(output);
    output->fade_frames_remaining =
        (SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE * AUDIO_RESUME_FADE_MS) / 1000u;
    output->paused = 0;
    output->priming = 1;
}

int simcity_audio_output_is_open(const SimCityAudioOutput *output) {
    return output && output->stream != NULL;
}

static void apply_resume_fade(SimCityAudioOutput *output, int16_t *samples,
                              size_t frame_count) {
    size_t frame;
    const uint32_t total =
        (SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE * AUDIO_RESUME_FADE_MS) / 1000u;
    if (!output || !samples || output->fade_frames_remaining == 0u ||
        total == 0u) return;
    for (frame = 0u; frame < frame_count &&
         output->fade_frames_remaining > 0u; ++frame) {
        uint32_t progressed = total - output->fade_frames_remaining;
        unsigned channel;
        for (channel = 0u; channel < SIMCITY_RECOMP_AUDIO_CHANNELS; ++channel) {
            size_t sample = frame * SIMCITY_RECOMP_AUDIO_CHANNELS + channel;
            samples[sample] = (int16_t)(((int32_t)samples[sample] *
                (int32_t)progressed) / (int32_t)total);
        }
        output->fade_frames_remaining--;
    }
}

static uint32_t queued_native_frames(SimCityAudioOutput *output) {
    int bytes;
    if (!output || !output->stream) return 0u;
    bytes = SDL_GetAudioStreamQueued(output->stream);
    if (bytes <= 0) return 0u;
    return (uint32_t)bytes /
        (SIMCITY_RECOMP_AUDIO_CHANNELS * (uint32_t)sizeof(int16_t));
}

static void update_drift_correction(SimCityAudioOutput *output) {
    uint32_t queue_frames;
    uint32_t tolerance_frames;
    float requested = 1.0f;
    if (!output || !output->stream || output->priming || output->paused) return;
    queue_frames = queued_native_frames(output);
    tolerance_frames =
        (SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE * AUDIO_DRIFT_TOLERANCE_MS) /
        1000u;
    if (queue_frames > output->target_latency_frames + tolerance_frames)
        requested = 1.0f + AUDIO_MAX_RATE_ADJUSTMENT;
    else if (queue_frames + tolerance_frames < output->target_latency_frames)
        requested = 1.0f - AUDIO_MAX_RATE_ADJUSTMENT;
    output->playback_ratio += (requested - output->playback_ratio) * 0.05f;
    if (output->playback_ratio < 1.0f - AUDIO_MAX_RATE_ADJUSTMENT)
        output->playback_ratio = 1.0f - AUDIO_MAX_RATE_ADJUSTMENT;
    if (output->playback_ratio > 1.0f + AUDIO_MAX_RATE_ADJUSTMENT)
        output->playback_ratio = 1.0f + AUDIO_MAX_RATE_ADJUSTMENT;
    (void)SDL_SetAudioStreamFrequencyRatio(output->stream,
                                           output->playback_ratio);
    output->diagnostics.playback_ratio = output->playback_ratio;
}

void simcity_audio_output_pump(SimCityAudioOutput *output,
                               SimCityRecomp *game) {
    int16_t staging[4096u * SIMCITY_RECOMP_AUDIO_CHANNELS];
    if (output && output->stream && !output->paused && !output->priming) {
        uint32_t queue_before = queued_native_frames(output);
        int starved = queue_before == 0u;
        if (starved && !output->starved_last_pump)
            output->diagnostics.underruns++;
        output->starved_last_pump = starved;
    }
    if (!game) return;
    while (simcity_recomp_audio_available(game) > 0u) {
        size_t available = simcity_recomp_audio_available(game);
        size_t request = available > 4096u ? 4096u : available;
        size_t frames = simcity_recomp_audio_read(game, staging, request);
        if (!frames) break;
        if (output && output->stream) {
            apply_resume_fade(output, staging, frames);
            if (!SDL_PutAudioStreamData(output->stream, staging,
                    (int)(frames * SIMCITY_RECOMP_AUDIO_CHANNELS *
                          sizeof(int16_t)))) {
                output->diagnostics.queue_failures++;
            } else {
                output->diagnostics.native_frames_queued += frames;
            }
        }
    }
    if (!output || !output->stream) return;
    output->diagnostics.queue_depth_frames = queued_native_frames(output);
    if (output->priming && !output->paused &&
        output->diagnostics.queue_depth_frames >=
            output->target_latency_frames / 2u) {
        if (SDL_ResumeAudioStreamDevice(output->stream))
            output->priming = 0;
    }
    if (!output->paused && !output->priming) {
        if (output->diagnostics.queue_depth_frames > 0u)
            output->starved_last_pump = 0;
        update_drift_correction(output);
    }
}

void simcity_audio_output_get_diagnostics(
    const SimCityAudioOutput *output, SimCityAudioDiagnostics *diagnostics) {
    if (!diagnostics) return;
    if (!output) memset(diagnostics, 0, sizeof(*diagnostics));
    else *diagnostics = output->diagnostics;
}
