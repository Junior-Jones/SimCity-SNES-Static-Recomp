#include "simcity_playback_log.h"

#include <windows.h>
#include <process.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* The launcher can emit 24 fault rows at once. Leave room for several
   batches; also allow a separate screenshot row with a long UTF-8 path. */
#define LOG_ROWS 96
#define LOG_ROW_BYTES 16384

struct SimCityPlaybackLog {
    FILE *file;
    HANDLE ready, thread;
    volatile LONG read, write, stopping, dropped;
    struct { size_t length; char text[LOG_ROW_BYTES]; } row[LOG_ROWS];
};

static LONG log_load(volatile LONG *value) {
    return InterlockedCompareExchange(value, 0, 0);
}

static unsigned __stdcall playback_log_worker(void *opaque) {
    SimCityPlaybackLog *log = opaque;
    for (;;) {
        if (WaitForSingleObject(log->ready, INFINITE) != WAIT_OBJECT_0) break;
        /* Read stop before draining: once true the producer is finished.
           If stop changes mid-drain, its separate signal wakes us again. */
        const LONG stopping = log_load(&log->stopping);
        LONG read = log_load(&log->read);
        int wrote = 0;
        while (read != log_load(&log->write)) {
            (void)fwrite(log->row[read].text, 1u, log->row[read].length, log->file);
            read = (read + 1) % LOG_ROWS;
            InterlockedExchange(&log->read, read);
            wrote = 1;
        }
        if (wrote) (void)fflush(log->file);
        if (stopping) break;
    }
    const LONG dropped = log_load(&log->dropped);
    if (dropped) fprintf(log->file, "playback_log_dropped_rows=%ld\n", dropped);
    (void)fclose(log->file);
    return 0u;
}

SimCityPlaybackLog *simcity_playback_log_open(const wchar_t *path) {
    SimCityPlaybackLog *log = calloc(1u, sizeof(*log));
    if (!log) return NULL;
    log->ready = CreateEventW(NULL, FALSE, FALSE, NULL);
    if (log->ready && _wfopen_s(&log->file, path, L"w") == 0) {
        log->thread = (HANDLE)(uintptr_t)_beginthreadex(NULL, 0u, playback_log_worker,
                                                       log, 0u, NULL);
        if (log->thread) return log;
    }
    if (log->file) (void)fclose(log->file);
    if (log->ready) CloseHandle(log->ready);
    free(log);
    return NULL;
}

void simcity_playback_log_printf(SimCityPlaybackLog *log, const char *format, ...) {
    if (!log) return;
    const LONG write = log_load(&log->write);
    const LONG next = (write + 1) % LOG_ROWS;
    if (next != log_load(&log->read)) {
        va_list arguments;
        va_start(arguments, format);
        const int length = vsnprintf(log->row[write].text, LOG_ROW_BYTES, format, arguments);
        va_end(arguments);
        if (length >= 0 && length < LOG_ROW_BYTES) {
            log->row[write].length = (size_t)length;
            InterlockedExchange(&log->write, next);
            (void)SetEvent(log->ready);
            return;
        }
    }
    InterlockedIncrement(&log->dropped);
}

void simcity_playback_log_close(SimCityPlaybackLog *log) {
    if (!log) return;
    InterlockedExchange(&log->stopping, 1);
    (void)SetEvent(log->ready);
    (void)WaitForSingleObject(log->thread, INFINITE);
    CloseHandle(log->thread);
    CloseHandle(log->ready);
    free(log);
}
