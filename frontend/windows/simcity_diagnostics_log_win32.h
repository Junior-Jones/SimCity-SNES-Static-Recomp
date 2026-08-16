#ifndef SIMCITY_DIAGNOSTICS_LOG_WIN32_H
#define SIMCITY_DIAGNOSTICS_LOG_WIN32_H

#if !defined(_WIN32)
#error This diagnostics logger is for Windows only.
#endif

#include <windows.h>
#include <stdint.h>

#include "simcity_audio_output_sdl3.h"
#include "simcity_static_recomp.h"
#include "simcity_video_output_sdl3.h"

typedef struct SimCityHostDiagnosticState {
    int paused;
    int presentation_hidden;
    int fullscreen_active;
    int loading;
    int integer_scale;
    int correct_aspect;
    int vsync_enabled;
    int audio_enabled;
    int audio_volume_percent;
    int audio_latency_ms;
    uint16_t held_input;
    uint16_t gamepad_input;
    uint16_t effective_input;
    uint64_t pacing_timer_ticks;
    uint64_t pacing_skipped_deadlines;
    uint64_t pacing_resyncs;
    uint32_t pacing_max_batch;
    SimCityVideoDiagnostics video;
    SimCityAudioDiagnostics audio;
} SimCityHostDiagnosticState;

int simcity_diagnostics_write(
    const wchar_t *logs_directory, const wchar_t *event_name,
    const wchar_t *detail, const wchar_t *artifact_path,
    SimCityRecomp *game, const SimCityHostDiagnosticState *host,
    const EXCEPTION_POINTERS *exception, wchar_t *saved_path,
    size_t saved_capacity);

#endif
