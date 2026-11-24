#include "simcity_screenshot_report.h"
#include <windows.h>
#include <stdio.h>
#include <string.h>

#define CHECK(condition) do { if (!(condition)) { \
    fprintf(stderr, "Screenshot report check failed at line %d: %s\n", __LINE__, #condition); \
    goto cleanup; \
} } while (0)

int main(void) {
    wchar_t temporary[MAX_PATH], root[MAX_PATH] = {0};
    wchar_t image[MAX_PATH] = {0}, logs[MAX_PATH] = {0}, report[MAX_PATH] = {0};
    static const char expected[] = "Image frame: 12\r\nLive guest frame: 14\r\n";
    char actual[128];
    DWORD bytes = 0u;
    HANDLE file = INVALID_HANDLE_VALUE;
    int result = 1, root_created = 0;
    CHECK(GetTempPathW(MAX_PATH, temporary) > 0);
    CHECK(GetTempFileNameW(temporary, L"scs", 0u, root));
    CHECK(DeleteFileW(root));
    CHECK(CreateDirectoryW(root, NULL));
    root_created = 1;
    CHECK(swprintf(image, MAX_PATH, L"%ls\\capture-\u00E9.bmp", root) > 0);
    CHECK(swprintf(logs, MAX_PATH, L"%ls\\Log", root) > 0);
    CHECK(swprintf(report, MAX_PATH, L"%ls\\capture-\u00E9.txt", logs) > 0);
    CHECK(!simcity_write_screenshot_report(root, image, expected));
    CHECK(GetFileAttributesW(logs) == INVALID_FILE_ATTRIBUTES);
    file = CreateFileW(image, GENERIC_WRITE, 0u, NULL, CREATE_NEW,
                       FILE_ATTRIBUTE_NORMAL, NULL);
    CHECK(file != INVALID_HANDLE_VALUE);
    CloseHandle(file);
    file = INVALID_HANDLE_VALUE;
    CHECK(simcity_write_screenshot_report(root, image, expected));
    CHECK(!simcity_write_screenshot_report(root, image, "must not overwrite"));
    file = CreateFileW(report, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING,
                       FILE_ATTRIBUTE_NORMAL, NULL);
    CHECK(file != INVALID_HANDLE_VALUE);
    CHECK(ReadFile(file, actual, (DWORD)sizeof(actual), &bytes, NULL));
    CHECK(bytes == sizeof(expected) - 1u && memcmp(actual, expected, bytes) == 0);
    result = 0;
cleanup:
    if (file != INVALID_HANDLE_VALUE) CloseHandle(file);
    if (root_created) {
        if (report[0]) DeleteFileW(report);
        if (image[0]) DeleteFileW(image);
        if (logs[0]) RemoveDirectoryW(logs);
        RemoveDirectoryW(root);
    }
    return result;
}
