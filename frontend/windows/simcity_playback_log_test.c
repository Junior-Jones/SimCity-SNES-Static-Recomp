#include "simcity_playback_log.h"

#include <windows.h>
#include <stdio.h>
#include <string.h>

enum { BURST_ROWS = 2048 };

int main(void) {
    wchar_t temp[MAX_PATH], path[MAX_PATH];
    const DWORD length = GetTempPathW(MAX_PATH, temp);
    if (!length || length >= MAX_PATH || !GetTempFileNameW(temp, L"scg", 0u, path)) return 1;
    SimCityPlaybackLog *log = simcity_playback_log_open(path);
    int passed = 0;
    if (log) {
        for (unsigned row = 0u; row < 64u; ++row)
            simcity_playback_log_printf(log, "frame=%u\n", row);
        simcity_playback_log_printf(log, "%020000u\n", 0u); /* too long: drop, don't truncate */
        simcity_playback_log_printf(log, "final=1\n");
        for (unsigned row = 0u; row < BURST_ROWS; ++row)
            simcity_playback_log_printf(log, "burst=%u\n", row);
        simcity_playback_log_close(log); /* no sleep: must drain even when stopped immediately */
        FILE *file = NULL;
        if (_wfopen_s(&file, path, L"r") == 0) {
            char actual[96], expected[96];
            passed = 1;
            for (unsigned row = 0u; row < 64u && passed; ++row) {
                snprintf(expected, sizeof(expected), "frame=%u\n", row);
                passed = fgets(actual, sizeof(actual), file) && strcmp(actual, expected) == 0;
            }
            passed = passed && fgets(actual, sizeof(actual), file) && strcmp(actual, "final=1\n") == 0;
            unsigned seen = 0u, previous = 0u, dropped = 0u;
            while (passed && fgets(actual, sizeof(actual), file)) {
                unsigned value;
                if (sscanf_s(actual, "burst=%u", &value) == 1) {
                    if ((seen && value <= previous) || value >= BURST_ROWS || dropped) passed = 0;
                    previous = value;
                    ++seen;
                } else if (!dropped && sscanf_s(actual, "playback_log_dropped_rows=%u", &value) == 1) {
                    dropped = value;
                } else {
                    passed = 0;
                }
            }
            passed = passed && dropped >= 1u && seen + dropped == BURST_ROWS + 1u && feof(file);
            (void)fclose(file);
        }
    }
    if (!DeleteFileW(path)) passed = 0;
    if (!passed) fprintf(stderr, "Playback log drain/order/drop check failed.\n");
    return passed ? 0 : 1;
}
