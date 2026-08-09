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

#include "audio_output_winmm.h"

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#define AUDIO_INI_SECTION L"Audio"
#define AUDIO_DEFAULT_DEVICE_LABEL L"Default Windows audio device"
#define AUDIO_MIN_LATENCY_MS 40
#define AUDIO_MAX_LATENCY_MS 250
#define AUDIO_MIN_BUFFER_FRAMES 128u
#define AUDIO_MAX_BUFFER_FRAMES 4096u
#define AUDIO_PREROLL_BUFFERS SIMCITY_AUDIO_BUFFER_COUNT
#define AUDIO_RESUME_FADE_MS 10u

static void copy_wide(wchar_t *destination, size_t capacity,
                      const wchar_t *source) {
    if (!destination || capacity == 0u) return;
    if (!source) source = L"";
    wcsncpy(destination, source, capacity - 1u);
    destination[capacity - 1u] = L'\0';
}

static void set_mm_error(wchar_t *error, size_t capacity,
                         const wchar_t *prefix, MMRESULT result) {
    wchar_t message[256];
    wchar_t detail[192];
    if (!error || capacity == 0u) return;
    detail[0] = L'\0';
    if (waveOutGetErrorTextW(result, detail,
                             (UINT)(sizeof(detail) / sizeof(detail[0]))) !=
        MMSYSERR_NOERROR) {
        copy_wide(detail, sizeof(detail) / sizeof(detail[0]),
                  L"Unknown Windows multimedia error");
    }
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
    settings->latency_ms = 80;
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
    (void)_snwprintf(number, sizeof(number) / sizeof(number[0]),
                     L"%d", settings->volume_percent);
    number[(sizeof(number) / sizeof(number[0])) - 1u] = L'\0';
    (void)WritePrivateProfileStringW(
        AUDIO_INI_SECTION, L"VolumePercent", number, ini_path);
    (void)_snwprintf(number, sizeof(number) / sizeof(number[0]),
                     L"%d", settings->latency_ms);
    number[(sizeof(number) / sizeof(number[0])) - 1u] = L'\0';
    (void)WritePrivateProfileStringW(
        AUDIO_INI_SECTION, L"LatencyMs", number, ini_path);
    (void)WritePrivateProfileStringW(
        AUDIO_INI_SECTION, L"DeviceName", settings->device_name, ini_path);
}

UINT simcity_audio_device_count(void) {
    return waveOutGetNumDevs();
}

int simcity_audio_device_name(UINT device_index,
                              wchar_t *name,
                              size_t name_capacity) {
    WAVEOUTCAPSW caps;
    MMRESULT result;
    if (!name || name_capacity == 0u) return 0;
    name[0] = L'\0';
    memset(&caps, 0, sizeof(caps));
    result = waveOutGetDevCapsW((UINT_PTR)device_index, &caps, sizeof(caps));
    if (result != MMSYSERR_NOERROR) return 0;
    copy_wide(name, name_capacity, caps.szPname);
    return 1;
}

static UINT resolve_device_id(const wchar_t *device_name,
                              wchar_t *resolved_name,
                              size_t resolved_capacity) {
    UINT index;
    UINT count = simcity_audio_device_count();
    if (!device_name || !device_name[0]) {
        copy_wide(resolved_name, resolved_capacity, AUDIO_DEFAULT_DEVICE_LABEL);
        return WAVE_MAPPER;
    }
    for (index = 0u; index < count; ++index) {
        wchar_t candidate[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
        if (simcity_audio_device_name(index, candidate,
                                      sizeof(candidate) /
                                      sizeof(candidate[0])) &&
            wcscmp(candidate, device_name) == 0) {
            copy_wide(resolved_name, resolved_capacity, candidate);
            return index;
        }
    }
    copy_wide(resolved_name, resolved_capacity, AUDIO_DEFAULT_DEVICE_LABEL);
    return WAVE_MAPPER;
}

void simcity_audio_output_initialize(SimCityAudioOutput *output) {
    if (!output) return;
    memset(output, 0, sizeof(*output));
}

static void release_finished_headers(SimCityAudioOutput *output) {
    unsigned index;
    if (!output || !output->handle) return;
    for (index = 0u; index < SIMCITY_AUDIO_BUFFER_COUNT; ++index) {
        WAVEHDR *header = &output->headers[index];
        if ((header->dwFlags & WHDR_PREPARED) != 0u &&
            (header->dwFlags & WHDR_DONE) != 0u) {
            if (waveOutUnprepareHeader(output->handle, header,
                                       sizeof(*header)) == MMSYSERR_NOERROR &&
                output->queued_buffers > 0u) {
                output->queued_buffers--;
            }
        }
    }
}

static WAVEHDR *find_free_header(SimCityAudioOutput *output) {
    unsigned index;
    if (!output) return NULL;
    for (index = 0u; index < SIMCITY_AUDIO_BUFFER_COUNT; ++index) {
        if ((output->headers[index].dwFlags & WHDR_PREPARED) == 0u)
            return &output->headers[index];
    }
    return NULL;
}

int simcity_audio_output_open(SimCityAudioOutput *output,
                              const SimCityAudioSettings *settings,
                              wchar_t *error,
                              size_t error_capacity) {
    WAVEFORMATEX format;
    UINT device_id;
    MMRESULT result;
    uint64_t requested_frames;
    unsigned index;

    if (error && error_capacity) error[0] = L'\0';
    if (!output || !settings) return 0;
    simcity_audio_output_close(output);
    output->volume_percent = settings->volume_percent;
    if (!settings->enabled) return 1;

    requested_frames =
        ((uint64_t)SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE *
         (uint64_t)settings->latency_ms) /
        (1000u * SIMCITY_AUDIO_BUFFER_COUNT);
    if (requested_frames < AUDIO_MIN_BUFFER_FRAMES)
        requested_frames = AUDIO_MIN_BUFFER_FRAMES;
    if (requested_frames > AUDIO_MAX_BUFFER_FRAMES)
        requested_frames = AUDIO_MAX_BUFFER_FRAMES;
    output->buffer_frames = (uint32_t)requested_frames;

    output->sample_storage = (int16_t *)calloc(
        (size_t)SIMCITY_AUDIO_BUFFER_COUNT * output->buffer_frames *
        SIMCITY_RECOMP_AUDIO_CHANNELS, sizeof(int16_t));
    if (!output->sample_storage) {
        copy_wide(error, error_capacity,
                  L"Unable to allocate the Windows audio buffers.");
        simcity_audio_output_close(output);
        return 0;
    }
    output->pending_storage = (int16_t *)calloc(
        (size_t)output->buffer_frames * SIMCITY_RECOMP_AUDIO_CHANNELS,
        sizeof(int16_t));
    if (!output->pending_storage) {
        copy_wide(error, error_capacity,
                  L"Unable to allocate the Windows audio staging buffer.");
        simcity_audio_output_close(output);
        return 0;
    }

    memset(&format, 0, sizeof(format));
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels = SIMCITY_RECOMP_AUDIO_CHANNELS;
    format.nSamplesPerSec = SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE;
    format.wBitsPerSample = SIMCITY_RECOMP_AUDIO_BITS_PER_SAMPLE;
    format.nBlockAlign = (WORD)(format.nChannels *
                         (format.wBitsPerSample / 8u));
    format.nAvgBytesPerSec = format.nSamplesPerSec * format.nBlockAlign;

    device_id = resolve_device_id(settings->device_name,
                                  output->opened_device_name,
                                  sizeof(output->opened_device_name) /
                                  sizeof(output->opened_device_name[0]));
    result = waveOutOpen(&output->handle, device_id, &format,
                         0u, 0u, CALLBACK_NULL);
    if (result != MMSYSERR_NOERROR) {
        set_mm_error(error, error_capacity,
                     L"Unable to open the selected audio device", result);
        simcity_audio_output_close(output);
        return 0;
    }

    for (index = 0u; index < SIMCITY_AUDIO_BUFFER_COUNT; ++index) {
        WAVEHDR *header = &output->headers[index];
        memset(header, 0, sizeof(*header));
        header->lpData = (LPSTR)(output->sample_storage +
            ((size_t)index * output->buffer_frames *
             SIMCITY_RECOMP_AUDIO_CHANNELS));
    }
    /* Hold the device until pump() has built a complete queue. */
    (void)waveOutPause(output->handle);
    output->paused = 1;
    output->priming = 1;
    return 1;
}

void simcity_audio_output_flush(SimCityAudioOutput *output) {
    unsigned index;
    if (!output || !output->handle) return;
    (void)waveOutReset(output->handle);
    for (index = 0u; index < SIMCITY_AUDIO_BUFFER_COUNT; ++index) {
        WAVEHDR *header = &output->headers[index];
        if ((header->dwFlags & WHDR_PREPARED) != 0u)
            (void)waveOutUnprepareHeader(output->handle, header,
                                         sizeof(*header));
        header->dwFlags = 0u;
        header->dwBufferLength = 0u;
    }
    output->queued_buffers = 0u;
    output->pending_frames = 0u;
    output->priming = 0;
}

void simcity_audio_output_close(SimCityAudioOutput *output) {
    if (!output) return;
    if (output->handle) {
        simcity_audio_output_flush(output);
        (void)waveOutClose(output->handle);
    }
    free(output->sample_storage);
    free(output->pending_storage);
    memset(output, 0, sizeof(*output));
}

void simcity_audio_output_pause(SimCityAudioOutput *output) {
    if (!output || !output->handle || output->paused) return;
    if (waveOutPause(output->handle) == MMSYSERR_NOERROR) {
        /* Reset clears WinMM's paused state.  Pause again after draining so
           fresh waveOutWrite calls cannot start before pre-roll completes. */
        simcity_audio_output_flush(output);
        if (waveOutPause(output->handle) == MMSYSERR_NOERROR)
            output->paused = 1;
    }
}

void simcity_audio_output_resume(SimCityAudioOutput *output) {
    if (!output || !output->handle || !output->paused) return;
    output->pending_frames = 0u;
    output->fade_frames_remaining =
        (SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE * AUDIO_RESUME_FADE_MS) / 1000u;
    output->priming = 1;
    output->paused = 0;
}

int simcity_audio_output_is_open(const SimCityAudioOutput *output) {
    return output && output->handle != NULL;
}

static void apply_volume(int16_t *samples, size_t sample_count,
                         int volume_percent) {
    size_t index;
    if (!samples) return;
    if (volume_percent >= 100) return;
    if (volume_percent <= 0) {
        memset(samples, 0, sample_count * sizeof(*samples));
        return;
    }
    for (index = 0u; index < sample_count; ++index) {
        int32_t scaled = ((int32_t)samples[index] * volume_percent) / 100;
        if (scaled < INT16_MIN) scaled = INT16_MIN;
        if (scaled > INT16_MAX) scaled = INT16_MAX;
        samples[index] = (int16_t)scaled;
    }
}

static void apply_resume_fade(SimCityAudioOutput *output, int16_t *samples,
                              size_t frame_count) {
    size_t frame;
    uint32_t fade_total =
        (SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE * AUDIO_RESUME_FADE_MS) / 1000u;
    if (!output || !samples || output->fade_frames_remaining == 0u ||
        fade_total == 0u) return;
    for (frame = 0u; frame < frame_count &&
         output->fade_frames_remaining > 0u; ++frame) {
        uint32_t progressed = fade_total - output->fade_frames_remaining;
        unsigned channel;
        for (channel = 0u; channel < SIMCITY_RECOMP_AUDIO_CHANNELS; ++channel) {
            size_t sample = frame * SIMCITY_RECOMP_AUDIO_CHANNELS + channel;
            samples[sample] = (int16_t)(((int32_t)samples[sample] *
                (int32_t)progressed) / (int32_t)fade_total);
        }
        output->fade_frames_remaining--;
    }
}

void simcity_audio_output_pump(SimCityAudioOutput *output,
                               SimCityAudioRecorderWin32 *recorder,
                               SimCityRecomp *game) {
    int16_t staging[4096u * SIMCITY_RECOMP_AUDIO_CHANNELS];
    if (!game) return;
    if (!output || !output->handle) {
        while (simcity_recomp_audio_available(game) > 0u) {
            size_t available = simcity_recomp_audio_available(game);
            size_t request = available > 4096u ? 4096u : available;
            size_t frames = simcity_recomp_audio_read(game, staging, request);
            if (!frames) break;
            if (recorder && simcity_audio_recorder_win32_active(recorder) &&
                !simcity_audio_recorder_win32_write(recorder, staging, frames))
                (void)simcity_audio_recorder_win32_stop(recorder);
        }
        return;
    }

    release_finished_headers(output);
    while (simcity_recomp_audio_available(game) > 0u) {
        WAVEHDR *header = find_free_header(output);
        size_t available;
        size_t request;
        size_t read_frames;
        MMRESULT result;
        if (!header) break;
        available = simcity_recomp_audio_available(game);
        request = output->buffer_frames - output->pending_frames;
        if (request > available) request = available;
        read_frames = simcity_recomp_audio_read(
            game, output->pending_storage +
                ((size_t)output->pending_frames * SIMCITY_RECOMP_AUDIO_CHANNELS),
            request);
        if (read_frames == 0u) break;
        if (recorder && simcity_audio_recorder_win32_active(recorder) &&
            !simcity_audio_recorder_win32_write(
                recorder, output->pending_storage +
                    ((size_t)output->pending_frames *
                     SIMCITY_RECOMP_AUDIO_CHANNELS), read_frames))
            (void)simcity_audio_recorder_win32_stop(recorder);
        output->pending_frames += (uint32_t)read_frames;
        if (output->pending_frames < output->buffer_frames) break;
        memcpy(header->lpData, output->pending_storage,
               (size_t)output->buffer_frames *
               SIMCITY_RECOMP_AUDIO_CHANNELS * sizeof(int16_t));
        apply_resume_fade(output, (int16_t *)header->lpData,
                          output->buffer_frames);
        apply_volume((int16_t *)header->lpData,
                     output->buffer_frames * SIMCITY_RECOMP_AUDIO_CHANNELS,
                     output->volume_percent);
        header->dwBufferLength = (DWORD)(output->buffer_frames *
            SIMCITY_RECOMP_AUDIO_CHANNELS * sizeof(int16_t));
        header->dwFlags = 0u;
        result = waveOutPrepareHeader(output->handle, header,
                                      sizeof(*header));
        if (result != MMSYSERR_NOERROR) {
            header->dwBufferLength = 0u;
            output->pending_frames = 0u;
            break;
        }
        result = waveOutWrite(output->handle, header, sizeof(*header));
        if (result != MMSYSERR_NOERROR) {
            (void)waveOutUnprepareHeader(output->handle, header,
                                         sizeof(*header));
            header->dwBufferLength = 0u;
            output->pending_frames = 0u;
            break;
        }
        output->queued_buffers++;
        output->pending_frames = 0u;
        if (output->priming &&
            output->queued_buffers >= AUDIO_PREROLL_BUFFERS) {
            if (waveOutRestart(output->handle) == MMSYSERR_NOERROR)
                output->priming = 0;
        }
    }
}
