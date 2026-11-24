#include "simcity_battery_writer.h"

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int contents_match(const wchar_t *path, const uint8_t *expected, DWORD size) {
    uint8_t actual[32];
    DWORD read = 0u;
    HANDLE file = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0u, NULL);
    if (file == INVALID_HANDLE_VALUE) return 0;
    const int result = ReadFile(file, actual, sizeof(actual), &read, NULL) &&
        read == size && memcmp(actual, expected, size) == 0;
    CloseHandle(file);
    return result;
}

static int worker_attempt(const wchar_t *directory, const wchar_t *path,
                          const uint8_t *bytes, size_t size, int expected) {
    uint8_t *owned = malloc(size);
    if (!owned) return 0;
    memcpy(owned, bytes, size);
    SimCityBatteryWrite *job = simcity_battery_write_start(directory, path, owned, size);
    if (!job) { free(owned); return 0; }
    int result = -1;
    /* Take the nonblocking collection path when possible, otherwise
       drain immediately, as a close/reload can do after scheduling. */
    if (!simcity_battery_write_collect(job, 0, &result) &&
        !simcity_battery_write_collect(job, 1, &result)) return 0;
    return result == expected;
}

int main(void) {
    const uint8_t old[] = {0u, 1u, 2u, 3u};
    const uint8_t next[] = {255u, 0u, 4u};
    wchar_t directory[MAX_PATH], path[MAX_PATH], temporary[MAX_PATH + 32];
    const DWORD length = GetTempPathW(MAX_PATH, directory);
    if (!length || length >= MAX_PATH || !GetTempFileNameW(directory, L"scb", 0u, path)) return 1;
    const int temporary_length = swprintf_s(temporary, MAX_PATH + 32u, L"%ls.tmp-%lu",
        path, (unsigned long)GetCurrentProcessId());
    int passed = temporary_length > 0 && simcity_battery_write_now(directory, path, old, sizeof(old));
    if (passed) {
        /* This handle deliberately omits FILE_SHARE_DELETE. Temporary
           creation can succeed, but replacement of the old file cannot. */
        HANDLE guard = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0u, NULL);
        passed = guard != INVALID_HANDLE_VALUE;
        if (passed) {
            passed = worker_attempt(directory, path, next, sizeof(next), 0) &&
                contents_match(path, old, sizeof(old)) &&
                GetFileAttributesW(temporary) == INVALID_FILE_ATTRIBUTES;
            CloseHandle(guard);
        }
    }
    passed = passed && worker_attempt(directory, path, next, sizeof(next), 1) &&
        contents_match(path, next, sizeof(next)) && GetFileAttributesW(temporary) == INVALID_FILE_ATTRIBUTES;
    if (temporary_length > 0 && GetFileAttributesW(temporary) != INVALID_FILE_ATTRIBUTES)
        (void)DeleteFileW(temporary);
    if (!DeleteFileW(path)) passed = 0;
    if (!passed) fprintf(stderr, "Battery writer replacement, preservation or drain check failed.\n");
    return passed ? 0 : 1;
}
