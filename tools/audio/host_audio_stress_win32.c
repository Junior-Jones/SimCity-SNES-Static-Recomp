#if !defined(_WIN32)
#error This host-audio stress harness is for Windows only.
#endif

#include "simcity_audio_output_sdl3.h"

#include <windows.h>

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int read_file(const char *path, uint8_t **data, size_t *size) {
    FILE *file;
    long length;
    uint8_t *bytes;
    if (!data || !size) return 0;
    *data = NULL;
    *size = 0u;
    file = fopen(path, "rb");
    if (!file || fseek(file, 0, SEEK_END) != 0 ||
        (length = ftell(file)) < 0 || fseek(file, 0, SEEK_SET) != 0) {
        if (file) fclose(file);
        return 0;
    }
    bytes = (uint8_t *)malloc((size_t)length);
    if (!bytes || fread(bytes, 1u, (size_t)length, file) != (size_t)length ||
        fclose(file) != 0) {
        free(bytes);
        return 0;
    }
    *data = bytes;
    *size = (size_t)length;
    return 1;
}

static int advance_realtime(SimCityRecomp *game, SimCityAudioOutput *output,
                            unsigned frames) {
    unsigned frame;
    for (frame = 0u; frame < frames; ++frame) {
        SimCityRecompFrameResult result;
        memset(&result, 0, sizeof(result));
        if (!simcity_recomp_advance_headless(game, 0u, 1u, &result)) {
            fprintf(stderr, "core advance failed: %s\n",
                    simcity_recomp_last_error(game));
            return 0;
        }
        simcity_audio_output_pump(output, game);
        Sleep(17u);
    }
    return 1;
}

int main(int argc, char **argv) {
    uint8_t *rom = NULL;
    size_t rom_size = 0u;
    SimCityRecomp *game = NULL;
    SimCityAudioOutput output;
    SimCityAudioSettings settings;
    SimCityAudioDiagnostics before_pause;
    SimCityAudioDiagnostics during_pause;
    SimCityAudioDiagnostics after_protected_stall;
    SimCityAudioDiagnostics after_unprotected_stall;
    wchar_t error[512];
    char core_error[512];
    int passed = 0;

    if (argc != 2) {
        fprintf(stderr, "usage: %s ROM\n", argv[0]);
        return 2;
    }
    memset(&output, 0, sizeof(output));
    memset(&before_pause, 0, sizeof(before_pause));
    memset(&during_pause, 0, sizeof(during_pause));
    memset(&after_protected_stall, 0, sizeof(after_protected_stall));
    memset(&after_unprotected_stall, 0, sizeof(after_unprotected_stall));
    memset(error, 0, sizeof(error));
    memset(core_error, 0, sizeof(core_error));

    if (!read_file(argv[1], &rom, &rom_size) ||
        !simcity_recomp_create(&game, rom, rom_size,
                               core_error, sizeof(core_error))) {
        fprintf(stderr, "core creation failed: %s\n", core_error);
        free(rom);
        return 1;
    }
    free(rom);

    simcity_audio_output_initialize(&output);
    simcity_audio_settings_defaults(&settings);
    settings.latency_ms = 80;
    if (!simcity_audio_output_open(&output, &settings, error,
                                   sizeof(error) / sizeof(error[0]))) {
        fwprintf(stderr, L"audio open failed: %ls\n", error);
        simcity_recomp_destroy(game);
        return 1;
    }
    simcity_audio_output_resume(&output);
    if (!advance_realtime(game, &output, 180u)) goto cleanup;
    simcity_audio_output_get_diagnostics(&output, &before_pause);

    simcity_audio_output_pause(&output);
    Sleep(250u);
    simcity_audio_output_pump(&output, game);
    simcity_audio_output_get_diagnostics(&output, &during_pause);
    simcity_audio_output_resume(&output);
    if (!advance_realtime(game, &output, 60u)) goto cleanup;

    /* Model the synchronous part of an in-app screenshot.  The output stream
       is suspended while the UI thread is blocked, preserving queued PCM. */
    simcity_audio_output_pause(&output);
    Sleep(300u);
    simcity_audio_output_pump(&output, game);
    simcity_audio_output_resume(&output);
    if (!advance_realtime(game, &output, 60u)) goto cleanup;
    simcity_audio_output_get_diagnostics(&output, &after_protected_stall);

    /* Control case: prove that the detector sees a real unprotected host
       starvation instead of silently accepting the same discontinuity. */
    Sleep(300u);
    if (!advance_realtime(game, &output, 1u)) goto cleanup;
    simcity_audio_output_get_diagnostics(&output, &after_unprotected_stall);

    passed = before_pause.queue_depth_frames > 0u &&
        before_pause.underruns == 0u &&
        before_pause.queue_failures == 0u &&
        during_pause.queue_depth_frames == before_pause.queue_depth_frames &&
        after_protected_stall.underruns == 0u &&
        after_protected_stall.queue_failures == 0u &&
        after_unprotected_stall.underruns >
            after_protected_stall.underruns &&
        after_unprotected_stall.playback_ratio >= 0.9975f &&
        after_unprotected_stall.playback_ratio <= 1.0025f &&
        !simcity_recomp_failed(game) &&
        !simcity_recomp_audio_overflowed(game);

    printf("passed=%d queue_before_pause=%u queue_during_pause=%u "
           "underruns_before=%llu underruns_after_protected=%llu "
           "underruns_after_unprotected=%llu queue_failures=%llu "
           "playback_ratio=%.6f core_failed=%d core_overflow=%d\n",
           passed, before_pause.queue_depth_frames,
           during_pause.queue_depth_frames,
           (unsigned long long)before_pause.underruns,
           (unsigned long long)after_protected_stall.underruns,
           (unsigned long long)after_unprotected_stall.underruns,
           (unsigned long long)after_unprotected_stall.queue_failures,
           after_unprotected_stall.playback_ratio,
           simcity_recomp_failed(game),
           simcity_recomp_audio_overflowed(game));

cleanup:
    simcity_audio_output_close(&output);
    simcity_recomp_destroy(game);
    return passed ? 0 : 1;
}
