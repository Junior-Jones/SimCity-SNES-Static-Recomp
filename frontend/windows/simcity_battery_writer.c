#include "simcity_battery_writer.h"

#include <windows.h>
#include <process.h>
#include <stdio.h>
#include <stdlib.h>

#define FILE_PATH_CAPACITY 4096u

int simcity_win32_ensure_directory_tree(const wchar_t *path) {
    wchar_t work[FILE_PATH_CAPACITY];
    if (!path || !path[0] || wcslen(path) >= FILE_PATH_CAPACITY) return 0;
    wcscpy_s(work, FILE_PATH_CAPACITY, path);
    for (size_t index = 0u; work[index]; ++index) {
        if ((work[index] == L'\\' || work[index] == L'/') && index > 2u) {
            const wchar_t saved = work[index];
            work[index] = L'\0';
            const DWORD attributes = GetFileAttributesW(work);
            if (attributes == INVALID_FILE_ATTRIBUTES && !CreateDirectoryW(work, NULL) &&
                GetLastError() != ERROR_ALREADY_EXISTS) return 0;
            work[index] = saved;
        }
    }
    const DWORD attributes = GetFileAttributesW(work);
    if (attributes != INVALID_FILE_ATTRIBUTES)
        return (attributes & FILE_ATTRIBUTE_DIRECTORY) != 0u;
    return CreateDirectoryW(work, NULL) || GetLastError() == ERROR_ALREADY_EXISTS;
}

int simcity_battery_write_now(const wchar_t *directory, const wchar_t *path,
                              const uint8_t *image, size_t size) {
    wchar_t temporary[FILE_PATH_CAPACITY];
    if (!path || !path[0] || !image || !size || !simcity_win32_ensure_directory_tree(directory)) return 0;
    const int length = _snwprintf(temporary, FILE_PATH_CAPACITY, L"%ls.tmp-%lu",
                                  path, (unsigned long)GetCurrentProcessId());
    if (length < 0 || (size_t)length >= FILE_PATH_CAPACITY) return 0;
    FILE *file = NULL;
    if (_wfopen_s(&file, temporary, L"wb") != 0) return 0;
    int ok = fwrite(image, 1u, size, file) == size && fflush(file) == 0;
    if (fclose(file) != 0) ok = 0;
    if (ok && MoveFileExW(temporary, path, MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) return 1;
    (void)DeleteFileW(temporary);
    return 0;
}

struct SimCityBatteryWrite {
    wchar_t directory[FILE_PATH_CAPACITY], path[FILE_PATH_CAPACITY];
    size_t size;
    HANDLE thread;
    uint8_t *image;
    int written;
};

static unsigned __stdcall write_on_worker(void *opaque) {
    SimCityBatteryWrite *job = opaque;
    job->written = simcity_battery_write_now(job->directory, job->path, job->image, job->size);
    return 0u;
}

SimCityBatteryWrite *simcity_battery_write_start(const wchar_t *directory,
    const wchar_t *path, uint8_t *image, size_t size) {
    if (!directory || !path || wcslen(directory) >= FILE_PATH_CAPACITY ||
        wcslen(path) >= FILE_PATH_CAPACITY || !image || !size) return NULL;
    SimCityBatteryWrite *job = calloc(1u, sizeof(*job));
    if (!job) return NULL;
    wcscpy_s(job->directory, FILE_PATH_CAPACITY, directory);
    wcscpy_s(job->path, FILE_PATH_CAPACITY, path);
    job->image = image;
    job->size = size;
    job->thread = (HANDLE)(uintptr_t)_beginthreadex(NULL, 0u, write_on_worker, job, 0u, NULL);
    if (job->thread) return job;
    free(job);
    return NULL;
}

int simcity_battery_write_collect(SimCityBatteryWrite *job, int wait, int *written) {
    if (!job || WaitForSingleObject(job->thread, wait ? INFINITE : 0u) != WAIT_OBJECT_0) return 0;
    if (written) *written = job->written;
    CloseHandle(job->thread);
    free(job->image);
    free(job);
    return 1;
}
