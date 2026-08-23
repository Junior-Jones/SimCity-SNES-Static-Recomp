#include "simcity_diagnostics_log_win32.h"

#include <stdio.h>
#include <string.h>
#include <wchar.h>

#define DIAGNOSTIC_PATH_CAPACITY 4096u
#define WRAM_BYTES 0x20000u

static volatile LONG g_diagnostic_sequence;

static void copy_wide(wchar_t *output, size_t capacity,
                      const wchar_t *input) {
    if (!output || capacity == 0u) return;
    if (!input) input = L"";
    wcsncpy(output, input, capacity - 1u);
    output[capacity - 1u] = L'\0';
}

static int wide_to_utf8(const wchar_t *input, char *output, size_t capacity) {
    int result;
    if (!output || capacity == 0u) return 0;
    if (!input) input = L"";
    result = WideCharToMultiByte(CP_UTF8, 0, input, -1, output,
                                 (int)capacity, NULL, NULL);
    if (result <= 0) output[0] = '\0';
    output[capacity - 1u] = '\0';
    return result > 0;
}

static void sanitize_event_token(const wchar_t *event_name, wchar_t *output,
                                 size_t capacity) {
    size_t source = 0u;
    size_t destination = 0u;
    if (!output || capacity == 0u) return;
    if (!event_name || !event_name[0]) event_name = L"diagnostic";
    while (event_name[source] && destination + 1u < capacity) {
        wchar_t value = event_name[source++];
        if ((value >= L'a' && value <= L'z') ||
            (value >= L'A' && value <= L'Z') ||
            (value >= L'0' && value <= L'9') || value == L'-' ||
            value == L'_')
            output[destination++] = value;
        else
            output[destination++] = L'-';
    }
    output[destination] = L'\0';
}

static uint64_t fnv1a_update(uint64_t hash, const uint8_t *bytes,
                             size_t size) {
    size_t index;
    for (index = 0u; index < size; ++index) {
        hash ^= bytes[index];
        hash *= UINT64_C(1099511628211);
    }
    return hash;
}

static int hash_wram(const SimCityRecomp *game, uint64_t *result) {
    uint8_t buffer[4096];
    uint32_t offset = 0u;
    uint64_t hash = UINT64_C(1469598103934665603);
    if (!game || !result) return 0;
    while (offset < WRAM_BYTES) {
        size_t count = WRAM_BYTES - offset;
        if (count > sizeof(buffer)) count = sizeof(buffer);
        if (!simcity_recomp_read_wram(game, offset, buffer, count)) return 0;
        hash = fnv1a_update(hash, buffer, count);
        offset += (uint32_t)count;
    }
    *result = hash;
    return 1;
}

static int hash_frame(const SimCityRecomp *game, uint64_t *result) {
    const uint32_t *pixels;
    if (!game || !result) return 0;
    pixels = simcity_recomp_frame_bgra(game);
    if (!pixels) return 0;
    *result = fnv1a_update(
        UINT64_C(1469598103934665603), (const uint8_t *)pixels,
        (size_t)SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*pixels));
    return 1;
}

int simcity_diagnostics_write(
    const wchar_t *logs_directory, const wchar_t *event_name,
    const wchar_t *detail, const wchar_t *artifact_path,
    SimCityRecomp *game, const SimCityHostDiagnosticState *host,
    const EXCEPTION_POINTERS *exception, wchar_t *saved_path,
    size_t saved_capacity) {
    SYSTEMTIME now;
    wchar_t token[64];
    wchar_t log_path[DIAGNOSTIC_PATH_CAPACITY];
    wchar_t snapshot_path[DIAGNOSTIC_PATH_CAPACITY];
    char detail_utf8[1024];
    char artifact_utf8[DIAGNOSTIC_PATH_CAPACITY];
    char snapshot_utf8[DIAGNOSTIC_PATH_CAPACITY];
    char snapshot_error[256] = {0};
    FILE *file;
    LONG sequence;
    int snapshot_saved = 0;
    SimCityRecompAudioStaticStatus static_audio;
    SimCityRecompAudioTransportStatus transport;
    uint64_t wram_hash = 0u;
    uint64_t frame_hash = 0u;
    int have_wram_hash = 0;
    int have_frame_hash = 0;
    if (saved_path && saved_capacity) saved_path[0] = L'\0';
    if (!logs_directory || !logs_directory[0]) return 0;
    if (!CreateDirectoryW(logs_directory, NULL) &&
        GetLastError() != ERROR_ALREADY_EXISTS) return 0;
    GetLocalTime(&now);
    sequence = InterlockedIncrement(&g_diagnostic_sequence);
    sanitize_event_token(event_name, token,
                         sizeof(token) / sizeof(token[0]));
    (void)_snwprintf(log_path, DIAGNOSTIC_PATH_CAPACITY,
        L"%s\\%s-%04u%02u%02u-%02u%02u%02u-%03u-p%lu-%ld.txt",
        logs_directory, token, (unsigned)now.wYear, (unsigned)now.wMonth,
        (unsigned)now.wDay, (unsigned)now.wHour, (unsigned)now.wMinute,
        (unsigned)now.wSecond, (unsigned)now.wMilliseconds,
        (unsigned long)GetCurrentProcessId(), (long)sequence);
    log_path[DIAGNOSTIC_PATH_CAPACITY - 1u] = L'\0';
    (void)_snwprintf(snapshot_path, DIAGNOSTIC_PATH_CAPACITY,
        L"%s\\%s-%04u%02u%02u-%02u%02u%02u-%03u-p%lu-%ld.scsnap",
        logs_directory, token, (unsigned)now.wYear, (unsigned)now.wMonth,
        (unsigned)now.wDay, (unsigned)now.wHour, (unsigned)now.wMinute,
        (unsigned)now.wSecond, (unsigned)now.wMilliseconds,
        (unsigned long)GetCurrentProcessId(), (long)sequence);
    snapshot_path[DIAGNOSTIC_PATH_CAPACITY - 1u] = L'\0';
    (void)wide_to_utf8(detail, detail_utf8, sizeof(detail_utf8));
    (void)wide_to_utf8(artifact_path, artifact_utf8, sizeof(artifact_utf8));
    (void)wide_to_utf8(snapshot_path, snapshot_utf8, sizeof(snapshot_utf8));
    if (game)
        snapshot_saved = simcity_recomp_snapshot_save(
            game, snapshot_utf8, snapshot_error, sizeof(snapshot_error));
    file = _wfopen(log_path, L"wb");
    if (!file) return 0;
    fprintf(file, "Format=SimCity-Diagnostic-v1\r\n"
                  "LauncherVersion=1.1.2\r\n"
                  "TimestampLocal=%04u-%02u-%02uT%02u:%02u:%02u.%03u\r\n"
                  "Event=%ls\r\nDetail=%s\r\nArtifact=%s\r\n"
                  "ProcessId=%lu\r\nThreadId=%lu\r\n",
            (unsigned)now.wYear, (unsigned)now.wMonth, (unsigned)now.wDay,
            (unsigned)now.wHour, (unsigned)now.wMinute,
            (unsigned)now.wSecond, (unsigned)now.wMilliseconds,
            event_name ? event_name : L"diagnostic", detail_utf8,
            artifact_utf8, (unsigned long)GetCurrentProcessId(),
            (unsigned long)GetCurrentThreadId());
    if (exception && exception->ExceptionRecord) {
        fprintf(file, "\r\n[Exception]\r\nCode=%08lX\r\nAddress=%p\r\nFlags=%08lX\r\n",
                (unsigned long)exception->ExceptionRecord->ExceptionCode,
                exception->ExceptionRecord->ExceptionAddress,
                (unsigned long)exception->ExceptionRecord->ExceptionFlags);
    }
    if (host) {
        fprintf(file,
            "\r\n[Host]\r\nPaused=%d\r\nPresentationHidden=%d\r\n"
            "FullscreenActive=%d\r\nLoading=%d\r\nIntegerScale=%d\r\n"
            "CorrectAspect=%d\r\nVSyncEnabled=%d\r\nAudioEnabled=%d\r\n"
            "AudioVolumePercent=%d\r\nAudioLatencyMs=%d\r\n"
            "HeldInputP1=%04X\r\nGamepadInputP1=%04X\r\n"
            "EffectiveInputP1=%04X\r\nPacingTimerTicks=%llu\r\n"
            "PacingSkippedDeadlines=%llu\r\nPacingResyncs=%llu\r\n"
            "PacingMaxBatch=%u\r\n",
            host->paused, host->presentation_hidden, host->fullscreen_active,
            host->loading, host->integer_scale, host->correct_aspect,
            host->vsync_enabled, host->audio_enabled,
            host->audio_volume_percent, host->audio_latency_ms,
            host->held_input, host->gamepad_input, host->effective_input,
            (unsigned long long)host->pacing_timer_ticks,
            (unsigned long long)host->pacing_skipped_deadlines,
            (unsigned long long)host->pacing_resyncs, host->pacing_max_batch);
        fprintf(file,
            "\r\n[VideoHost]\r\nRenderer=%s\r\nUsingGPU=%d\r\nVSync=%d\r\n"
            "SubmittedFrames=%llu\r\nPresentedFrames=%llu\r\n"
            "DroppedPresentations=%llu\r\nRendererRecoveries=%llu\r\n"
            "PresentationFailures=%llu\r\n",
            host->video.renderer_name, host->video.using_gpu,
            host->video.vsync_enabled,
            (unsigned long long)host->video.submitted_frames,
            (unsigned long long)host->video.presented_frames,
            (unsigned long long)host->video.dropped_presentations,
            (unsigned long long)host->video.renderer_recoveries,
            (unsigned long long)host->video.presentation_failures);
        fprintf(file,
            "\r\n[AudioHost]\r\nNativeFramesQueued=%llu\r\nUnderruns=%llu\r\n"
            "QueueFailures=%llu\r\nDeviceReopens=%llu\r\nQueueDepthFrames=%u\r\n"
            "TargetLatencyFrames=%u\r\nPlaybackRatio=%.6f\r\nDeviceSampleRate=%d\r\n",
            (unsigned long long)host->audio.native_frames_queued,
            (unsigned long long)host->audio.underruns,
            (unsigned long long)host->audio.queue_failures,
            (unsigned long long)host->audio.device_reopens,
            host->audio.queue_depth_frames, host->audio.target_latency_frames,
            (double)host->audio.playback_ratio,
            host->audio.device_sample_rate);
    }
    fprintf(file, "\r\n[StaticCore]\r\nPresent=%d\r\n", game != NULL);
    if (game) {
        memset(&static_audio, 0, sizeof(static_audio));
        memset(&transport, 0, sizeof(transport));
        (void)simcity_recomp_audio_static_status(game, &static_audio);
        (void)simcity_recomp_audio_transport_status(game, &transport);
        have_wram_hash = hash_wram(game, &wram_hash);
        have_frame_hash = hash_frame(game, &frame_hash);
        fprintf(file,
            "Frame=%u\r\nInstructions=%llu\r\nFailed=%d\r\nLastError=%s\r\n"
            "SnapshotHistoryFrames=%u\r\nAudioAvailableFrames=%llu\r\n"
            "AudioOverflowed=%d\r\n",
            simcity_recomp_current_frame(game),
            (unsigned long long)simcity_recomp_instruction_count(game),
            simcity_recomp_failed(game), simcity_recomp_last_error(game),
            simcity_recomp_snapshot_history_frames(game),
            (unsigned long long)simcity_recomp_audio_available(game),
            simcity_recomp_audio_overflowed(game));
        fprintf(file,
            "\r\n[StaticAudio]\r\nEpoch=%u\r\nRouteFailed=%u\r\nSMPPC=%04X\r\n"
            "CompiledInstructions=%u\r\nCompiledDriverInstructions=%u\r\n"
            "ObservedInstructions=%u\r\nOpcodeMismatches=%u\r\n"
            "CodeWriteBarriers=%u\r\nValidatedInstructions=%llu\r\n"
            "ManifestSHA256=%s\r\n",
            static_audio.current_epoch, static_audio.route_failed,
            static_audio.current_smp_pc,
            static_audio.compiled_instruction_count,
            static_audio.compiled_driver_instruction_count,
            static_audio.observed_instruction_count,
            static_audio.opcode_mismatches, static_audio.code_write_barriers,
            (unsigned long long)static_audio.validated_instructions,
            static_audio.manifest_sha256);
        fprintf(file,
            "\r\n[AudioTransport]\r\nReadyObserved=%u\r\n"
            "UploadHandshakeStarted=%u\r\nUploadComplete=%u\r\n"
            "UploadVerified=%u\r\nEntrypoint=%04X\r\nUploadBlocks=%u\r\n"
            "UploadWrites=%u\r\nUniqueBytes=%u\r\nOverlapWrites=%u\r\n"
            "VerifyMismatches=%u\r\nGeneratedAPUSites=%u\r\n"
            "ObservedAPUSites=%u\r\nUnmanifestedAPUAccesses=%u\r\n"
            "PostUploadReads=%u\r\nPostUploadWrites=%u\r\n"
            "UploadImageSHA256=%s\r\nUploadMaskSHA256=%s\r\n"
            "SCPUAPUManifestSHA256=%s\r\n",
            transport.ready_observed, transport.upload_handshake_started,
            transport.upload_complete, transport.upload_verified,
            transport.entrypoint, transport.upload_block_count,
            transport.upload_write_count, transport.upload_unique_byte_count,
            transport.upload_overlap_writes, transport.upload_verify_mismatches,
            transport.generated_scpu_apu_sites,
            transport.observed_scpu_apu_sites,
            transport.unmanifested_scpu_apu_accesses,
            transport.post_upload_scpu_reads,
            transport.post_upload_scpu_writes,
            transport.upload_image_sha256, transport.upload_mask_sha256,
            transport.scpu_apu_manifest_sha256);
        fprintf(file,
            "\r\n[StateArtifacts]\r\nSnapshotSaved=%d\r\nSnapshotPath=%s\r\n"
            "SnapshotError=%s\r\nWRAM-FNV1A64=%s%016llX\r\n"
            "FrameBGRA-FNV1A64=%s%016llX\r\n",
            snapshot_saved, snapshot_saved ? snapshot_utf8 : "",
            snapshot_error, have_wram_hash ? "" : "unavailable/",
            (unsigned long long)wram_hash,
            have_frame_hash ? "" : "unavailable/",
            (unsigned long long)frame_hash);
    }
    fflush(file);
    fclose(file);
    if (saved_path && saved_capacity)
        copy_wide(saved_path, saved_capacity, log_path);
    return 1;
}
