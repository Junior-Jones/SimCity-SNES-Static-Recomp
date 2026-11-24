#include "simcity_screenshot_report.h"
#include <windows.h>
#include <stdio.h>
#include <string.h>

int simcity_write_screenshot_report(const wchar_t *root,
    const wchar_t *screenshot, const char *utf8_report) {
    wchar_t directory[4096], path[4096];
    const wchar_t *leaf, *ext;
    DWORD attributes, wrote = 0u;
    HANDLE out;
    int ok;
    size_t length, root_length;
    if (!root || !*root || !screenshot || !*screenshot || !utf8_report || !*utf8_report)
        return 0;
    root_length = wcslen(root);
    length = strlen(utf8_report);
    if (root_length > 4000u || length > MAXDWORD) return 0;
    attributes = GetFileAttributesW(screenshot);
    if (attributes == INVALID_FILE_ATTRIBUTES || (attributes & FILE_ATTRIBUTE_DIRECTORY))
        return 0;
    leaf = screenshot;
    for (const wchar_t *p = screenshot; *p; ++p)
        if (*p == L'\\' || *p == L'/') leaf = p + 1;
    ext = wcsrchr(leaf, L'.');
    if (!ext || ext == leaf || _wcsicmp(ext, L".bmp") != 0) return 0;
    if (root_length + (size_t)(ext - leaf) + 11u >= 4096u) return 0;
    if (swprintf(directory, 4096u, L"%ls\\Log", root) < 0 ||
        swprintf(path, 4096u, L"%ls\\%.*ls.txt", directory, (int)(ext - leaf), leaf) < 0)
        return 0;
    if (!CreateDirectoryW(directory, NULL) && GetLastError() != ERROR_ALREADY_EXISTS)
        return 0;
    out = CreateFileW(path, GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_NEW,
                      FILE_ATTRIBUTE_NORMAL, NULL);
    if (out == INVALID_HANDLE_VALUE) return 0;
    ok = WriteFile(out, utf8_report, (DWORD)length, &wrote, NULL) && wrote == length;
    if (!CloseHandle(out)) ok = 0;
    if (!ok) DeleteFileW(path);
    return ok;
}
