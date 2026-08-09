#if !defined(_WIN32)
#error This frontend is for Windows only.
#endif

#include <windows.h>
#include <commdlg.h>
#include <commctrl.h>

#include "audio_output_winmm.h"
#include "audio_recorder_win32.h"
#include "frontend_settings_win32.h"
#include "simcity_static_recomp.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#define APP_CLASS_NAME L"SimCityStaticRecompWindow"
#define AUDIO_CLASS_NAME L"SimCityStaticRecompAudioSettings"
#define ROM_INFO_CLASS_NAME L"SimCityStaticRecompRomInformation"
#define SNAPSHOT_CLASS_NAME L"SimCityStaticRecompSnapshotWindow"
#define INFO_CLASS_NAME L"SimCityStaticRecompInformationWindow"
#define GETTING_STARTED_CLASS_NAME L"SimCityGettingStartedWindow"
#define APP_TITLE L"SimCity (SNES)"
#define LAUNCHER_TITLE L"Launcher"
#define WM_APP_LOAD_COMPLETE (WM_APP + 1u)
#define WM_APP_STARTUP_CONTINUE (WM_APP + 2u)
#define HOST_TIMER_100NS_PER_SECOND 10000000u
#define HOST_TIMER_HIGH_RESOLUTION 0x00000002u
#define HOST_TIMER_ACCESS 0x001F0003u
#define HEADED_STATUS_INTERVAL_FRAMES 60u
#define SRAM_IMAGE_BYTES 32768u
#define SRAM_FLUSH_INTERVAL_FRAMES 120u

#define ID_BROWSE 1001
#define ID_RUN 1002
#define ID_PAUSE_PLAY 1003
#define ID_KEYS 1004
#define ID_AUDIO_SETTINGS 1005
#define ID_ROM_PATH 1006
#define ID_STATUS 1007
#define ID_EXIT 1010
#define ID_ABOUT 1011
#define ID_FRONTEND_SETTINGS 1012
#define ID_SNAPSHOT_SAVE 1013
#define ID_SNAPSHOT_LOAD 1014
#define ID_RECORD 1015
#define ID_SHORTCUTS 1016
#define ID_CONTROLS 1017
#define ID_RESET 1018
#define ID_BROWSE_MENU 1019
#define ID_FULLSCREEN 1020
#define ID_SCREENSHOT 1021
#define ID_AUTO_RUN 1022
#define ID_GETTING_STARTED 1023
#define ID_SNAPSHOT_SAVE_CURRENT 1024
#define ID_SNAPSHOT_LOAD_CURRENT 1025
#define ID_ROM_NOTICE_CLOSE 4001
#define ID_SNAPSHOT_SLOT_BASE 5000
#define ID_SNAPSHOT_LABEL_BASE 5100
#define ID_SNAPSHOT_INSTRUCTIONS 5200
#define ID_SNAPSHOT_CLOSE 5201
#define ID_INFO_TEXT 5300
#define ID_INFO_CLOSE 5301
#define ID_GETTING_STARTED_CLOSE 5400

#define ID_AUDIO_ENABLED 2001
#define ID_AUDIO_ENGINE 2002
#define ID_AUDIO_DEVICE 2003
#define ID_AUDIO_VOLUME 2004
#define ID_AUDIO_LATENCY 2005
#define ID_AUDIO_APPLY 2006
#define ID_AUDIO_CANCEL 2007

#define PATH_CAPACITY 4096u
#define DEFAULT_KEY_B 'F'
#define DEFAULT_KEY_A 'D'
#define DEFAULT_KEY_Y 'Z'
#define DEFAULT_KEY_X 'X'
#define DEFAULT_KEY_L 'Q'
#define DEFAULT_KEY_R 'W'
#define DEFAULT_KEY_START 'G'
#define DEFAULT_KEY_SELECT 'T'

#define AUDIO_DEFAULT_DEVICE_LABEL L"Default Windows audio device"
#define AUDIO_MIN_LATENCY_MS 40
#define AUDIO_MAX_LATENCY_MS 250

static const wchar_t *ROM_REQUIREMENTS_TEXT =
    L"Required game ROM\r\n\r\n"
    L"Name: SimCity\r\n"
    L"Region: USA\r\n"
    L"File extension: .sfc (the filename can be anything)\r\n"
    L"File size: 524,288 bytes\r\n"
    L"SHA-256: e9c0bc05511e05a0d7c3e7cc42e761e1e8e532d46f59b9854b6902e1a2e9dd0a\r\n\r\n"
    L"The ROM is not included. Browse to your legally obtained matching ROM.";

typedef struct LoaderRequest {
    wchar_t *path;
    wchar_t sram_path[PATH_CAPACITY];
} LoaderRequest;

typedef struct LoaderResult {
    SimCityRecomp *game;
    int sram_loaded;
    wchar_t error[512];
} LoaderResult;

typedef struct AudioDialogState {
    SimCityAudioSettings settings;
    HWND enabled;
    HWND device;
    HWND volume;
    HWND volume_value;
    HWND latency;
    int applied;
} AudioDialogState;

typedef struct SnapshotDialogState {
    int save_mode;
    int resume_after;
    int run_after_action;
    HWND instructions;
    HWND slot_buttons[5];
    HWND slot_labels[5];
    HWND result;
    HWND close_button;
} SnapshotDialogState;

typedef struct InfoDialogState {
    const wchar_t *body;
    HWND text;
    HWND close_button;
} InfoDialogState;

typedef struct GettingStartedDialogState {
    HWND text;
    HWND close_button;
    HFONT heading_font;
    HFONT body_font;
} GettingStartedDialogState;


static HINSTANCE g_instance;
static HWND g_window;
static HWND g_browse_button;
static HWND g_pause_play_button;
static HWND g_reset_button;
static HWND g_keys_button;
static HWND g_audio_button;
static HWND g_fullscreen_checkbox;
static HWND g_auto_run_checkbox;
static HWND g_rom_path;
static HWND g_status;
static HWND g_getting_started_window;
static HWND g_rom_info_window;
static HMENU g_menu;
static SimCityRecomp *g_game;
static HANDLE g_loader_thread;
static volatile LONG g_loading;
static int g_close_requested;
static int g_paused = 1;
static int g_presentation_hidden;
static int g_fullscreen_active;
static DWORD g_saved_style;
static DWORD g_saved_ex_style;
static WINDOWPLACEMENT g_saved_placement = {0};
static int g_resume_after_failed_load;
static int g_play_after_load;
static int g_adjacent_rom_found;
static uint16_t g_held_input;
static uint16_t g_gamepad_input;
static SimCityGamepadInputWin32 g_gamepad;
static wchar_t g_executable_directory[PATH_CAPACITY];
static wchar_t g_rom_directory[PATH_CAPACITY];
static wchar_t g_saves_directory[PATH_CAPACITY];
static wchar_t g_sram_path[PATH_CAPACITY];
static uint32_t g_sram_last_flush_frame;
static wchar_t g_audio_ini_path[PATH_CAPACITY];
static wchar_t g_frontend_ini_path[PATH_CAPACITY];
static SimCityAudioSettings g_audio_settings;
static SimCityAudioOutput g_audio_output;
static SimCityAudioRecorderWin32 g_audio_recorder;
static SimCityFrontendSettingsWin32 g_frontend_settings;
static int g_settings_saved_on_exit;
static int g_loaded_snapshot_slot = -1;
static LARGE_INTEGER g_qpc_frequency;
static HANDLE g_frame_timer;
static uint64_t g_qpc_ticks_per_frame_base;
static uint32_t g_qpc_ticks_per_frame_remainder;
static uint32_t g_qpc_remainder_accumulator;
static uint64_t g_next_frame_deadline;
static uint64_t g_pacing_timer_ticks;
static uint64_t g_pacing_skipped_deadlines;
static uint32_t g_pacing_max_batch;
static uint64_t g_pacing_resyncs;
static GettingStartedDialogState g_getting_started_state;
static int g_getting_started_mark_seen;
static int g_startup_pending;

static void start_rom_load(int play_after_load);
static void pause_game(const wchar_t *message);
static void stop_game_on_core_failure(void);
static void play_game(void);
static void close_audio(void);
static int open_audio(int show_error);
static void update_controls(void);
static void capture_window_screenshot(void);
static int capture_window_screenshot_to(const wchar_t *base_directory,
                                        wchar_t *saved_path,
                                        size_t saved_capacity);
static void reset_pacing_clock(void);
static int arm_frame_timer(void);
static void service_host_timer(void);
static int flush_battery_sram_win32(int force, wchar_t *saved_path,
                                      size_t saved_capacity);
static void maybe_flush_battery_sram_win32(void);
static void utf8_to_wide(const char *input, wchar_t *output, size_t capacity);
static void set_control_font(HWND control);
static void show_snapshot_window(int save_mode);
static void show_information_window(const wchar_t *title,
                                    const wchar_t *body,
                                    int width, int height);
static void show_getting_started_window(int mark_seen);
static void show_first_run_rom_information(void);
static void continue_startup_after_welcome(void);

static void copy_wide(wchar_t *destination, size_t capacity,
                      const wchar_t *source) {
    if (!destination || capacity == 0u) return;
    if (!source) source = L"";
    wcsncpy(destination, source, capacity - 1u);
    destination[capacity - 1u] = L'\0';
}

static void center_window_on_parent(HWND window, HWND parent) {
    RECT window_rect;
    RECT parent_rect;
    MONITORINFO monitor_info;
    HMONITOR monitor;
    int width;
    int height;
    int x;
    int y;
    if (!window || !GetWindowRect(window, &window_rect)) return;
    if (!parent || !IsWindow(parent) || !GetWindowRect(parent, &parent_rect)) {
        parent_rect.left = 0;
        parent_rect.top = 0;
        parent_rect.right = GetSystemMetrics(SM_CXSCREEN);
        parent_rect.bottom = GetSystemMetrics(SM_CYSCREEN);
    }
    width = window_rect.right - window_rect.left;
    height = window_rect.bottom - window_rect.top;
    x = parent_rect.left + ((parent_rect.right - parent_rect.left) - width) / 2;
    y = parent_rect.top + ((parent_rect.bottom - parent_rect.top) - height) / 2;
    monitor = MonitorFromWindow(parent ? parent : window,
                                MONITOR_DEFAULTTONEAREST);
    ZeroMemory(&monitor_info, sizeof(monitor_info));
    monitor_info.cbSize = sizeof(monitor_info);
    if (GetMonitorInfoW(monitor, &monitor_info)) {
        if (x < monitor_info.rcWork.left) x = monitor_info.rcWork.left;
        if (y < monitor_info.rcWork.top) y = monitor_info.rcWork.top;
        if (x + width > monitor_info.rcWork.right)
            x = monitor_info.rcWork.right - width;
        if (y + height > monitor_info.rcWork.bottom)
            y = monitor_info.rcWork.bottom - height;
    }
    SetWindowPos(window, NULL, x, y, 0, 0,
                 SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE);
}

static int wide_to_utf8(const wchar_t *input, char *output, size_t capacity) {
    int converted;
    if (!output || capacity == 0u) return 0;
    output[0] = '\0';
    if (!input) input = L"";
    converted = WideCharToMultiByte(CP_UTF8, 0, input, -1, output,
                                    (int)capacity, NULL, NULL);
    if (converted <= 0) {
        output[0] = '\0';
        return 0;
    }
    output[capacity - 1u] = '\0';
    return 1;
}


static int ensure_directory_tree(const wchar_t *path) {
    wchar_t work[PATH_CAPACITY];
    size_t index;
    DWORD attributes;
    if (!path || !path[0]) return 0;
    copy_wide(work, sizeof(work) / sizeof(work[0]), path);
    for (index = 0u; work[index]; ++index) {
        if ((work[index] == L'\\' || work[index] == L'/') && index > 2u) {
            wchar_t saved = work[index];
            work[index] = L'\0';
            attributes = GetFileAttributesW(work);
            if (attributes == INVALID_FILE_ATTRIBUTES &&
                !CreateDirectoryW(work, NULL) &&
                GetLastError() != ERROR_ALREADY_EXISTS) return 0;
            work[index] = saved;
        }
    }
    attributes = GetFileAttributesW(work);
    if (attributes != INVALID_FILE_ATTRIBUTES)
        return (attributes & FILE_ATTRIBUTE_DIRECTORY) != 0u;
    return CreateDirectoryW(work, NULL) || GetLastError() == ERROR_ALREADY_EXISTS;
}

static void join_wide_path(wchar_t *output, size_t capacity,
                           const wchar_t *directory, const wchar_t *name) {
    size_t length;
    if (!output || capacity == 0u) return;
    output[0] = L'\0';
    if (!directory) directory = L"";
    if (!name) name = L"";
    length = wcslen(directory);
    if (length && (directory[length - 1u] == L'\\' ||
                   directory[length - 1u] == L'/'))
        (void)_snwprintf(output, capacity, L"%s%s", directory, name);
    else
        (void)_snwprintf(output, capacity, L"%s\\%s", directory, name);
    output[capacity - 1u] = L'\0';
}

static int find_sfc_rom(const wchar_t *directory, wchar_t *path,
                        size_t capacity) {
    WIN32_FIND_DATAW entry;
    HANDLE search;
    wchar_t pattern[PATH_CAPACITY];
    wchar_t selected[MAX_PATH];
    if (!directory || !directory[0] || !path || capacity == 0u) return 0;
    path[0] = L'\0';
    selected[0] = L'\0';
    join_wide_path(pattern, sizeof(pattern) / sizeof(pattern[0]),
                   directory, L"*.sfc");
    search = FindFirstFileW(pattern, &entry);
    if (search == INVALID_HANDLE_VALUE) return 0;
    do {
        if ((entry.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) == 0u &&
            (!selected[0] || _wcsicmp(entry.cFileName, selected) < 0))
            copy_wide(selected, sizeof(selected) / sizeof(selected[0]),
                      entry.cFileName);
    } while (FindNextFileW(search, &entry));
    FindClose(search);
    if (!selected[0]) return 0;
    join_wide_path(path, capacity, directory, selected);
    return GetFileAttributesW(path) != INVALID_FILE_ATTRIBUTES;
}

static int load_battery_sram_file_win32(SimCityRecomp *game,
                                            const wchar_t *path,
                                            wchar_t *error,
                                            size_t error_capacity) {
    FILE *file;
    uint8_t image[SRAM_IMAGE_BYTES];
    size_t count;
    int trailing;
    char core_error[256];
    if (!game || !path || !path[0]) return 1;
    if (GetFileAttributesW(path) == INVALID_FILE_ATTRIBUTES) return 1;
    file = _wfopen(path, L"rb");
    if (!file) {
        copy_wide(error, error_capacity,
                  L"Unable to open the battery SRAM file.");
        return 0;
    }
    count = fread(image, 1u, sizeof(image), file);
    trailing = fgetc(file);
    if (ferror(file) || fclose(file) != 0 ||
        count != sizeof(image) || trailing != EOF) {
        copy_wide(error, error_capacity,
                  L"The battery SRAM file is not an exact 32 KiB image.");
        return 0;
    }
    memset(core_error, 0, sizeof(core_error));
    if (!simcity_recomp_sram_load(game, image, sizeof(image),
                                  core_error, sizeof(core_error))) {
        utf8_to_wide(core_error, error, error_capacity);
        return 0;
    }
    return 1;
}

static int flush_battery_sram_win32(int force, wchar_t *saved_path,
                                      size_t saved_capacity) {
    uint8_t image[SRAM_IMAGE_BYTES];
    wchar_t temporary[PATH_CAPACITY];
    FILE *file;
    int written;
    if (saved_path && saved_capacity) saved_path[0] = L'\0';
    if (!g_game || !g_sram_path[0]) return 1;
    if (!force && !simcity_recomp_sram_dirty(g_game)) return 1;
    if (!ensure_directory_tree(g_saves_directory) ||
        !simcity_recomp_sram_copy(g_game, image, sizeof(image))) return 0;
    written = _snwprintf(temporary,
                         sizeof(temporary) / sizeof(temporary[0]),
                         L"%s.tmp-%lu", g_sram_path,
                         (unsigned long)GetCurrentProcessId());
    if (written < 0 || (size_t)written >=
        sizeof(temporary) / sizeof(temporary[0])) return 0;
    file = _wfopen(temporary, L"wb");
    if (!file) return 0;
    if (fwrite(image, 1u, sizeof(image), file) != sizeof(image) ||
        fflush(file) != 0 || fclose(file) != 0 ||
        !MoveFileExW(temporary, g_sram_path,
                     MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) {
        (void)DeleteFileW(temporary);
        return 0;
    }
    simcity_recomp_sram_mark_clean(g_game);
    g_sram_last_flush_frame = simcity_recomp_current_frame(g_game);
    if (saved_path && saved_capacity)
        copy_wide(saved_path, saved_capacity, g_sram_path);
    return 1;
}

static void maybe_flush_battery_sram_win32(void) {
    uint32_t frame;
    if (!g_game || !simcity_recomp_sram_dirty(g_game)) return;
    frame = simcity_recomp_current_frame(g_game);
    if (frame - g_sram_last_flush_frame >= SRAM_FLUSH_INTERVAL_FRAMES)
        (void)flush_battery_sram_win32(0, NULL, 0u);
}


static void utf8_to_wide(const char *input, wchar_t *output, size_t capacity) {
    int converted;
    if (!output || capacity == 0u) return;
    output[0] = L'\0';
    if (!input || !input[0]) return;
    converted = MultiByteToWideChar(CP_UTF8, 0, input, -1,
                                    output, (int)capacity);
    if (converted <= 0) output[0] = L'\0';
    output[capacity - 1u] = L'\0';
}

static void notify_accessible_value(HWND control) {
    if (control)
        NotifyWinEvent(EVENT_OBJECT_VALUECHANGE, control,
                       OBJID_CLIENT, CHILDID_SELF);
}

static void notify_accessible_name(HWND control) {
    if (control)
        NotifyWinEvent(EVENT_OBJECT_NAMECHANGE, control,
                       OBJID_CLIENT, CHILDID_SELF);
}

static void set_accessible_control_text(HWND control,
                                        const wchar_t *text,
                                        int name_change) {
    if (!control) return;
    SetWindowTextW(control, text ? text : L"");
    if (name_change) notify_accessible_name(control);
    else notify_accessible_value(control);
}

static void set_status(const wchar_t *text) {
    set_accessible_control_text(g_status, text ? text : L"", 0);
}

static void set_status_utf8(const char *text) {
    wchar_t converted[512];
    utf8_to_wide(text, converted,
                 sizeof(converted) / sizeof(converted[0]));
    set_status(converted);
}

static uint16_t virtual_key_to_input(WPARAM key) {
    return simcity_frontend_settings_win32_input(&g_frontend_settings, (UINT)key);
}

static int keyboard_gameplay_active(void) {
    return g_frontend_settings.input_source == SIMCITY_INPUT_SOURCE_KEYBOARD ||
           !simcity_gamepad_win32_connected(&g_gamepad);
}

static uint16_t current_gameplay_input(void) {
    if (g_frontend_settings.input_source == SIMCITY_INPUT_SOURCE_GAMEPAD &&
        simcity_gamepad_win32_connected(&g_gamepad))
        return g_gamepad_input;
    return g_held_input;
}

static int read_rom_file(const wchar_t *path, uint8_t **rom,
                         size_t *rom_size, wchar_t *error,
                         size_t error_capacity) {
    FILE *file;
    uint8_t *buffer;
    size_t read_count;
    int trailing;
    if (!path || !path[0] || !rom || !rom_size) return 0;
    file = _wfopen(path, L"rb");
    if (!file) {
        copy_wide(error, error_capacity,
                  L"Unable to open the selected ROM file.");
        return 0;
    }
    buffer = (uint8_t *)malloc(SIMCITY_RECOMP_ROM_SIZE);
    if (!buffer) {
        (void)fclose(file);
        copy_wide(error, error_capacity,
                  L"Not enough memory to load the ROM.");
        return 0;
    }
    read_count = fread(buffer, 1u, SIMCITY_RECOMP_ROM_SIZE, file);
    trailing = fgetc(file);
    if (ferror(file) || fclose(file) != 0 ||
        read_count != SIMCITY_RECOMP_ROM_SIZE || trailing != EOF) {
        free(buffer);
        copy_wide(error, error_capacity,
                  L"The exact 524,288-byte SimCity (USA) ROM is required.");
        return 0;
    }
    *rom = buffer;
    *rom_size = read_count;
    return 1;
}

static DWORD WINAPI loader_thread_proc(LPVOID parameter) {
    LoaderRequest *request = (LoaderRequest *)parameter;
    wchar_t *path;
    LoaderResult *result = (LoaderResult *)calloc(1u, sizeof(*result));
    uint8_t *rom = NULL;
    size_t rom_size = 0u;
    char core_error[256];

    if (!request) {
        free(result);
        PostMessageW(g_window, WM_APP_LOAD_COMPLETE, 0, 0);
        return 1u;
    }
    path = request->path;
    if (!result) {
        free(path);
        free(request);
        PostMessageW(g_window, WM_APP_LOAD_COMPLETE, 0, 0);
        return 1u;
    }
    if (!read_rom_file(path, &rom, &rom_size, result->error,
                       sizeof(result->error) / sizeof(result->error[0]))) {
        free(path);
        free(request);
        PostMessageW(g_window, WM_APP_LOAD_COMPLETE, 0, (LPARAM)result);
        return 1u;
    }

    memset(core_error, 0, sizeof(core_error));
    if (!simcity_recomp_create(
            &result->game, rom, rom_size, core_error, sizeof(core_error))) {
        utf8_to_wide(core_error, result->error,
                     sizeof(result->error) / sizeof(result->error[0]));
    } else if (!load_battery_sram_file_win32(
                   result->game, request->sram_path, result->error,
                   sizeof(result->error) / sizeof(result->error[0]))) {
        simcity_recomp_destroy(result->game);
        result->game = NULL;
    } else if (GetFileAttributesW(request->sram_path) !=
               INVALID_FILE_ATTRIBUTES) {
        result->sram_loaded = 1;
    }
    free(rom);
    free(path);
    free(request);
    PostMessageW(g_window, WM_APP_LOAD_COMPLETE, 0, (LPARAM)result);
    return result->game ? 0u : 1u;
}

static int rom_path_known(void) {
    return g_rom_path && GetWindowTextLengthW(g_rom_path) > 0;
}

static void set_toolbar_visible(int visible) {
    int command = visible ? SW_SHOW : SW_HIDE;
    ShowWindow(g_browse_button, command);
    ShowWindow(g_pause_play_button, command);
    ShowWindow(g_reset_button, command);
    ShowWindow(g_keys_button, command);
    ShowWindow(g_audio_button, command);
    ShowWindow(g_fullscreen_checkbox, command);
    ShowWindow(g_auto_run_checkbox, command);
    ShowWindow(g_status, command);
}

static void restore_paused_presentation(void) {
    if (!g_presentation_hidden) return;
    if (g_fullscreen_active) {
        SetWindowLongW(g_window, GWL_STYLE, (LONG)g_saved_style);
        SetWindowLongW(g_window, GWL_EXSTYLE, (LONG)g_saved_ex_style);
        SetWindowPos(g_window, NULL, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER |
                     SWP_NOACTIVATE | SWP_FRAMECHANGED);
        g_fullscreen_active = 0;
    }
    SetWindowPlacement(g_window, &g_saved_placement);
    SetMenu(g_window, g_menu);
    set_toolbar_visible(1);
    g_presentation_hidden = 0;
    DrawMenuBar(g_window);
    InvalidateRect(g_window, NULL, TRUE);
}

static void apply_play_presentation(void) {
    MONITORINFO monitor_info;
    HMONITOR monitor;
    if (g_presentation_hidden) return;
    g_saved_style = (DWORD)GetWindowLongW(g_window, GWL_STYLE);
    g_saved_ex_style = (DWORD)GetWindowLongW(g_window, GWL_EXSTYLE);
    g_saved_placement.length = sizeof(g_saved_placement);
    GetWindowPlacement(g_window, &g_saved_placement);
    set_toolbar_visible(0);
    SetMenu(g_window, NULL);
    g_presentation_hidden = 1;
    if (SendMessageW(g_fullscreen_checkbox, BM_GETCHECK, 0, 0) == BST_CHECKED) {
        monitor = MonitorFromWindow(g_window, MONITOR_DEFAULTTONEAREST);
        ZeroMemory(&monitor_info, sizeof(monitor_info));
        monitor_info.cbSize = sizeof(monitor_info);
        if (GetMonitorInfoW(monitor, &monitor_info)) {
            SetWindowLongW(g_window, GWL_STYLE, WS_POPUP | WS_VISIBLE);
            SetWindowLongW(g_window, GWL_EXSTYLE,
                           (LONG)(g_saved_ex_style & ~WS_EX_WINDOWEDGE));
            SetWindowPos(g_window, HWND_TOP,
                         monitor_info.rcMonitor.left, monitor_info.rcMonitor.top,
                         monitor_info.rcMonitor.right - monitor_info.rcMonitor.left,
                         monitor_info.rcMonitor.bottom - monitor_info.rcMonitor.top,
                         SWP_FRAMECHANGED | SWP_SHOWWINDOW);
            g_fullscreen_active = 1;
        }
    } else {
        ShowWindow(g_window, SW_MAXIMIZE);
    }
    InvalidateRect(g_window, NULL, TRUE);
}

static void reset_game(void) {
    char error[256];
    if (!g_game) return;
    (void)flush_battery_sram_win32(1, NULL, 0u);
    pause_game(NULL);
    close_audio();
    memset(error, 0, sizeof(error));
    if (!simcity_recomp_reset(g_game, error, sizeof(error))) {
        set_status_utf8(error[0] ? error : "Unable to reset the ROM.");
        MessageBoxW(g_window, L"The ROM could not be reset.", APP_TITLE,
                    MB_OK | MB_ICONERROR);
        (void)open_audio(1);
        update_controls();
        return;
    }
    (void)open_audio(1);
    g_loaded_snapshot_slot = -1;
    set_status(L"ROM returned to the real cold-reset frame.");
    InvalidateRect(g_window, NULL, TRUE);
    play_game();
}

static void update_controls(void) {
    int loading = InterlockedCompareExchange(&g_loading, 0, 0) != 0;
    int browse_enabled = !loading && !g_game;
    EnableWindow(g_browse_button, browse_enabled);
    EnableWindow(g_pause_play_button, !loading && g_game != NULL);
    EnableWindow(g_reset_button, !loading && g_game != NULL);
    EnableWindow(g_keys_button, TRUE);
    EnableWindow(g_audio_button, !loading);
    EnableWindow(g_fullscreen_checkbox, !loading);
    EnableWindow(g_auto_run_checkbox, !loading);
    set_accessible_control_text(g_browse_button,
                                rom_path_known() ? L"&Run" : L"&Browse", 1);
    set_accessible_control_text(g_pause_play_button, L"&Play", 1);

    EnableMenuItem(g_menu, ID_BROWSE_MENU,
                   MF_BYCOMMAND | (browse_enabled ? MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_RUN,
                   MF_BYCOMMAND |
                   (!loading && rom_path_known() && !g_game ?
                    MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_RESET,
                   MF_BYCOMMAND | (!loading && g_game ? MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_PAUSE_PLAY,
                   MF_BYCOMMAND |
                   (!loading && g_game ? MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_AUDIO_SETTINGS,
                   MF_BYCOMMAND | (!loading ? MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_SNAPSHOT_SAVE_CURRENT,
                   MF_BYCOMMAND | (!loading && g_game ? MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_SNAPSHOT_LOAD_CURRENT,
                   MF_BYCOMMAND | (!loading && g_game ? MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_SNAPSHOT_SAVE,
                   MF_BYCOMMAND | (!loading && g_game ? MF_ENABLED : MF_GRAYED));
    EnableMenuItem(g_menu, ID_SNAPSHOT_LOAD,
                   MF_BYCOMMAND | (!loading && g_game ? MF_ENABLED : MF_GRAYED));
    CheckMenuItem(g_menu, ID_FULLSCREEN, MF_BYCOMMAND |
                  (SendMessageW(g_fullscreen_checkbox, BM_GETCHECK, 0, 0) ==
                   BST_CHECKED ? MF_CHECKED : MF_UNCHECKED));
    CheckMenuItem(g_menu, ID_AUTO_RUN, MF_BYCOMMAND |
                  (SendMessageW(g_auto_run_checkbox, BM_GETCHECK, 0, 0) ==
                   BST_CHECKED ? MF_CHECKED : MF_UNCHECKED));
    if (!g_presentation_hidden) DrawMenuBar(g_window);
}

static void close_audio(void) {
    simcity_audio_output_close(&g_audio_output);
    if (g_game) (void)simcity_recomp_audio_discard(g_game);
}

static int open_audio(int show_error) {
    wchar_t error[512];
    error[0] = L'\0';
    close_audio();
    if (!g_game || !g_audio_settings.enabled) return 1;
    if (!simcity_audio_output_open(&g_audio_output, &g_audio_settings,
                                   error,
                                   sizeof(error) / sizeof(error[0]))) {
        set_status(error[0] ? error : L"Unable to start audio output.");
        if (show_error) {
            MessageBoxW(g_window,
                        error[0] ? error : L"Unable to start audio output.",
                        L"Audio Settings", MB_OK | MB_ICONWARNING);
        }
        return 0;
    }
    return 1;
}

static void pause_game(const wchar_t *message) {
    simcity_audio_output_pause(&g_audio_output);
    if (g_game) (void)simcity_recomp_audio_discard(g_game);
    g_paused = 1;
    g_held_input = 0u;
    g_gamepad_input = 0u;
    restore_paused_presentation();
    SetWindowTextW(g_window, LAUNCHER_TITLE);
    if (message) set_status(message);
    update_controls();
    SetFocus(g_pause_play_button);
    NotifyWinEvent(EVENT_OBJECT_FOCUS, g_pause_play_button,
                   OBJID_CLIENT, CHILDID_SELF);
}


static void stop_game_on_core_failure(void) {
    /* The static machine must stop when it has no translated authority, but
       preserve the final game frame instead of restoring launcher controls,
       stealing focus, or displaying an unnecessary modal warning. */
    simcity_audio_output_pause(&g_audio_output);
    g_paused = 1;
    g_held_input = 0u;
    g_gamepad_input = 0u;
    set_status_utf8(simcity_recomp_last_error(g_game));
    InvalidateRect(g_window, NULL, FALSE);
    UpdateWindow(g_window);
    SetFocus(g_window);
}

static void play_game(void) {
    if (!g_game) return;
    g_paused = 0;
    SetWindowTextW(g_window, APP_TITLE);
    g_held_input = 0u;
    g_gamepad_input = 0u;
    simcity_audio_output_resume(&g_audio_output);
    reset_pacing_clock();
    if (simcity_audio_output_is_open(&g_audio_output)) {
        set_status(L"Running generated static S-CPU code with fail-closed Full Static audio at native NTSC timing.");
    } else {
        set_status(L"Running generated static code. Audio output is disabled in Audio Settings.");
    }
    update_controls();
    apply_play_presentation();
    SetFocus(g_window);
}

static void toggle_pause_play(void) {
    if (!g_game) return;
    if (g_paused) play_game();
    else pause_game(L"Paused. Choose Play or press Escape to continue.");
}

static void browse_for_rom(void) {
    OPENFILENAMEW dialog;
    wchar_t path[PATH_CAPACITY];
    wchar_t initial_directory[PATH_CAPACITY];
    wchar_t *slash;
    ZeroMemory(&dialog, sizeof(dialog));
    ZeroMemory(path, sizeof(path));
    ZeroMemory(initial_directory, sizeof(initial_directory));
    GetWindowTextW(g_rom_path, path,
                   (int)(sizeof(path) / sizeof(path[0])));
    if (path[0]) {
        copy_wide(initial_directory,
                  sizeof(initial_directory) / sizeof(initial_directory[0]),
                  path);
        slash = wcsrchr(initial_directory, L'\\');
        if (slash) *slash = L'\0';
    }
    if (!initial_directory[0])
        copy_wide(initial_directory,
                  sizeof(initial_directory) / sizeof(initial_directory[0]),
                  g_rom_directory);
    dialog.lStructSize = sizeof(dialog);
    dialog.hwndOwner = g_window;
    dialog.lpstrFilter =
        L"SNES ROM images (*.sfc)\0*.sfc\0"
        L"All files (*.*)\0*.*\0";
    dialog.lpstrFile = path;
    dialog.nMaxFile = (DWORD)(sizeof(path) / sizeof(path[0]));
    dialog.lpstrInitialDir = initial_directory;
    dialog.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST |
                   OFN_HIDEREADONLY;
    if (GetOpenFileNameW(&dialog)) {
        SetWindowTextW(g_rom_path, path);
        (void)WritePrivateProfileStringW(L"ROM", L"Path", path,
                                         g_frontend_ini_path);
        update_controls();
        if (g_frontend_settings.auto_run_on_load) {
            set_status(L"ROM selected. Starting now.");
            start_rom_load(1);
        } else {
            set_status(L"ROM selected. Choose Run or press F7.");
            update_controls();
            SetFocus(g_browse_button);
        }
    }
}

static void start_rom_load(int play_after_load) {
    int length;
    wchar_t *path;
    LoaderRequest *request;
    if (InterlockedCompareExchange(&g_loading, 0, 0) != 0) return;
    g_play_after_load = play_after_load != 0;
    length = GetWindowTextLengthW(g_rom_path);
    if (length <= 0) {
        browse_for_rom();
        return;
    }
    path = (wchar_t *)calloc((size_t)length + 1u, sizeof(*path));
    if (!path) {
        MessageBoxW(g_window, L"Not enough memory to start the loader.",
                    APP_TITLE, MB_OK | MB_ICONERROR);
        return;
    }
    GetWindowTextW(g_rom_path, path, length + 1);
    (void)flush_battery_sram_win32(1, NULL, 0u);
    request = (LoaderRequest *)calloc(1u, sizeof(*request));
    if (!request) {
        free(path);
        MessageBoxW(g_window, L"Not enough memory to start the loader.",
                    APP_TITLE, MB_OK | MB_ICONERROR);
        return;
    }
    request->path = path;
    copy_wide(request->sram_path,
              sizeof(request->sram_path) / sizeof(request->sram_path[0]),
              g_sram_path);
    g_resume_after_failed_load = g_game != NULL && !g_paused;
    pause_game(NULL);
    close_audio();
    InterlockedExchange(&g_loading, 1);
    set_status(L"Loading the ROM and advancing generated Full Static code to the title frame...");
    update_controls();
    g_loader_thread = CreateThread(NULL, 0u, loader_thread_proc,
                                   request, 0u, NULL);
    if (!g_loader_thread) {
        free(request->path);
        free(request);
        InterlockedExchange(&g_loading, 0);
        (void)open_audio(1);
        if (g_resume_after_failed_load) play_game();
        else {
            set_status(L"Unable to create the loader thread.");
            update_controls();
        }
    }
}


static int write_le16_file(FILE *file, uint16_t value) {
    uint8_t bytes[2] = {(uint8_t)value, (uint8_t)(value >> 8)};
    return fwrite(bytes, 1u, sizeof(bytes), file) == sizeof(bytes);
}

static int write_le32_file(FILE *file, uint32_t value) {
    uint8_t bytes[4] = {
        (uint8_t)value, (uint8_t)(value >> 8),
        (uint8_t)(value >> 16), (uint8_t)(value >> 24)
    };
    return fwrite(bytes, 1u, sizeof(bytes), file) == sizeof(bytes);
}

static int save_bgra_bmp(const wchar_t *path, const uint8_t *pixels,
                         int width, int height, int stride) {
    FILE *file;
    uint32_t row_stride;
    uint32_t pixel_bytes;
    uint32_t file_size;
    int y;
    if (!path || !pixels || width <= 0 || height <= 0 || stride <= 0) return 0;
    row_stride = ((uint32_t)width * 3u + 3u) & ~3u;
    pixel_bytes = row_stride * (uint32_t)height;
    file_size = 14u + 40u + pixel_bytes;
    file = _wfopen(path, L"wb");
    if (!file) return 0;
    if (fwrite("BM", 1u, 2u, file) != 2u ||
        !write_le32_file(file, file_size) ||
        !write_le16_file(file, 0u) || !write_le16_file(file, 0u) ||
        !write_le32_file(file, 54u) || !write_le32_file(file, 40u) ||
        !write_le32_file(file, (uint32_t)width) ||
        !write_le32_file(file, (uint32_t)height) ||
        !write_le16_file(file, 1u) || !write_le16_file(file, 24u) ||
        !write_le32_file(file, 0u) || !write_le32_file(file, pixel_bytes) ||
        !write_le32_file(file, 2835u) || !write_le32_file(file, 2835u) ||
        !write_le32_file(file, 0u) || !write_le32_file(file, 0u)) {
        (void)fclose(file);
        (void)DeleteFileW(path);
        return 0;
    }
    for (y = height - 1; y >= 0; --y) {
        const uint8_t *row = pixels + (size_t)y * (size_t)stride;
        uint32_t written = 0u;
        int x;
        for (x = 0; x < width; ++x) {
            const uint8_t bgr[3] = {row[x * 4], row[x * 4 + 1], row[x * 4 + 2]};
            if (fwrite(bgr, 1u, sizeof(bgr), file) != sizeof(bgr)) {
                (void)fclose(file);
                (void)DeleteFileW(path);
                return 0;
            }
            written += 3u;
        }
        while (written < row_stride) {
            if (fputc(0, file) == EOF) {
                (void)fclose(file);
                (void)DeleteFileW(path);
                return 0;
            }
            ++written;
        }
    }
    if (fclose(file) != 0) {
        (void)DeleteFileW(path);
        return 0;
    }
    return 1;
}

static int capture_window_screenshot_to(const wchar_t *base_directory,
                                        wchar_t *saved_path,
                                        size_t saved_capacity) {
    HWND target_window = GetForegroundWindow();
    RECT rectangle;
    int width, height;
    HDC window_dc = NULL;
    HDC memory_dc = NULL;
    HBITMAP bitmap = NULL;
    HGDIOBJ old_bitmap = NULL;
    BITMAPINFO info;
    uint8_t *pixels = NULL;
    wchar_t directory[PATH_CAPACITY];
    wchar_t path[PATH_CAPACITY];
    SYSTEMTIME now;
    uint32_t frame = g_game ? simcity_recomp_current_frame(g_game) : 0u;
    int success = 0;
    if (saved_path && saved_capacity) saved_path[0] = L'\0';
    if (!target_window ||
        (target_window != g_window && GetWindow(target_window, GW_OWNER) != g_window))
        target_window = g_window;
    if (!GetWindowRect(target_window, &rectangle)) return 0;
    width = rectangle.right - rectangle.left;
    height = rectangle.bottom - rectangle.top;
    if (width <= 0 || height <= 0) return 0;
    window_dc = GetWindowDC(target_window);
    if (!window_dc) goto cleanup;
    memory_dc = CreateCompatibleDC(window_dc);
    bitmap = CreateCompatibleBitmap(window_dc, width, height);
    if (!memory_dc || !bitmap) goto cleanup;
    old_bitmap = SelectObject(memory_dc, bitmap);
    if (!PrintWindow(target_window, memory_dc, 2u) &&
        !BitBlt(memory_dc, 0, 0, width, height, window_dc, 0, 0, SRCCOPY))
        goto cleanup;
    ZeroMemory(&info, sizeof(info));
    info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    info.bmiHeader.biWidth = width;
    info.bmiHeader.biHeight = -height;
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    pixels = (uint8_t *)malloc((size_t)width * (size_t)height * 4u);
    if (!pixels || !GetDIBits(memory_dc, bitmap, 0u, (UINT)height, pixels,
                              &info, DIB_RGB_COLORS)) goto cleanup;
    if (base_directory && base_directory[0])
        join_wide_path(directory, PATH_CAPACITY, base_directory, L"Screenshots");
    else
        join_wide_path(directory, PATH_CAPACITY, g_executable_directory,
                       L"Screenshots");
    if (!ensure_directory_tree(directory)) goto cleanup;
    GetLocalTime(&now);
    (void)_snwprintf(path, PATH_CAPACITY,
               L"%s\\simcity-window-frame-%08u-%04u%02u%02u-%02u%02u%02u-%03u.bmp",
               directory, frame, (unsigned)now.wYear, (unsigned)now.wMonth,
               (unsigned)now.wDay, (unsigned)now.wHour, (unsigned)now.wMinute,
               (unsigned)now.wSecond, (unsigned)now.wMilliseconds);
    path[PATH_CAPACITY - 1u] = L'\0';
    if (!save_bgra_bmp(path, pixels, width, height, width * 4)) goto cleanup;
    if (saved_path && saved_capacity)
        copy_wide(saved_path, saved_capacity, path);
    success = 1;
cleanup:
    free(pixels);
    if (old_bitmap) SelectObject(memory_dc, old_bitmap);
    if (bitmap) DeleteObject(bitmap);
    if (memory_dc) DeleteDC(memory_dc);
    if (window_dc) ReleaseDC(target_window, window_dc);
    return success;
}

static void capture_window_screenshot(void) {
    wchar_t path[PATH_CAPACITY];
    wchar_t status[PATH_CAPACITY + 128u];
    uint32_t frame = g_game ? simcity_recomp_current_frame(g_game) : 0u;
    if (!capture_window_screenshot_to(NULL, path,
                                      sizeof(path) / sizeof(path[0]))) {
        set_status(L"Unable to save the whole-window screenshot.");
        return;
    }
    (void)_snwprintf(status, sizeof(status) / sizeof(status[0]),
                     L"Whole-window screenshot saved at frame %u: %s",
                     frame, path);
    status[(sizeof(status) / sizeof(status[0])) - 1u] = L'\0';
    set_status(status);
}

static void show_key_bindings(void) {
    int resume_after = g_game && !g_paused;
    if (resume_after) pause_game(L"Paused while Controller Bindings is open.");
    if (simcity_frontend_controls_win32_dialog(
            g_window, g_instance, &g_frontend_settings, &g_gamepad)) {
        if (!simcity_frontend_settings_win32_save(
                &g_frontend_settings, g_frontend_ini_path))
            set_status(L"Control settings changed, but the settings file could not be written.");
        else set_status(L"Control settings changed and saved.");
    }
    if (resume_after && g_game) play_game();
}

static void show_game_controls(void) {
    wchar_t key_name[SIMCITY_WIN_BINDING_COUNT][64];
    wchar_t message[4096];
    int index;
    for (index = 0; index < SIMCITY_WIN_BINDING_COUNT; ++index)
        simcity_frontend_settings_win32_key_name(
            g_frontend_settings.bindings[index], key_name[index], 64u);
    (void)_snwprintf(message, sizeof(message) / sizeof(message[0]),
        L"SimCity SNES controls and current keyboard bindings\r\n\r\n"
        L"D-pad: move the map cursor and navigate menus. Current keys: Up %s, Down %s, Left %s, Right %s.\r\n"
        L"SNES B: select an item, confirm, and build or place it. Current key: %s.\r\n"
        L"Select: switch between the map and the side toolbar. Current key: %s.\r\n"
        L"Start: open the top menu bar. Current key: %s.\r\n"
        L"SNES X: cancel, go back, or hide and restore interface bars where supported. Current key: %s.\r\n"
        L"SNES A or Y plus a D-pad direction: rapidly scroll the map. Current keys: A %s; Y %s.\r\n"
        L"SNES L and R: game shoulder controls where a screen supports them. Current keys: L %s; R %s.\r\n\r\n"
        L"All twelve bindings can be changed using the Keys toolbar button or Settings, Key Bindings.",
        key_name[SC_WIN_BIND_UP], key_name[SC_WIN_BIND_DOWN],
        key_name[SC_WIN_BIND_LEFT], key_name[SC_WIN_BIND_RIGHT],
        key_name[SC_WIN_BIND_SNES_B], key_name[SC_WIN_BIND_SELECT],
        key_name[SC_WIN_BIND_START], key_name[SC_WIN_BIND_SNES_X],
        key_name[SC_WIN_BIND_SNES_A], key_name[SC_WIN_BIND_SNES_Y],
        key_name[SC_WIN_BIND_SNES_L], key_name[SC_WIN_BIND_SNES_R]);
    message[(sizeof(message) / sizeof(message[0])) - 1u] = L'\0';
    MessageBoxW(g_window, message, L"SimCity SNES Controls",
                MB_OK | MB_ICONINFORMATION);
}

static const wchar_t g_welcome_text[] =
    L"This launcher runs the statically recompiled Super Nintendo version of SimCity\r\n\r\n"
    L"Essential launcher shortcuts\r\n"
    L"Ctrl+O - Browse for a ROM\r\n"
    L"Escape - Move between the launcher and game\r\n"
    L"1 - Save current Snapshot\r\n"
    L"2 - Load current Snapshot\r\n\r\n"
    L"F1 - Launcher Shortcut Keys\r\n"
    L"F2 - Save Snapshot window\r\n"
    L"F3 - Load Snapshot window\r\n"
    L"F4 - Audio settings\r\n"
    L"F5 - Settings\r\n"
    L"F6 - Controller bindings\r\n"
    L"F7 - Run selected ROM\r\n"
    L"F8 - Capture game window\r\n"
    L"F9 - Start or stop audio recording";

static void show_shortcuts(void) {
    int resume_after = g_game && !g_paused;
    if (resume_after) pause_game(L"Paused while Launcher Shortcut Keys is open.");
    show_information_window(L"Launcher Shortcut Keys", g_welcome_text, 680, 520);
    if (resume_after && g_game) play_game();
}

static void show_frontend_settings(void) {
    int resume_after = g_game && !g_paused;
    if (resume_after) pause_game(L"Paused while Settings is open.");
    if (simcity_frontend_settings_win32_dialog(
            g_window, g_instance, &g_frontend_settings)) {
        if (!simcity_frontend_settings_win32_save(
                &g_frontend_settings, g_frontend_ini_path))
            set_status(L"Settings changed, but the settings file could not be written.");
        else set_status(L"Settings changed and saved.");
            SendMessageW(g_auto_run_checkbox, BM_SETCHECK,
                         g_frontend_settings.auto_run_on_load ?
                         BST_CHECKED : BST_UNCHECKED, 0);
            update_controls();
            InvalidateRect(g_window, NULL, TRUE);
    }
    if (resume_after && g_game) play_game();
}

static int ensure_snapshot_directory(wchar_t *directory, size_t capacity) {
    DWORD attributes;
    _snwprintf(directory, capacity, L"%s\\Snapshots", g_executable_directory);
    directory[capacity - 1u] = L'\0';
    if (!CreateDirectoryW(directory, NULL)) {
        DWORD error = GetLastError();
        if (error != ERROR_ALREADY_EXISTS) return 0;
    }
    attributes = GetFileAttributesW(directory);
    return attributes != INVALID_FILE_ATTRIBUTES &&
           (attributes & FILE_ATTRIBUTE_DIRECTORY) != 0;
}

static int snapshot_slot_path(int slot, wchar_t *path, size_t capacity) {
    wchar_t directory[PATH_CAPACITY];
    if (slot < 1 || slot > 5 ||
        !ensure_snapshot_directory(directory,
                                   sizeof(directory) / sizeof(directory[0]))) {
        if (capacity) path[0] = L'\0';
        return 0;
    }
    _snwprintf(path, capacity, L"%s\\snapshot-slot-%d.scsnap",
               directory, slot);
    path[capacity - 1u] = L'\0';
    return 1;
}

static int snapshot_slot_exists(int slot) {
    wchar_t path[PATH_CAPACITY];
    DWORD attributes;
    if (!snapshot_slot_path(slot, path,
                            sizeof(path) / sizeof(path[0]))) return 0;
    attributes = GetFileAttributesW(path);
    return attributes != INVALID_FILE_ATTRIBUTES &&
           (attributes & FILE_ATTRIBUTE_DIRECTORY) == 0;
}

static void snapshot_slot_description(int slot, int load_mode,
                                      wchar_t *text, size_t capacity) {
    wchar_t path[PATH_CAPACITY];
    WIN32_FILE_ATTRIBUTE_DATA data;
    FILETIME local_file_time;
    SYSTEMTIME time;
    wchar_t date_text[64];
    wchar_t time_text[64];
    if (!snapshot_slot_path(slot, path,
                            sizeof(path) / sizeof(path[0])) ||
        !GetFileAttributesExW(path, GetFileExInfoStandard, &data)) {
        _snwprintf(text, capacity, load_mode ?
                   L"Empty slot - Not loaded" : L"Empty slot");
        text[capacity - 1u] = L'\0';
        return;
    }
    if (!FileTimeToLocalFileTime(&data.ftLastWriteTime, &local_file_time) ||
        !FileTimeToSystemTime(&local_file_time, &time)) {
        copy_wide(date_text, sizeof(date_text) / sizeof(date_text[0]),
                  L"Date unavailable");
        time_text[0] = L'\0';
    } else {
        if (!GetDateFormatW(LOCALE_USER_DEFAULT, DATE_SHORTDATE, &time,
                            NULL, date_text,
                            (int)(sizeof(date_text) / sizeof(date_text[0]))))
            copy_wide(date_text, sizeof(date_text) / sizeof(date_text[0]),
                      L"Date unavailable");
        if (!GetTimeFormatW(LOCALE_USER_DEFAULT, TIME_NOSECONDS, &time,
                            NULL, time_text,
                            (int)(sizeof(time_text) / sizeof(time_text[0]))))
            time_text[0] = L'\0';
    }
    if (load_mode) {
        _snwprintf(text, capacity, L"Saved %s %s - %s",
                   date_text, time_text,
                   g_loaded_snapshot_slot == slot ? L"Loaded" : L"Not loaded");
    } else {
        _snwprintf(text, capacity, L"Saved %s %s", date_text, time_text);
    }
    text[capacity - 1u] = L'\0';
}

static int save_snapshot_slot(int slot) {
    wchar_t path[PATH_CAPACITY];
    wchar_t status[PATH_CAPACITY + 128];
    char narrow_path[PATH_CAPACITY * 3];
    char error[256];
    if (slot < 1 || slot > 5) slot = 1;
    g_frontend_settings.snapshot_slot = slot;
    (void)simcity_frontend_settings_win32_save(
        &g_frontend_settings, g_frontend_ini_path);
    if (!snapshot_slot_path(slot, path,
                            sizeof(path) / sizeof(path[0]))) {
        set_status(L"The Snapshots folder could not be created beside Launcher.exe.");
        return 0;
    }
    if (!WideCharToMultiByte(CP_UTF8, 0, path, -1, narrow_path,
                             (int)sizeof(narrow_path), NULL, NULL)) {
        set_status(L"The snapshot path could not be converted to UTF-8.");
        return 0;
    }
    if (!simcity_recomp_snapshot_save(g_game, narrow_path, error,
                                      sizeof(error))) {
        set_status_utf8(error[0] ? error : "Snapshot save failed.");
        return 0;
    }
    _snwprintf(status, sizeof(status) / sizeof(status[0]),
               L"Snapshot slot %d saved at frame %u: %s", slot,
               simcity_recomp_current_frame(g_game), path);
    status[(sizeof(status) / sizeof(status[0])) - 1u] = L'\0';
    set_status(status);
    return 1;
}

static int load_snapshot_slot(int slot) {
    wchar_t path[PATH_CAPACITY];
    wchar_t status[160];
    char narrow_path[PATH_CAPACITY * 3];
    char error[256];
    if (slot < 1 || slot > 5) slot = 1;
    g_frontend_settings.snapshot_slot = slot;
    (void)simcity_frontend_settings_win32_save(
        &g_frontend_settings, g_frontend_ini_path);
    if (!snapshot_slot_exists(slot)) {
        _snwprintf(status, sizeof(status) / sizeof(status[0]),
                   L"Snapshot slot %d is empty.", slot);
        status[(sizeof(status) / sizeof(status[0])) - 1u] = L'\0';
        set_status(status);
        MessageBeep(MB_ICONWARNING);
        return 0;
    }
    if (!snapshot_slot_path(slot, path,
                            sizeof(path) / sizeof(path[0])) ||
        !WideCharToMultiByte(CP_UTF8, 0, path, -1, narrow_path,
                             (int)sizeof(narrow_path), NULL, NULL)) {
        set_status(L"The snapshot path could not be converted to UTF-8.");
        return 0;
    }
    close_audio();
    if (!simcity_recomp_snapshot_load(g_game, narrow_path, error,
                                      sizeof(error))) {
        set_status_utf8(error[0] ? error : "Snapshot load failed.");
        (void)open_audio(1);
        simcity_audio_output_pause(&g_audio_output);
        return 0;
    }
    (void)simcity_recomp_audio_discard(g_game);
    (void)open_audio(1);
    simcity_audio_output_pause(&g_audio_output);
    g_loaded_snapshot_slot = slot;
    _snwprintf(status, sizeof(status) / sizeof(status[0]),
               L"Snapshot slot %d loaded at frame %u.", slot,
               simcity_recomp_current_frame(g_game));
    status[(sizeof(status) / sizeof(status[0])) - 1u] = L'\0';
    set_status(status);
    InvalidateRect(g_window, NULL, TRUE);
    return 1;
}

static SnapshotDialogState *snapshot_dialog_state(HWND window) {
    return (SnapshotDialogState *)GetWindowLongPtrW(window, GWLP_USERDATA);
}

static void refresh_snapshot_dialog(HWND window,
                                    SnapshotDialogState *state) {
    int slot;
    wchar_t description[192];
    if (!state) return;
    for (slot = 1; slot <= 5; ++slot) {
        snapshot_slot_description(slot, !state->save_mode,
                                  description,
                                  sizeof(description) / sizeof(description[0]));
        set_accessible_control_text(state->slot_labels[slot - 1],
                                    description, 0);
        EnableWindow(state->slot_buttons[slot - 1],
                     state->save_mode || snapshot_slot_exists(slot));
        InvalidateRect(state->slot_labels[slot - 1], NULL, TRUE);
    }
    InvalidateRect(window, NULL, TRUE);
}

static void snapshot_dialog_layout(HWND window,
                                   SnapshotDialogState *state) {
    RECT client;
    int width;
    int height;
    int slot;
    int row_y;
    if (!state) return;
    GetClientRect(window, &client);
    width = client.right - client.left;
    height = client.bottom - client.top;
    MoveWindow(state->instructions, 18, 16, width - 36, 54, TRUE);
    for (slot = 0; slot < 5; ++slot) {
        row_y = 82 + slot * 52;
        MoveWindow(state->slot_buttons[slot], 24, row_y, 62, 34, TRUE);
        MoveWindow(state->slot_labels[slot], 104, row_y + 6,
                   width - 128, 26, TRUE);
    }
    MoveWindow(state->result, 24, height - 94,
               width - 48, 30, TRUE);
    MoveWindow(state->close_button, width / 2 - 58,
               height - 50, 116, 34, TRUE);
}

static LRESULT CALLBACK snapshot_dialog_proc(HWND window, UINT message,
                                              WPARAM wparam, LPARAM lparam) {
    SnapshotDialogState *state = snapshot_dialog_state(window);
    switch (message) {
        case WM_NCCREATE:
            SetWindowLongPtrW(window, GWLP_USERDATA,
                (LONG_PTR)((CREATESTRUCTW *)lparam)->lpCreateParams);
            return TRUE;
        case WM_CREATE: {
            int slot;
            wchar_t label[8];
            state = snapshot_dialog_state(window);
            SetWindowTextW(window, state->save_mode ?
                           L"Save Snapshot" : L"Load Snapshot");
            state->instructions = CreateWindowExW(
                0, L"STATIC",
                state->save_mode ?
                L"Choose a numbered slot to save the current paused game. The Snapshots folder is created beside Launcher.exe when needed." :
                L"Choose a numbered slot to load. Green means currently loaded; red means not loaded. Empty slots are disabled.",
                WS_CHILD | WS_VISIBLE | SS_LEFT,
                0, 0, 10, 10, window,
                (HMENU)(INT_PTR)ID_SNAPSHOT_INSTRUCTIONS,
                g_instance, NULL);
            set_control_font(state->instructions);
            for (slot = 1; slot <= 5; ++slot) {
                _snwprintf_s(label, sizeof(label) / sizeof(label[0]),
                             _TRUNCATE, L"&%d", slot);
                state->slot_buttons[slot - 1] = CreateWindowExW(
                    0, L"BUTTON", label,
                    WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                    0, 0, 10, 10, window,
                    (HMENU)(INT_PTR)(ID_SNAPSHOT_SLOT_BASE + slot - 1),
                    g_instance, NULL);
                state->slot_labels[slot - 1] = CreateWindowExW(
                    0, L"STATIC", L"",
                    WS_CHILD | WS_VISIBLE | SS_LEFT | SS_CENTERIMAGE,
                    0, 0, 10, 10, window,
                    (HMENU)(INT_PTR)(ID_SNAPSHOT_LABEL_BASE + slot - 1),
                    g_instance, NULL);
                set_control_font(state->slot_buttons[slot - 1]);
                set_control_font(state->slot_labels[slot - 1]);
            }
            state->result = CreateWindowExW(
                0, L"STATIC",
                L"No snapshot action has been performed.",
                WS_CHILD | WS_VISIBLE | SS_LEFT | SS_CENTERIMAGE,
                0, 0, 10, 10, window,
                (HMENU)(INT_PTR)ID_STATUS,
                g_instance, NULL);
            state->close_button = CreateWindowExW(
                0, L"BUTTON", L"&Close",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                0, 0, 10, 10, window,
                (HMENU)(INT_PTR)ID_SNAPSHOT_CLOSE,
                g_instance, NULL);
            set_control_font(state->result);
            set_control_font(state->close_button);
            snapshot_dialog_layout(window, state);
            refresh_snapshot_dialog(window, state);
            slot = g_frontend_settings.snapshot_slot;
            if (slot < 1 || slot > 5) slot = 1;
            SetFocus(state->slot_buttons[slot - 1]);
            return 0;
        }
        case WM_SIZE:
            snapshot_dialog_layout(window, state);
            return 0;
        case WM_CTLCOLOREDIT:
        case WM_CTLCOLORSTATIC:
            if (state && !state->save_mode) {
                int id = GetDlgCtrlID((HWND)lparam);
                if (id >= ID_SNAPSHOT_LABEL_BASE &&
                    id < ID_SNAPSHOT_LABEL_BASE + 5) {
                    int slot = id - ID_SNAPSHOT_LABEL_BASE + 1;
                    HDC dc = (HDC)wparam;
                    SetBkMode(dc, TRANSPARENT);
                    SetTextColor(dc, g_loaded_snapshot_slot == slot ?
                                 RGB(0, 120, 35) : RGB(190, 0, 0));
                    return (LRESULT)GetSysColorBrush(COLOR_WINDOW);
                }
            }
            break;
        case WM_COMMAND: {
            int id = LOWORD(wparam);
            if (id >= ID_SNAPSHOT_SLOT_BASE &&
                id < ID_SNAPSHOT_SLOT_BASE + 5 && state) {
                int slot = id - ID_SNAPSHOT_SLOT_BASE + 1;
                int succeeded;
                wchar_t result_text[PATH_CAPACITY + 160];
                if (state->save_mode)
                    succeeded = save_snapshot_slot(slot);
                else
                    succeeded = load_snapshot_slot(slot);
                if (succeeded) {
                    if (!state->save_mode) state->run_after_action = 1;
                    DestroyWindow(window);
                    return 0;
                }
                refresh_snapshot_dialog(window, state);
                GetWindowTextW(g_status, result_text,
                               (int)(sizeof(result_text) /
                                     sizeof(result_text[0])));
                set_accessible_control_text(state->result, result_text, 0);
                return 0;
            }
            if (id == ID_SNAPSHOT_CLOSE) {
                DestroyWindow(window);
                return 0;
            }
            break;
        }
        case WM_KEYDOWN:
            if (wparam == VK_ESCAPE) {
                DestroyWindow(window);
                return 0;
            }
            if (wparam >= '1' && wparam <= '5') {
                SendMessageW(window, WM_COMMAND,
                    ID_SNAPSHOT_SLOT_BASE + (wparam - '1'), 0);
                return 0;
            }
            break;
        case WM_CLOSE:
            DestroyWindow(window);
            return 0;
        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static void show_snapshot_window(int save_mode) {
    SnapshotDialogState state;
    HWND dialog;
    MSG message;
    int message_result = 1;
    wchar_t directory[PATH_CAPACITY];
    ZeroMemory(&message, sizeof(message));
    if (!g_game) {
        set_status(L"Load and run the ROM before using snapshots.");
        MessageBeep(MB_ICONWARNING);
        return;
    }
    if (!ensure_snapshot_directory(directory,
                                   sizeof(directory) / sizeof(directory[0]))) {
        MessageBoxW(g_window,
            L"The Snapshots folder could not be created beside Launcher.exe.",
            APP_TITLE, MB_OK | MB_ICONERROR);
        return;
    }
    ZeroMemory(&state, sizeof(state));
    state.save_mode = save_mode;
    state.resume_after = !g_paused;
    if (state.resume_after)
        pause_game(L"Paused while the Snapshot window is open.");
    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        SNAPSHOT_CLASS_NAME,
        save_mode ? L"Save Snapshot" : L"Load Snapshot",
        WS_CAPTION | WS_SYSMENU | WS_POPUP | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT, 720, 480,
        g_window, NULL, g_instance, &state);
    if (!dialog) {
        if (state.resume_after) play_game();
        return;
    }
    center_window_on_parent(dialog, g_window);
    EnableWindow(g_window, FALSE);
    while (IsWindow(dialog) &&
           (message_result = GetMessageW(&message, NULL, 0, 0)) > 0) {
        if (message.message == WM_KEYDOWN && message.wParam == VK_TAB) {
            HWND next = GetNextDlgTabItem(
                dialog, GetFocus(),
                (GetKeyState(VK_SHIFT) & 0x8000) != 0);
            if (IsWindow(next)) SetFocus(next);
            continue;
        }
        if (!IsDialogMessageW(dialog, &message)) {
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }
    }
    EnableWindow(g_window, TRUE);
    SetForegroundWindow(g_window);
    if ((state.resume_after || state.run_after_action) && g_game) play_game();
    else {
        set_status(L"Snapshot window closed. The game remains paused.");
        update_controls();
    }
    if (message_result == 0) PostQuitMessage((int)message.wParam);
}

static InfoDialogState *info_dialog_state(HWND window) {
    return (InfoDialogState *)GetWindowLongPtrW(window, GWLP_USERDATA);
}

static void info_dialog_layout(HWND window, InfoDialogState *state) {
    RECT client;
    int width;
    int height;
    if (!state) return;
    GetClientRect(window, &client);
    width = client.right - client.left;
    height = client.bottom - client.top;
    MoveWindow(state->text, 16, 16, width - 32, height - 78, TRUE);
    MoveWindow(state->close_button, width / 2 - 58,
               height - 48, 116, 32, TRUE);
}

static LRESULT CALLBACK info_dialog_proc(HWND window, UINT message,
                                         WPARAM wparam, LPARAM lparam) {
    InfoDialogState *state = info_dialog_state(window);
    switch (message) {
        case WM_NCCREATE:
            SetWindowLongPtrW(window, GWLP_USERDATA,
                (LONG_PTR)((CREATESTRUCTW *)lparam)->lpCreateParams);
            return TRUE;
        case WM_CREATE:
            state = info_dialog_state(window);
            state->text = CreateWindowExW(
                WS_EX_CLIENTEDGE, L"EDIT", state->body,
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | ES_LEFT |
                ES_MULTILINE | ES_READONLY | ES_AUTOVSCROLL | WS_VSCROLL,
                0, 0, 10, 10, window,
                (HMENU)(INT_PTR)ID_INFO_TEXT, g_instance, NULL);
            state->close_button = CreateWindowExW(
                0, L"BUTTON", L"&Close",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                0, 0, 10, 10, window,
                (HMENU)(INT_PTR)ID_INFO_CLOSE, g_instance, NULL);
            set_control_font(state->text);
            set_control_font(state->close_button);
            info_dialog_layout(window, state);
            notify_accessible_value(state->text);
            SetFocus(state->text);
            NotifyWinEvent(EVENT_OBJECT_FOCUS, state->text,
                           OBJID_CLIENT, CHILDID_SELF);
            return 0;
        case WM_SIZE:
            info_dialog_layout(window, state);
            return 0;
        case WM_COMMAND:
            if (LOWORD(wparam) == ID_INFO_CLOSE) {
                DestroyWindow(window);
                return 0;
            }
            break;
        case WM_KEYDOWN:
            if (wparam == VK_ESCAPE) {
                DestroyWindow(window);
                return 0;
            }
            break;
        case WM_CLOSE:
            DestroyWindow(window);
            return 0;
        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static void show_information_window(const wchar_t *title,
                                    const wchar_t *body,
                                    int width, int height) {
    InfoDialogState state;
    HWND dialog;
    MSG message;
    int message_result = 1;
    ZeroMemory(&message, sizeof(message));
    ZeroMemory(&state, sizeof(state));
    state.body = body;
    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        INFO_CLASS_NAME, title,
        WS_CAPTION | WS_SYSMENU | WS_POPUP | WS_VISIBLE | WS_THICKFRAME,
        CW_USEDEFAULT, CW_USEDEFAULT, width, height,
        g_window, NULL, g_instance, &state);
    if (!dialog) return;
    SetWindowTextW(dialog, title);
    center_window_on_parent(dialog, g_window);
    EnableWindow(g_window, FALSE);
    while (IsWindow(dialog) &&
           (message_result = GetMessageW(&message, NULL, 0, 0)) > 0) {
        if (!IsDialogMessageW(dialog, &message)) {
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }
    }
    EnableWindow(g_window, TRUE);
    SetForegroundWindow(g_window);
    if (message_result == 0) PostQuitMessage((int)message.wParam);
}

static HWND create_getting_started_text(HWND parent, const wchar_t *text,
                                        int x, int y, int width, int height,
                                        HFONT font) {
    HWND control = CreateWindowExW(
        WS_EX_CLIENTEDGE, L"EDIT", text,
        WS_CHILD | WS_VISIBLE | WS_TABSTOP | ES_LEFT | ES_MULTILINE |
        ES_READONLY | ES_AUTOVSCROLL | WS_VSCROLL,
        x, y, width, height, parent, NULL, g_instance, NULL);
    if (control && font)
        SendMessageW(control, WM_SETFONT, (WPARAM)font, TRUE);
    if (control) notify_accessible_value(control);
    return control;
}

static HWND create_getting_started_heading(HWND parent, const wchar_t *text,
                                           int x, int y, int width, int height,
                                           HFONT font) {
    HWND control = CreateWindowExW(
        0, L"STATIC", text,
        WS_CHILD | WS_VISIBLE | SS_LEFT | SS_NOPREFIX,
        x, y, width, height, parent, NULL, g_instance, NULL);
    if (control && font)
        SendMessageW(control, WM_SETFONT, (WPARAM)font, TRUE);
    return control;
}

static LRESULT CALLBACK getting_started_dialog_proc(
    HWND window, UINT message, WPARAM wparam, LPARAM lparam) {
    GettingStartedDialogState *state =
        (GettingStartedDialogState *)GetWindowLongPtrW(window, GWLP_USERDATA);
    switch (message) {
        case WM_NCCREATE:
            SetWindowLongPtrW(window, GWLP_USERDATA,
                (LONG_PTR)((CREATESTRUCTW *)lparam)->lpCreateParams);
            return TRUE;
        case WM_CREATE: {
            HDC dc;
            int dpi = 96;
            RECT client;
            state = (GettingStartedDialogState *)GetWindowLongPtrW(
                window, GWLP_USERDATA);
            dc = GetDC(window);
            if (dc) {
                dpi = GetDeviceCaps(dc, LOGPIXELSY);
                ReleaseDC(window, dc);
            }
            state->heading_font = CreateFontW(
                -MulDiv(19, dpi, 72), 0, 0, 0, FW_SEMIBOLD, FALSE, FALSE,
                FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
                DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
            state->body_font = CreateFontW(
                -MulDiv(10, dpi, 72), 0, 0, 0, FW_NORMAL, FALSE, FALSE,
                FALSE, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
                DEFAULT_PITCH | FF_DONTCARE, L"Segoe UI");
            GetClientRect(window, &client);

            create_getting_started_heading(
                window, L"Welcome", 24, 16, 760, 34,
                state->heading_font);
            state->text = create_getting_started_text(
                window,
                g_welcome_text,
                20, 56, 780, 554, state->body_font);
            if (state->text) SendMessageW(state->text, EM_SETSEL, 0, 0);
            state->close_button = CreateWindowExW(
                0, L"BUTTON", L"&Close",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                ((client.right - client.left) - 120) / 2,
                (client.bottom - client.top) - 48, 120, 34, window,
                (HMENU)(INT_PTR)ID_GETTING_STARTED_CLOSE,
                g_instance, NULL);
            if (state->close_button)
                SendMessageW(state->close_button, WM_SETFONT,
                             (WPARAM)state->body_font, TRUE);
            if (state->text) {
                SetFocus(state->text);
                NotifyWinEvent(EVENT_OBJECT_FOCUS, state->text,
                               OBJID_CLIENT, CHILDID_SELF);
            } else if (state->close_button) {
                SetFocus(state->close_button);
            }
            return 0;
        }
        case WM_COMMAND:
            if (LOWORD(wparam) == ID_GETTING_STARTED_CLOSE) {
                DestroyWindow(window);
                return 0;
            }
            break;
        case WM_KEYDOWN:
            if (wparam == VK_ESCAPE) {
                DestroyWindow(window);
                return 0;
            }
            break;
        case WM_CLOSE:
            DestroyWindow(window);
            return 0;
        case WM_DESTROY:
            if (state) {
                if (state->heading_font) DeleteObject(state->heading_font);
                if (state->body_font) DeleteObject(state->body_font);
                state->text = NULL;
                state->heading_font = NULL;
                state->body_font = NULL;
            }
            if (window == g_getting_started_window) {
                g_getting_started_window = NULL;
                if (g_getting_started_mark_seen) {
                    g_frontend_settings.getting_started_shown = 1;
                    if (!simcity_frontend_settings_win32_save(
                            &g_frontend_settings, g_frontend_ini_path))
                        set_status(L"Welcome was closed, but its one-time setting could not be saved.");
                }
                g_getting_started_mark_seen = 0;
                if (g_startup_pending && IsWindow(g_window))
                    PostMessageW(g_window, WM_APP_STARTUP_CONTINUE, 0, 0);
            }
            return 0;
        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static void show_getting_started_window(int mark_seen) {
    HWND dialog;
    if (IsWindow(g_getting_started_window)) {
        ShowWindow(g_getting_started_window, SW_RESTORE);
        SetWindowPos(g_getting_started_window, HWND_TOP, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
        SetForegroundWindow(g_getting_started_window);
        if (g_getting_started_state.text)
            SetFocus(g_getting_started_state.text);
        return;
    }
    ZeroMemory(&g_getting_started_state, sizeof(g_getting_started_state));
    g_getting_started_mark_seen = mark_seen != 0;
    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        GETTING_STARTED_CLASS_NAME, L"Welcome",
        WS_CAPTION | WS_SYSMENU | WS_POPUP,
        CW_USEDEFAULT, CW_USEDEFAULT, 820, 720,
        g_window, NULL, g_instance, &g_getting_started_state);
    if (!dialog) {
        g_getting_started_mark_seen = 0;
        if (g_startup_pending)
            PostMessageW(g_window, WM_APP_STARTUP_CONTINUE, 0, 0);
        return;
    }
    g_getting_started_window = dialog;
    center_window_on_parent(dialog, g_window);
    ShowWindow(dialog, SW_SHOWNORMAL);
    SetWindowPos(dialog, HWND_TOP, 0, 0, 0, 0,
                 SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    SetActiveWindow(dialog);
    SetForegroundWindow(dialog);
    SendMessageW(g_getting_started_state.close_button, BM_SETSTYLE,
                 BS_DEFPUSHBUTTON, TRUE);
    SetFocus(g_getting_started_state.text);
    NotifyWinEvent(EVENT_OBJECT_FOCUS, g_getting_started_state.text,
                   OBJID_CLIENT, CHILDID_SELF);
}

static void save_current_snapshot(void) {
    int slot;
    int resume_after;
    if (!g_game) {
        set_status(L"Load and run the ROM before using snapshots.");
        MessageBeep(MB_ICONWARNING);
        return;
    }
    slot = g_frontend_settings.snapshot_slot;
    if (slot < 1 || slot > 5) slot = 1;
    resume_after = !g_paused;
    if (resume_after) pause_game(L"Paused while saving the current snapshot.");
    (void)save_snapshot_slot(slot);
    if (resume_after && g_game) play_game();
}

static void load_current_snapshot(void) {
    int slot;
    int resume_after;
    if (!g_game) {
        set_status(L"Load and run the ROM before using snapshots.");
        MessageBeep(MB_ICONWARNING);
        return;
    }
    slot = g_frontend_settings.snapshot_slot;
    if (slot < 1 || slot > 5) slot = 1;
    resume_after = !g_paused;
    if (resume_after) pause_game(L"Paused while loading the current snapshot.");
    (void)load_snapshot_slot(slot);
    if (resume_after && g_game) play_game();
}

static int start_recording_to(const wchar_t *base_directory,
                              wchar_t *message, size_t message_capacity) {
    wchar_t default_directory[PATH_CAPACITY];
    const wchar_t *directory;
    join_wide_path(default_directory,
                   sizeof(default_directory) / sizeof(default_directory[0]),
                   g_executable_directory, L"Audio");
    directory = base_directory && base_directory[0] ?
        base_directory : default_directory;
    if (!g_game) {
        copy_wide(message, message_capacity,
                  L"Load and run the ROM before recording.");
        return 0;
    }
    if (simcity_audio_recorder_win32_active(&g_audio_recorder)) {
        (void)_snwprintf(message, message_capacity,
                         L"Recording is already active: %s",
                         g_audio_recorder.path);
        message[message_capacity - 1u] = L'\0';
        return 1;
    }
    if (!ensure_directory_tree(directory)) {
        copy_wide(message, message_capacity,
                  L"Recording could not start because the Audio folder could not be created.");
        return 0;
    }
    if (!simcity_audio_recorder_win32_start(&g_audio_recorder, directory)) {
        (void)_snwprintf(message, message_capacity,
                         L"Recording could not start: %s",
                         g_audio_recorder.last_error[0] ?
                         g_audio_recorder.last_error :
                         L"Unable to create the WAV file.");
        message[message_capacity - 1u] = L'\0';
        return 0;
    }
    (void)_snwprintf(message, message_capacity,
                     L"Full Static recording started: %s. Press F9 to stop.",
                     g_audio_recorder.path);
    message[message_capacity - 1u] = L'\0';
    return 1;
}

static int stop_recording(wchar_t *message, size_t message_capacity) {
    uint64_t frames;
    wchar_t path[PATH_CAPACITY];
    if (!simcity_audio_recorder_win32_active(&g_audio_recorder)) {
        copy_wide(message, message_capacity, L"Recording is not active.");
        return 1;
    }
    frames = g_audio_recorder.frames_written;
    copy_wide(path, sizeof(path) / sizeof(path[0]), g_audio_recorder.path);
    if (!simcity_audio_recorder_win32_stop(&g_audio_recorder)) {
        (void)_snwprintf(message, message_capacity,
                         L"Recording could not be finalized: %s",
                         g_audio_recorder.last_error);
        message[message_capacity - 1u] = L'\0';
        return 0;
    }
    (void)_snwprintf(message, message_capacity,
                     L"Recording stopped after %.2f seconds: %s",
                     (double)frames / SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE, path);
    message[message_capacity - 1u] = L'\0';
    return 1;
}

static void toggle_recording(void) {
    wchar_t message[PATH_CAPACITY + 128u];
    if (simcity_audio_recorder_win32_active(&g_audio_recorder))
        (void)stop_recording(message,
                             sizeof(message) / sizeof(message[0]));
    else
        (void)start_recording_to(NULL, message,
                                sizeof(message) / sizeof(message[0]));
    set_status(message);
}

static void advance_frame_deadline(void) {
    g_next_frame_deadline += g_qpc_ticks_per_frame_base;
    g_qpc_remainder_accumulator += g_qpc_ticks_per_frame_remainder;
    if (g_qpc_remainder_accumulator >=
        SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR) {
        g_next_frame_deadline += 1u;
        g_qpc_remainder_accumulator -=
            SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
    }
}

static uint64_t qpc_ticks_to_100ns_ceil(uint64_t ticks) {
    uint64_t frequency = (uint64_t)g_qpc_frequency.QuadPart;
    uint64_t whole;
    uint64_t remainder;
    uint64_t units;
    if (!frequency || !ticks) return 1u;
    whole = ticks / frequency;
    remainder = ticks % frequency;
    units = whole * HOST_TIMER_100NS_PER_SECOND;
    units += (remainder * HOST_TIMER_100NS_PER_SECOND + frequency - 1u) /
             frequency;
    return units ? units : 1u;
}

static int arm_frame_timer(void) {
    LARGE_INTEGER now;
    LARGE_INTEGER due;
    uint64_t delay_ticks;
    uint64_t delay_100ns;
    if (!g_frame_timer || g_qpc_frequency.QuadPart <= 0 ||
        !QueryPerformanceCounter(&now)) return 0;
    if (g_next_frame_deadline <= (uint64_t)now.QuadPart)
        delay_ticks = 1u;
    else
        delay_ticks = g_next_frame_deadline - (uint64_t)now.QuadPart;
    delay_100ns = qpc_ticks_to_100ns_ceil(delay_ticks);
    if (delay_100ns > (uint64_t)INT64_MAX) delay_100ns = (uint64_t)INT64_MAX;
    due.QuadPart = -(LONGLONG)delay_100ns;
    return SetWaitableTimer(g_frame_timer, &due, 0, NULL, NULL, FALSE) != 0;
}

static void reset_pacing_clock(void) {
    LARGE_INTEGER now;
    if (g_qpc_frequency.QuadPart <= 0 ||
        !QueryPerformanceCounter(&now)) {
        g_next_frame_deadline = 0u;
        return;
    }
    g_qpc_remainder_accumulator = 0u;
    g_next_frame_deadline = (uint64_t)now.QuadPart;
    advance_frame_deadline();
    (void)arm_frame_timer();
}

static int advance_frame_batch(uint32_t frame_count) {
    SimCityRecompFrameResult result;
    wchar_t message[512];
    uint32_t headless_count;
    uint16_t input_mask;
    int recorder_was_active;
    if (!g_game || frame_count == 0u) return 1;
    memset(&result, 0, sizeof(result));
    input_mask = current_gameplay_input();
    headless_count = frame_count > 1u ? frame_count - 1u : 0u;
    if (headless_count &&
        !simcity_recomp_advance_headless(g_game, input_mask,
                                         headless_count, &result)) {
        stop_game_on_core_failure();
        return 0;
    }
    memset(&result, 0, sizeof(result));
    if (!simcity_recomp_advance(g_game, input_mask, 1u, &result)) {
        stop_game_on_core_failure();
        return 0;
    }
    recorder_was_active = simcity_audio_recorder_win32_active(&g_audio_recorder);
    simcity_audio_output_pump(&g_audio_output, &g_audio_recorder, g_game);
    if (recorder_was_active &&
        !simcity_audio_recorder_win32_active(&g_audio_recorder) &&
        g_audio_recorder.last_error[0]) {
        _snwprintf(message, sizeof(message) / sizeof(message[0]),
                   L"Audio recording stopped: %s",
                   g_audio_recorder.last_error);
        message[(sizeof(message) / sizeof(message[0])) - 1u] = L'\0';
        set_status(message);
    }
    maybe_flush_battery_sram_win32();
    if (simcity_recomp_audio_overflowed(g_game)) {
        simcity_recomp_audio_clear_overflow(g_game);
        set_status(L"The host audio queue overflowed; PCM was dropped. Static execution continues.");
    }
    if (!result.frame_rendered) {
        utf8_to_wide(result.renderer_error, message,
                     sizeof(message) / sizeof(message[0]));
        set_status(message[0] ? message :
                   L"The current frame is valid forced blank or not yet renderable; static execution continues.");
        return 1;
    }
    InvalidateRect(g_window, NULL, FALSE);
    return 1;
}

static void service_host_timer(void) {
    LARGE_INTEGER before;
    LARGE_INTEGER after;
    uint64_t skipped = 0u;
    if (!QueryPerformanceCounter(&before)) {
        (void)arm_frame_timer();
        return;
    }
    if ((uint64_t)before.QuadPart < g_next_frame_deadline) {
        (void)arm_frame_timer();
        return;
    }

    ++g_pacing_timer_ticks;
    g_gamepad_input = simcity_gamepad_win32_poll(
        &g_gamepad, g_frontend_settings.gamepad_bindings);
    if (g_game && !g_paused) {
        if (g_pacing_max_batch < 1u) g_pacing_max_batch = 1u;
        (void)advance_frame_batch(1u);
    }
    advance_frame_deadline();
    if (QueryPerformanceCounter(&after)) {
        while (g_next_frame_deadline <= (uint64_t)after.QuadPart) {
            advance_frame_deadline();
            ++skipped;
        }
    }
    if (skipped) {
        g_pacing_skipped_deadlines += skipped;
        ++g_pacing_resyncs;
    }
    (void)arm_frame_timer();
}



static void layout_controls(HWND window) {
    RECT client;
    int width;
    GetClientRect(window, &client);
    width = client.right - client.left;
    if (g_presentation_hidden) return;
    MoveWindow(g_browse_button, 8, 8, 116, 30, TRUE);
    MoveWindow(g_pause_play_button, 130, 8, 104, 30, TRUE);
    MoveWindow(g_reset_button, 240, 8, 88, 30, TRUE);
    MoveWindow(g_audio_button, 334, 8, 86, 30, TRUE);
    MoveWindow(g_keys_button, 426, 8, 82, 30, TRUE);
    MoveWindow(g_fullscreen_checkbox, 520, 10, 120, 26, TRUE);
    MoveWindow(g_auto_run_checkbox, 650, 10,
               width > 770 ? 120 : 100, 26, TRUE);
    MoveWindow(g_status, 12, 48, width - 24, 24, TRUE);
}

static void paint_window(HWND window) {
    PAINTSTRUCT paint;
    HDC dc = BeginPaint(window, &paint);
    RECT client;
    RECT render_area;
    const uint32_t *pixels = simcity_recomp_frame_bgra(g_game);
    GetClientRect(window, &client);
    FillRect(dc, &client, (HBRUSH)GetStockObject(BLACK_BRUSH));
    render_area.left = 0;
    render_area.top = g_presentation_hidden ? 0 : 80;
    render_area.right = client.right;
    render_area.bottom = client.bottom;

    if (g_game && pixels && render_area.bottom > render_area.top) {
        BITMAPINFO bitmap;
        int available_width = render_area.right - render_area.left;
        int available_height = render_area.bottom - render_area.top;
        int draw_width = available_width;
        int draw_height = draw_width * (int)SIMCITY_RECOMP_FRAME_HEIGHT /
                          (int)SIMCITY_RECOMP_FRAME_WIDTH;
        int x;
        int y;
        if (g_frontend_settings.integer_scale >= 1 &&
            g_frontend_settings.integer_scale <= 4) {
            draw_width = (int)SIMCITY_RECOMP_FRAME_WIDTH *
                         g_frontend_settings.integer_scale;
            draw_height = (int)SIMCITY_RECOMP_FRAME_HEIGHT *
                          g_frontend_settings.integer_scale;
        } else if (draw_height > available_height) {
            draw_height = available_height;
            draw_width = draw_height * (int)SIMCITY_RECOMP_FRAME_WIDTH /
                         (int)SIMCITY_RECOMP_FRAME_HEIGHT;
        }
        x = render_area.left + (available_width - draw_width) / 2;
        y = render_area.top + (available_height - draw_height) / 2;
        ZeroMemory(&bitmap, sizeof(bitmap));
        bitmap.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bitmap.bmiHeader.biWidth = (LONG)SIMCITY_RECOMP_FRAME_WIDTH;
        bitmap.bmiHeader.biHeight = -(LONG)SIMCITY_RECOMP_FRAME_HEIGHT;
        bitmap.bmiHeader.biPlanes = 1u;
        bitmap.bmiHeader.biBitCount = 32u;
        bitmap.bmiHeader.biCompression = BI_RGB;
        SetStretchBltMode(dc, COLORONCOLOR);
        (void)StretchDIBits(dc, x, y, draw_width, draw_height,
                            0, 0,
                            (int)SIMCITY_RECOMP_FRAME_WIDTH,
                            (int)SIMCITY_RECOMP_FRAME_HEIGHT,
                            pixels, &bitmap, DIB_RGB_COLORS, SRCCOPY);
    } else {
        const wchar_t *message =
            L"Browse for the exact SimCity (USA) ROM and choose Run.\r\n"
            L"The application uses only the fail-closed Full Static S-SMP/S-DSP audio path; no reference engine or automatic fallback is included.";
        SetBkMode(dc, TRANSPARENT);
        SetTextColor(dc, RGB(255, 255, 255));
        render_area.left += 24;
        render_area.top += 24;
        render_area.right -= 24;
        DrawTextW(dc, message, -1, &render_area,
                  DT_LEFT | DT_TOP | DT_WORDBREAK);
    }
    EndPaint(window, &paint);
}

static void set_control_font(HWND control) {
    SendMessageW(control, WM_SETFONT,
                 (WPARAM)GetStockObject(DEFAULT_GUI_FONT), TRUE);
}

static AudioDialogState *audio_dialog_state(HWND window) {
    return (AudioDialogState *)GetWindowLongPtrW(window, GWLP_USERDATA);
}

static int read_audio_dialog(AudioDialogState *state, HWND window) {
    BOOL translated = FALSE;
    UINT volume;
    UINT latency;
    LRESULT selection;
    wchar_t device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
    if (!state) return 0;

    volume = (UINT)SendMessageW(state->volume, TBM_GETPOS, 0, 0);
    latency = GetDlgItemInt(window, ID_AUDIO_LATENCY, &translated, FALSE);
    if (!translated || latency < AUDIO_MIN_LATENCY_MS ||
        latency > AUDIO_MAX_LATENCY_MS) {
        MessageBoxW(window, L"Latency must be between 40 and 250 milliseconds.",
                    L"Audio Settings", MB_OK | MB_ICONWARNING);
        SetFocus(state->latency);
        return 0;
    }

    state->settings.enabled =
        SendMessageW(state->enabled, BM_GETCHECK, 0, 0) == BST_CHECKED;
    state->settings.volume_percent = (int)volume;
    state->settings.latency_ms = (int)latency;
    state->settings.device_name[0] = L'\0';
    selection = SendMessageW(state->device, CB_GETCURSEL, 0, 0);
    if (selection > 0) {
        device_name[0] = L'\0';
        if (SendMessageW(state->device, CB_GETLBTEXT,
                         (WPARAM)selection,
                         (LPARAM)device_name) != CB_ERR) {
            copy_wide(state->settings.device_name,
                      SIMCITY_AUDIO_DEVICE_NAME_CAPACITY, device_name);
        }
    }
    return 1;
}

static void audio_dialog_layout(HWND window, AudioDialogState *state) {
    RECT client;
    int width;
    if (!state) return;
    GetClientRect(window, &client);
    width = client.right - client.left;
    MoveWindow(GetDlgItem(window, 2100), 16, 12, width - 32, 54, TRUE);
    MoveWindow(state->enabled, 16, 70, width - 32, 24, TRUE);
    MoveWindow(GetDlgItem(window, 2102), 16, 106, 104, 24, TRUE);
    MoveWindow(state->device, 126, 104, width - 142, 240, TRUE);
    MoveWindow(GetDlgItem(window, 2103), 16, 144, 104, 24, TRUE);
    MoveWindow(state->volume, 126, 136, width - 224, 36, TRUE);
    MoveWindow(state->volume_value, width - 84, 144, 68, 24, TRUE);
    MoveWindow(GetDlgItem(window, 2105), 16, 180, 104, 24, TRUE);
    MoveWindow(state->latency, 126, 178, 84, 24, TRUE);
    MoveWindow(GetDlgItem(window, 2106), 222, 180, width - 238, 24, TRUE);
    MoveWindow(GetDlgItem(window, ID_AUDIO_APPLY), width - 190, 226, 80, 30, TRUE);
    MoveWindow(GetDlgItem(window, ID_AUDIO_CANCEL), width - 102, 226, 80, 30, TRUE);
}


static LRESULT CALLBACK audio_dialog_proc(HWND window, UINT message,
                                          WPARAM wparam, LPARAM lparam) {
    AudioDialogState *state = audio_dialog_state(window);
    switch (message) {
        case WM_NCCREATE: {
            CREATESTRUCTW *create = (CREATESTRUCTW *)lparam;
            SetWindowLongPtrW(window, GWLP_USERDATA,
                              (LONG_PTR)create->lpCreateParams);
            return TRUE;
        }

        case WM_CREATE: {
            wchar_t number[32];
            UINT index;
            UINT count;
            LRESULT selection = 0;
            state = audio_dialog_state(window);
            if (!state) return -1;
            SetWindowTextW(window, L"Audio Settings");

            set_control_font(CreateWindowExW(
                0, L"STATIC",
                L"Choose how SimCity audio is played. Audio remains muted until Audio enabled is checked.",
                WS_CHILD | WS_VISIBLE | SS_LEFT,
                16, 12, 500, 54, window, (HMENU)(INT_PTR)2100,
                g_instance, NULL));
            state->enabled = CreateWindowExW(
                0, L"BUTTON", L"Audio enabled (uncheck to mute)",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
                16, 70, 300, 24, window,
                (HMENU)(INT_PTR)ID_AUDIO_ENABLED, g_instance, NULL);
            set_control_font(state->enabled);
            SendMessageW(state->enabled, BM_SETCHECK,
                         state->settings.enabled ? BST_CHECKED : BST_UNCHECKED,
                         0);

            set_control_font(CreateWindowExW(
                0, L"STATIC", L"Output device:",
                WS_CHILD | WS_VISIBLE | SS_LEFT,
                16, 106, 104, 24, window, (HMENU)(INT_PTR)2102,
                g_instance, NULL));
            state->device = CreateWindowExW(
                WS_EX_CLIENTEDGE, L"COMBOBOX", L"",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | CBS_DROPDOWNLIST |
                WS_VSCROLL,
                126, 104, 350, 240, window,
                (HMENU)(INT_PTR)ID_AUDIO_DEVICE, g_instance, NULL);
            set_control_font(state->device);
            (void)SendMessageW(state->device, CB_ADDSTRING, 0,
                               (LPARAM)AUDIO_DEFAULT_DEVICE_LABEL);
            count = simcity_audio_device_count();
            for (index = 0u; index < count; ++index) {
                wchar_t name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
                if (simcity_audio_device_name(index, name,
                                              sizeof(name) /
                                              sizeof(name[0]))) {
                    LRESULT item = SendMessageW(state->device, CB_ADDSTRING,
                                                0, (LPARAM)name);
                    if (item != CB_ERR && item != CB_ERRSPACE &&
                        state->settings.device_name[0] &&
                        wcscmp(name, state->settings.device_name) == 0) {
                        selection = item;
                    }
                }
            }
            (void)SendMessageW(state->device, CB_SETCURSEL,
                               (WPARAM)selection, 0);

            set_control_font(CreateWindowExW(
                0, L"STATIC", L"Volume:",
                WS_CHILD | WS_VISIBLE | SS_LEFT,
                16, 144, 104, 24, window, (HMENU)(INT_PTR)2103,
                g_instance, NULL));
            _snwprintf_s(number, sizeof(number) / sizeof(number[0]),
                         _TRUNCATE, L"%d", state->settings.volume_percent);
            state->volume = CreateWindowExW(
                0, TRACKBAR_CLASSW, L"",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | TBS_AUTOTICKS,
                126, 136, 310, 36, window,
                (HMENU)(INT_PTR)ID_AUDIO_VOLUME, g_instance, NULL);
            set_control_font(state->volume);
            SendMessageW(state->volume, TBM_SETRANGE, TRUE, MAKELPARAM(0, 100));
            SendMessageW(state->volume, TBM_SETTICFREQ, 10, 0);
            SendMessageW(state->volume, TBM_SETPOS, TRUE,
                         state->settings.volume_percent);
            _snwprintf_s(number, sizeof(number) / sizeof(number[0]),
                         _TRUNCATE, L"%d%%", state->settings.volume_percent);
            state->volume_value = CreateWindowExW(
                0, L"STATIC", number,
                WS_CHILD | WS_VISIBLE | SS_LEFT,
                448, 144, 68, 24, window, (HMENU)(INT_PTR)2104,
                g_instance, NULL);
            set_control_font(state->volume_value);

            set_control_font(CreateWindowExW(
                0, L"STATIC", L"Buffer latency:",
                WS_CHILD | WS_VISIBLE | SS_LEFT,
                16, 180, 104, 24, window, (HMENU)(INT_PTR)2105,
                g_instance, NULL));
            _snwprintf_s(number, sizeof(number) / sizeof(number[0]),
                         _TRUNCATE, L"%d", state->settings.latency_ms);
            state->latency = CreateWindowExW(
                WS_EX_CLIENTEDGE, L"EDIT", number,
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | ES_NUMBER |
                ES_AUTOHSCROLL,
                126, 178, 84, 24, window,
                (HMENU)(INT_PTR)ID_AUDIO_LATENCY, g_instance, NULL);
            set_control_font(state->latency);
            set_control_font(CreateWindowExW(
                0, L"STATIC", L"milliseconds (40 to 250)",
                WS_CHILD | WS_VISIBLE | SS_LEFT,
                222, 216, 220, 24, window, (HMENU)(INT_PTR)2106,
                g_instance, NULL));

            set_control_font(CreateWindowExW(
                0, L"BUTTON", L"&Apply",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                330, 262, 80, 30, window,
                (HMENU)(INT_PTR)ID_AUDIO_APPLY, g_instance, NULL));
            set_control_font(CreateWindowExW(
                0, L"BUTTON", L"Cancel",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                418, 262, 80, 30, window,
                (HMENU)(INT_PTR)ID_AUDIO_CANCEL, g_instance, NULL));
            return 0;
        }

        case WM_SIZE:
            audio_dialog_layout(window, state);
            return 0;

        case WM_HSCROLL:
            if (state && (HWND)lparam == state->volume) {
                wchar_t text[32];
                (void)_snwprintf(text, sizeof(text) / sizeof(text[0]),
                                 L"%ld%%",
                                 (long)SendMessageW(state->volume,
                                                    TBM_GETPOS, 0, 0));
                SetWindowTextW(state->volume_value, text);
                notify_accessible_value(state->volume_value);
                return 0;
            }
            break;

        case WM_GETMINMAXINFO: {
            MINMAXINFO *info = (MINMAXINFO *)lparam;
            info->ptMinTrackSize.x = 520;
            info->ptMinTrackSize.y = 315;
            return 0;
        }

        case WM_COMMAND:
            if (LOWORD(wparam) == ID_AUDIO_APPLY) {
                if (read_audio_dialog(state, window)) {
                    state->applied = 1;
                    DestroyWindow(window);
                }
                return 0;
            }
            if (LOWORD(wparam) == ID_AUDIO_CANCEL) {
                DestroyWindow(window);
                return 0;
            }
            break;

        case WM_CLOSE:
            DestroyWindow(window);
            return 0;

        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static void show_audio_settings(void) {
    AudioDialogState state;
    HWND dialog;
    MSG message;
    int resume_after;
    BOOL parent_was_enabled;
    int message_result = 1;

    ZeroMemory(&message, sizeof(message));
    memset(&state, 0, sizeof(state));
    state.settings = g_audio_settings;
    resume_after = g_game && !g_paused;
    if (resume_after) pause_game(L"Paused while Audio Settings is open.");

    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        AUDIO_CLASS_NAME, L"Audio Settings",
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME,
        CW_USEDEFAULT, CW_USEDEFAULT, 560, 315,
        g_window, NULL, g_instance, &state);
    if (!dialog) {
        MessageBoxW(g_window, L"Unable to open Audio Settings.",
                    APP_TITLE, MB_OK | MB_ICONERROR);
        if (resume_after) play_game();
        return;
    }

    center_window_on_parent(dialog, g_window);

    parent_was_enabled = IsWindowEnabled(g_window);
    EnableWindow(g_window, FALSE);
    ShowWindow(dialog, SW_SHOW);
    UpdateWindow(dialog);
    while (IsWindow(dialog) &&
           (message_result = GetMessageW(&message, NULL, 0, 0)) > 0) {
        if (!IsDialogMessageW(dialog, &message)) {
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }
    }
    if (parent_was_enabled) EnableWindow(g_window, TRUE);
    SetForegroundWindow(g_window);

    if (state.applied) {
        g_audio_settings = state.settings;
        simcity_audio_settings_save(&g_audio_settings, g_audio_ini_path);
        if (g_game) {
            if (open_audio(1) && simcity_audio_output_is_open(&g_audio_output))
                set_status(L"Audio settings applied. Full Static host playback is active.");
            else if (!g_audio_settings.enabled)
                set_status(L"Audio settings applied. Audio output is disabled.");
        } else {
            set_status(L"Audio settings saved. Full Static playback will use them when the game starts.");
        }
    }
    if (resume_after && g_game) play_game();
    if (message_result == 0) PostQuitMessage((int)message.wParam);
}

static HMENU create_menu_bar(void) {
    HMENU bar = CreateMenu();
    HMENU file = CreatePopupMenu();
    HMENU settings = CreatePopupMenu();
    AppendMenuW(file, MF_STRING, ID_BROWSE_MENU, L"&Browse ROM...\tCtrl+O");
    AppendMenuW(file, MF_STRING, ID_RUN, L"&Run\tF7");
    AppendMenuW(file, MF_STRING, ID_PAUSE_PLAY, L"&Play\tEscape");
    AppendMenuW(file, MF_STRING, ID_RESET, L"&Reset ROM");
    AppendMenuW(file, MF_SEPARATOR, 0, NULL);
    AppendMenuW(file, MF_STRING, ID_SNAPSHOT_SAVE_CURRENT,
                L"Save Current Snapshot\t1");
    AppendMenuW(file, MF_STRING, ID_SNAPSHOT_LOAD_CURRENT,
                L"Load Current Snapshot\t2");
    AppendMenuW(file, MF_STRING, ID_SNAPSHOT_SAVE,
                L"Save Snapshot...\tF2");
    AppendMenuW(file, MF_STRING, ID_SNAPSHOT_LOAD,
                L"Load Snapshot...\tF3");
    AppendMenuW(file, MF_STRING, ID_SCREENSHOT,
                L"Capture Game Window\tF8");
    AppendMenuW(file, MF_STRING, ID_RECORD,
                L"Record Full Static Audio\tF9");
    AppendMenuW(file, MF_SEPARATOR, 0, NULL);
    AppendMenuW(file, MF_STRING, ID_EXIT, L"E&xit\tAlt+F4");
    AppendMenuW(settings, MF_STRING, ID_AUDIO_SETTINGS,
                L"&Audio Settings...\tF4");
    AppendMenuW(settings, MF_STRING, ID_FRONTEND_SETTINGS,
                L"&Settings...\tF5");
    AppendMenuW(settings, MF_STRING, ID_KEYS,
                L"&Controller Bindings...\tF6");
    AppendMenuW(settings, MF_SEPARATOR, 0, NULL);
    AppendMenuW(settings, MF_STRING, ID_FULLSCREEN,
                L"Use &Full Screen When Playing");
    AppendMenuW(settings, MF_STRING, ID_AUTO_RUN,
                L"&Auto-Run at Startup");
    AppendMenuW(bar, MF_POPUP, (UINT_PTR)file, L"&File");
    AppendMenuW(bar, MF_POPUP, (UINT_PTR)settings, L"&Settings");
    return bar;
}

static void initialize_paths_and_settings(void) {
    wchar_t module_path[PATH_CAPACITY];
    wchar_t default_rom[PATH_CAPACITY];
    wchar_t gamepad_database[PATH_CAPACITY];
    wchar_t *slash;
    DWORD length = GetModuleFileNameW(NULL, module_path,
                                     (DWORD)(sizeof(module_path) /
                                             sizeof(module_path[0])));
    simcity_audio_settings_defaults(&g_audio_settings);
    simcity_audio_output_initialize(&g_audio_output);
    simcity_audio_recorder_win32_init(&g_audio_recorder);
    simcity_frontend_settings_win32_defaults(&g_frontend_settings);
    if (length == 0u || length >= sizeof(module_path) / sizeof(module_path[0]))
        return;
    module_path[length] = L'\0';
    slash = wcsrchr(module_path, L'\\');
    if (slash) *slash = L'\0';
    copy_wide(g_executable_directory,
              sizeof(g_executable_directory) /
              sizeof(g_executable_directory[0]), module_path);
    (void)SetCurrentDirectoryW(g_executable_directory);
    join_wide_path(g_rom_directory,
                   sizeof(g_rom_directory) / sizeof(g_rom_directory[0]),
                   g_executable_directory, L"Rom");
    join_wide_path(g_saves_directory,
                   sizeof(g_saves_directory) / sizeof(g_saves_directory[0]),
                   g_executable_directory, L"Saves");
    join_wide_path(g_sram_path,
                   sizeof(g_sram_path) / sizeof(g_sram_path[0]),
                   g_saves_directory, L"SimCity-USA.srm");

    (void)_snwprintf(g_audio_ini_path,
                     sizeof(g_audio_ini_path) / sizeof(g_audio_ini_path[0]),
                     L"%s\\Launcher-Audio.ini",
                     g_executable_directory);
    g_audio_ini_path[(sizeof(g_audio_ini_path) /
                      sizeof(g_audio_ini_path[0])) - 1u] = L'\0';
    simcity_audio_settings_load(&g_audio_settings, g_audio_ini_path);
    (void)_snwprintf(g_frontend_ini_path,
                     sizeof(g_frontend_ini_path) / sizeof(g_frontend_ini_path[0]),
                     L"%s\\Launcher-Frontend.ini",
                     g_executable_directory);
    g_frontend_ini_path[(sizeof(g_frontend_ini_path) /
                         sizeof(g_frontend_ini_path[0])) - 1u] = L'\0';
    simcity_frontend_settings_win32_load(&g_frontend_settings,
                                         g_frontend_ini_path);
    join_wide_path(gamepad_database,
                   sizeof(gamepad_database) / sizeof(gamepad_database[0]),
                   g_executable_directory, L"gamecontrollerdb.txt");
    (void)simcity_gamepad_win32_initialize(&g_gamepad, gamepad_database);
    if (!g_frontend_settings.input_source_saved)
        g_frontend_settings.input_source = g_gamepad.startup_gamepad_found ?
            SIMCITY_INPUT_SOURCE_GAMEPAD : SIMCITY_INPUT_SOURCE_KEYBOARD;
    SendMessageW(g_auto_run_checkbox, BM_SETCHECK,
                 g_frontend_settings.auto_run_on_load ? BST_CHECKED : BST_UNCHECKED,
                 0);

    if (find_sfc_rom(g_rom_directory, default_rom,
                     sizeof(default_rom) / sizeof(default_rom[0]))) {
        g_adjacent_rom_found = 1;
        SetWindowTextW(g_rom_path, default_rom);
    }
    SendMessageW(g_fullscreen_checkbox, BM_SETCHECK,
                 g_frontend_settings.fullscreen_on_play ?
                 BST_CHECKED : BST_UNCHECKED, 0);
    update_controls();
}

static LRESULT CALLBACK rom_info_proc(HWND window, UINT message,
                                      WPARAM wparam, LPARAM lparam) {
    (void)lparam;
    switch (message) {
        case WM_CREATE: {
            SetWindowTextW(window, L"Required SimCity ROM");
            HWND text = CreateWindowExW(
                WS_EX_CLIENTEDGE, L"EDIT", ROM_REQUIREMENTS_TEXT,
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | ES_LEFT |
                ES_MULTILINE | ES_READONLY | ES_AUTOVSCROLL | WS_VSCROLL,
                18, 16, 610, 190, window, NULL, g_instance, NULL);
            HWND close_button = CreateWindowExW(
                0, L"BUTTON", L"&Close",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                278, 218, 96, 32, window,
                (HMENU)(INT_PTR)ID_ROM_NOTICE_CLOSE, g_instance, NULL);
            set_control_font(text);
            set_control_font(close_button);
            notify_accessible_value(text);
            SetFocus(text);
            NotifyWinEvent(EVENT_OBJECT_FOCUS, text,
                           OBJID_CLIENT, CHILDID_SELF);
            return 0;
        }
        case WM_COMMAND:
            if (LOWORD(wparam) == ID_ROM_NOTICE_CLOSE) {
                DestroyWindow(window);
                return 0;
            }
            break;
        case WM_KEYDOWN:
            if (wparam == VK_ESCAPE) {
                DestroyWindow(window);
                return 0;
            }
            break;
        case WM_CLOSE:
            DestroyWindow(window);
            return 0;
        case WM_DESTROY:
            if (window == g_rom_info_window) {
                g_rom_info_window = NULL;
                (void)WritePrivateProfileStringW(
                    L"Startup", L"RomNoticeShown", L"1",
                    g_frontend_ini_path);
            }
            return 0;
        default: break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static void show_first_run_rom_information(void) {
    HWND dialog;
    if (GetPrivateProfileIntW(L"Startup", L"RomNoticeShown", 0,
                              g_frontend_ini_path) != 0) return;
    if (IsWindow(g_rom_info_window)) {
        ShowWindow(g_rom_info_window, SW_RESTORE);
        SetWindowPos(g_rom_info_window, HWND_TOP, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
        SetForegroundWindow(g_rom_info_window);
        return;
    }
    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        ROM_INFO_CLASS_NAME, L"Required SimCity ROM",
        WS_CAPTION | WS_SYSMENU | WS_POPUP,
        CW_USEDEFAULT, CW_USEDEFAULT, 660, 310,
        g_window, NULL, g_instance, NULL);
    if (!dialog) return;
    g_rom_info_window = dialog;
    center_window_on_parent(dialog, g_window);
    ShowWindow(dialog, SW_SHOWNORMAL);
    SetWindowPos(dialog, HWND_TOP, 0, 0, 0, 0,
                 SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    SetActiveWindow(dialog);
    SetForegroundWindow(dialog);
}

static void continue_startup_after_welcome(void) {
    if (!g_startup_pending) return;
    g_startup_pending = 0;
    reset_pacing_clock();
    if (g_adjacent_rom_found) {
        if (g_frontend_settings.auto_run_on_load) {
            set_status(L"ROM found in the Rom folder. Loading and starting SimCity.");
            start_rom_load(1);
        } else {
            set_status(L"ROM found in the Rom folder. Choose Run to start.");
            update_controls();
            SetFocus(g_browse_button);
            NotifyWinEvent(EVENT_OBJECT_FOCUS, g_browse_button,
                           OBJID_CLIENT, CHILDID_SELF);
        }
    } else {
        show_first_run_rom_information();
    }
}

static void save_current_settings_on_exit(void) {
    if (g_settings_saved_on_exit) return;
    if (IsWindow(g_auto_run_checkbox))
        g_frontend_settings.auto_run_on_load =
            SendMessageW(g_auto_run_checkbox, BM_GETCHECK, 0, 0) ==
            BST_CHECKED;
    if (IsWindow(g_fullscreen_checkbox))
        g_frontend_settings.fullscreen_on_play =
            SendMessageW(g_fullscreen_checkbox, BM_GETCHECK, 0, 0) ==
            BST_CHECKED;
    (void)simcity_frontend_settings_win32_save(
        &g_frontend_settings, g_frontend_ini_path);
    simcity_audio_settings_save(&g_audio_settings, g_audio_ini_path);
    g_settings_saved_on_exit = 1;
}

static LRESULT CALLBACK window_proc(HWND window, UINT message,
                                    WPARAM wparam, LPARAM lparam) {
    switch (message) {
        case WM_CREATE:
            g_browse_button = CreateWindowExW(
                0, L"BUTTON", L"&Browse",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                8, 8, 116, 30, window, (HMENU)(INT_PTR)ID_BROWSE,
                g_instance, NULL);
            g_pause_play_button = CreateWindowExW(
                0, L"BUTTON", L"&Play",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                110, 8, 104, 30, window,
                (HMENU)(INT_PTR)ID_PAUSE_PLAY, g_instance, NULL);
            g_reset_button = CreateWindowExW(
                0, L"BUTTON", L"&Reset",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                220, 8, 88, 30, window, (HMENU)(INT_PTR)ID_RESET,
                g_instance, NULL);
            g_audio_button = CreateWindowExW(
                0, L"BUTTON", L"&Audio",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                334, 8, 86, 30, window,
                (HMENU)(INT_PTR)ID_AUDIO_SETTINGS, g_instance, NULL);
            g_keys_button = CreateWindowExW(
                0, L"BUTTON", L"&Keys",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                426, 8, 82, 30, window, (HMENU)(INT_PTR)ID_KEYS,
                g_instance, NULL);
            g_fullscreen_checkbox = CreateWindowExW(
                0, L"BUTTON", L"&Full screen",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
                520, 10, 120, 26, window,
                (HMENU)(INT_PTR)ID_FULLSCREEN, g_instance, NULL);
            g_auto_run_checkbox = CreateWindowExW(
                0, L"BUTTON", L"Auto-&Run",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
                650, 10, 120, 26, window,
                (HMENU)(INT_PTR)ID_AUTO_RUN, g_instance, NULL);
            /* The ROM path remains internal. Status is exposed as native
               static text, not as an editable toolbar field. */
            g_rom_path = CreateWindowExW(
                0, L"EDIT", L"", WS_CHILD | ES_AUTOHSCROLL,
                0, 0, 1, 1, window, (HMENU)(INT_PTR)ID_ROM_PATH,
                g_instance, NULL);
            g_status = CreateWindowExW(
                0, L"STATIC",
                L"Browse for the required SimCity ROM.",
                WS_CHILD | WS_VISIBLE | SS_LEFT | SS_NOPREFIX,
                12, 48, 1000, 24, window,
                (HMENU)(INT_PTR)ID_STATUS, g_instance, NULL);
            set_control_font(g_browse_button);
            set_control_font(g_pause_play_button);
            set_control_font(g_reset_button);
            set_control_font(g_keys_button);
            set_control_font(g_audio_button);
            set_control_font(g_fullscreen_checkbox);
            set_control_font(g_auto_run_checkbox);
            set_control_font(g_rom_path);
            set_control_font(g_status);
            SendMessageW(g_fullscreen_checkbox, BM_SETCHECK, BST_UNCHECKED, 0);
            SendMessageW(g_auto_run_checkbox, BM_SETCHECK, BST_UNCHECKED, 0);
            update_controls();
            return 0;

        case WM_SIZE:
            layout_controls(window);
            return 0;

        case WM_GETMINMAXINFO: {
            MINMAXINFO *info = (MINMAXINFO *)lparam;
            info->ptMinTrackSize.x = 720;
            info->ptMinTrackSize.y = 580;
            return 0;
        }

        case WM_PAINT:
            paint_window(window);
            return 0;

        case WM_COMMAND:
            switch (LOWORD(wparam)) {
                case ID_BROWSE:
                    if (rom_path_known()) start_rom_load(1); else browse_for_rom();
                    return 0;
                case ID_BROWSE_MENU: browse_for_rom(); return 0;
                case ID_RUN:
                    if (!g_game) start_rom_load(1);
                    return 0;
                case ID_RESET: reset_game(); return 0;
                case ID_PAUSE_PLAY: toggle_pause_play(); return 0;
                case ID_KEYS: show_key_bindings(); return 0;
                case ID_CONTROLS: show_game_controls(); return 0;
                case ID_FRONTEND_SETTINGS: show_frontend_settings(); return 0;
                case ID_AUDIO_SETTINGS: show_audio_settings(); return 0;
                case ID_FULLSCREEN:
                    if (lparam == 0) {
                        LRESULT checked = SendMessageW(g_fullscreen_checkbox,
                                                       BM_GETCHECK, 0, 0);
                        SendMessageW(g_fullscreen_checkbox, BM_SETCHECK,
                                     checked == BST_CHECKED ? BST_UNCHECKED :
                                     BST_CHECKED, 0);
                    }
                    g_frontend_settings.fullscreen_on_play =
                        SendMessageW(g_fullscreen_checkbox, BM_GETCHECK,
                                     0, 0) == BST_CHECKED;
                    (void)simcity_frontend_settings_win32_save(
                        &g_frontend_settings, g_frontend_ini_path);
                    update_controls();
                    return 0;
                case ID_AUTO_RUN:
                    if (lparam == 0) {
                        LRESULT checked = SendMessageW(g_auto_run_checkbox,
                                                       BM_GETCHECK, 0, 0);
                        SendMessageW(g_auto_run_checkbox, BM_SETCHECK,
                                     checked == BST_CHECKED ? BST_UNCHECKED :
                                     BST_CHECKED, 0);
                    }
                    g_frontend_settings.auto_run_on_load =
                        SendMessageW(g_auto_run_checkbox, BM_GETCHECK, 0, 0) ==
                        BST_CHECKED;
                    (void)simcity_frontend_settings_win32_save(
                        &g_frontend_settings, g_frontend_ini_path);
                    set_status(g_frontend_settings.auto_run_on_load ?
                        L"Auto-Run enabled for the next launch." :
                        L"Auto-Run disabled. Adjacent ROMs will load and wait for Play.");
                    return 0;
                case ID_SNAPSHOT_SAVE: show_snapshot_window(1); return 0;
                case ID_SNAPSHOT_LOAD: show_snapshot_window(0); return 0;
                case ID_SNAPSHOT_SAVE_CURRENT: save_current_snapshot(); return 0;
                case ID_SNAPSHOT_LOAD_CURRENT: load_current_snapshot(); return 0;
                case ID_SCREENSHOT: capture_window_screenshot(); return 0;
                case ID_RECORD: toggle_recording(); return 0;
                case ID_GETTING_STARTED:
                    show_getting_started_window(0);
                    return 0;
                case ID_SHORTCUTS: show_shortcuts(); return 0;
                case ID_ABOUT:
                    {
                        static wchar_t about[4096];
                        (void)_snwprintf(about, sizeof(about) / sizeof(about[0]),
                            L"SimCity (SNES) Static Recomp\r\n\r\n"
                            L"Launcher file: Launcher.exe\r\n"
                            L"Game window: SimCity (SNES)\r\n\r\n"
                            L"Generated static S-CPU execution with native video, controller and PCM host frontends. Full Static audio is the only linked audio path and fails closed.\r\n\r\n"
                            L"The USA cartridge uses native NTSC hardware timing at approximately 60.098813897 frames per second and 32,040 native audio frames per second. Valid forced-blank startup frames no longer pause the application. F8 captures the active application window and F9 records Full Static WAV audio.\r\n\r\n%s",
                            ROM_REQUIREMENTS_TEXT);
                        about[(sizeof(about) / sizeof(about[0])) - 1u] = L'\0';
                        show_information_window(L"About", about, 720, 560);
                    }
                    return 0;
                case ID_EXIT: SendMessageW(window, WM_CLOSE, 0, 0); return 0;
                default: break;
            }
            break;

        case WM_KEYDOWN:
            if (wparam == VK_ESCAPE) {
                if ((lparam & (1L << 30)) == 0) toggle_pause_play();
                return 0;
            }
            if (wparam == VK_F1) {
                show_shortcuts();
                return 0;
            }
            if (wparam == VK_F2) {
                show_snapshot_window(1);
                return 0;
            }
            if (wparam == VK_F3) { show_snapshot_window(0); return 0; }
            if (wparam == VK_F4) { show_audio_settings(); return 0; }
            if (wparam == VK_F5) {
                show_frontend_settings();
                return 0;
            }
            if (wparam == VK_F6) { show_key_bindings(); return 0; }
            if (wparam == VK_F7) {
                if (!g_game) start_rom_load(1);
                return 0;
            }
            if (wparam == VK_F8) { capture_window_screenshot(); return 0; }
            if (wparam == VK_F9) { toggle_recording(); return 0; }
            if (wparam == '1') { save_current_snapshot(); return 0; }
            if (wparam == '2') { load_current_snapshot(); return 0; }
            if (g_game && !g_paused && GetFocus() == g_window &&
                keyboard_gameplay_active()) {
                uint16_t mask = virtual_key_to_input(wparam);
                if (mask != 0u) {
                    g_held_input = (uint16_t)(g_held_input | mask);
                    return 0;
                }
            }
            break;

        case WM_KEYUP:
            if (g_game && !g_paused && GetFocus() == g_window &&
                keyboard_gameplay_active()) {
                uint16_t mask = virtual_key_to_input(wparam);
                if (mask != 0u) {
                    g_held_input = (uint16_t)(g_held_input &
                                             (uint16_t)~mask);
                    return 0;
                }
            }
            break;

        case WM_KILLFOCUS:
            g_held_input = 0u;
            g_gamepad_input = 0u;
            if (g_frontend_settings.pause_on_focus_loss &&
                g_game && !g_paused)
                pause_game(L"Paused because the launcher lost keyboard focus.");
            return 0;

        case WM_APP_LOAD_COMPLETE: {
            LoaderResult *result = (LoaderResult *)lparam;
            InterlockedExchange(&g_loading, 0);
            if (g_loader_thread) {
                CloseHandle(g_loader_thread);
                g_loader_thread = NULL;
            }
            if (g_close_requested) {
                if (result) {
                    simcity_recomp_destroy(result->game);
                    free(result);
                }
                DestroyWindow(window);
                return 0;
            }
            if (!result) {
                set_status(L"The loader ended without a result.");
                (void)open_audio(1);
                if (g_resume_after_failed_load) play_game();
                else update_controls();
                return 0;
            }
            if (!result->game) {
                MessageBoxW(window,
                            result->error[0] ? result->error :
                            L"The static recompilation could not be started.",
                            APP_TITLE, MB_OK | MB_ICONERROR);
                set_status(result->error[0] ? result->error : L"Run failed.");
                free(result);
                (void)open_audio(1);
                if (g_resume_after_failed_load) play_game();
                else update_controls();
                return 0;
            }
            close_audio();
            (void)flush_battery_sram_win32(1, NULL, 0u);
            simcity_recomp_destroy(g_game);
            g_game = result->game;
            g_loaded_snapshot_slot = -1;
            g_sram_last_flush_frame = 0u;
            result->game = NULL;
            free(result);
            g_paused = 1;
            g_held_input = 0u;
            (void)open_audio(1);
            InvalidateRect(window, NULL, TRUE);
            update_controls();
            if (g_play_after_load) {
                play_game();
            } else {
                SetWindowTextW(window, LAUNCHER_TITLE);
                set_status(L"SimCity (USA) is loaded and ready. Choose Play to start.");
                SetFocus(g_pause_play_button);
            }
            return 0;
        }

        case WM_APP_STARTUP_CONTINUE:
            continue_startup_after_welcome();
            return 0;

        case WM_CLOSE:
            if (InterlockedCompareExchange(&g_loading, 0, 0) != 0) {
                g_close_requested = 1;
                set_status(L"Closing after the current ROM load finishes...");
                update_controls();
                return 0;
            }
            save_current_settings_on_exit();
            DestroyWindow(window);
            return 0;

        case WM_ENDSESSION:
            if (wparam) save_current_settings_on_exit();
            return 0;

        case WM_DESTROY:
            save_current_settings_on_exit();
            if (g_frame_timer) (void)CancelWaitableTimer(g_frame_timer);
            (void)flush_battery_sram_win32(1, NULL, 0u);
            (void)simcity_audio_recorder_win32_stop(&g_audio_recorder);
            close_audio();
            if (g_loader_thread) {
                WaitForSingleObject(g_loader_thread, INFINITE);
                CloseHandle(g_loader_thread);
                g_loader_thread = NULL;
            }
            simcity_recomp_destroy(g_game);
            g_game = NULL;
            simcity_gamepad_win32_shutdown(&g_gamepad);
            PostQuitMessage(0);
            return 0;

        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

int WINAPI wWinMain(_In_ HINSTANCE instance, _In_opt_ HINSTANCE previous,
                    _In_ PWSTR command_line, _In_ int show_command) {
    WNDCLASSEXW window_class;
    WNDCLASSEXW audio_class;
    WNDCLASSEXW rom_info_class;
    WNDCLASSEXW snapshot_class;
    WNDCLASSEXW info_class;
    WNDCLASSEXW getting_started_class;
    MSG message;
    (void)previous;

    g_instance = instance;
    {
        INITCOMMONCONTROLSEX controls;
        controls.dwSize = sizeof(controls);
        controls.dwICC = ICC_BAR_CLASSES;
        if (!InitCommonControlsEx(&controls)) return 1;
    }
    (void)command_line;
    (void)show_command;
    if (!QueryPerformanceFrequency(&g_qpc_frequency) ||
        g_qpc_frequency.QuadPart <= 0) return 1;
    {
        uint64_t scaled_qpc = (uint64_t)g_qpc_frequency.QuadPart *
            SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR;
        g_qpc_ticks_per_frame_base = scaled_qpc /
            SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
        g_qpc_ticks_per_frame_remainder = (uint32_t)(scaled_qpc %
            SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR);
    }
    g_frame_timer = CreateWaitableTimerExW(
        NULL, NULL, HOST_TIMER_HIGH_RESOLUTION, HOST_TIMER_ACCESS);
    if (!g_frame_timer)
        g_frame_timer = CreateWaitableTimerW(NULL, FALSE, NULL);
    if (!g_frame_timer) return 1;
    g_menu = create_menu_bar();

    ZeroMemory(&window_class, sizeof(window_class));
    window_class.cbSize = sizeof(window_class);
    window_class.lpfnWndProc = window_proc;
    window_class.hInstance = instance;
    window_class.hCursor = LoadCursorW(NULL, IDC_ARROW);
    window_class.hIcon = LoadIconW(NULL, IDI_APPLICATION);
    window_class.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    window_class.lpszClassName = APP_CLASS_NAME;
    if (!RegisterClassExW(&window_class)) return 1;

    ZeroMemory(&audio_class, sizeof(audio_class));
    audio_class.cbSize = sizeof(audio_class);
    audio_class.lpfnWndProc = audio_dialog_proc;
    audio_class.hInstance = instance;
    audio_class.hCursor = LoadCursorW(NULL, IDC_ARROW);
    audio_class.hIcon = LoadIconW(NULL, IDI_APPLICATION);
    audio_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    audio_class.lpszClassName = AUDIO_CLASS_NAME;
    if (!RegisterClassExW(&audio_class)) return 1;

    ZeroMemory(&rom_info_class, sizeof(rom_info_class));
    rom_info_class.cbSize = sizeof(rom_info_class);
    rom_info_class.lpfnWndProc = rom_info_proc;
    rom_info_class.hInstance = instance;
    rom_info_class.hCursor = LoadCursorW(NULL, IDC_ARROW);
    rom_info_class.hIcon = LoadIconW(NULL, IDI_INFORMATION);
    rom_info_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    rom_info_class.lpszClassName = ROM_INFO_CLASS_NAME;
    if (!RegisterClassExW(&rom_info_class)) return 1;

    ZeroMemory(&snapshot_class, sizeof(snapshot_class));
    snapshot_class.cbSize = sizeof(snapshot_class);
    snapshot_class.lpfnWndProc = snapshot_dialog_proc;
    snapshot_class.hInstance = instance;
    snapshot_class.hCursor = LoadCursorW(NULL, IDC_ARROW);
    snapshot_class.hIcon = LoadIconW(NULL, IDI_APPLICATION);
    snapshot_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    snapshot_class.lpszClassName = SNAPSHOT_CLASS_NAME;
    if (!RegisterClassExW(&snapshot_class)) return 1;

    ZeroMemory(&info_class, sizeof(info_class));
    info_class.cbSize = sizeof(info_class);
    info_class.lpfnWndProc = info_dialog_proc;
    info_class.hInstance = instance;
    info_class.hCursor = LoadCursorW(NULL, IDC_ARROW);
    info_class.hIcon = LoadIconW(NULL, IDI_INFORMATION);
    info_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    info_class.lpszClassName = INFO_CLASS_NAME;
    if (!RegisterClassExW(&info_class)) return 1;

    ZeroMemory(&getting_started_class, sizeof(getting_started_class));
    getting_started_class.cbSize = sizeof(getting_started_class);
    getting_started_class.lpfnWndProc = getting_started_dialog_proc;
    getting_started_class.hInstance = instance;
    getting_started_class.hCursor = LoadCursorW(NULL, IDC_ARROW);
    getting_started_class.hIcon = LoadIconW(NULL, IDI_INFORMATION);
    getting_started_class.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    getting_started_class.lpszClassName = GETTING_STARTED_CLASS_NAME;
    if (!RegisterClassExW(&getting_started_class)) return 1;

    g_window = CreateWindowExW(
        WS_EX_CONTROLPARENT, APP_CLASS_NAME, LAUNCHER_TITLE,
        WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
        1024, 820, NULL, g_menu, instance, NULL);
    if (!g_window) return 1;

    initialize_paths_and_settings();
    ShowWindow(g_window, SW_MAXIMIZE);
    UpdateWindow(g_window);
    g_startup_pending = 1;
    if (!g_frontend_settings.getting_started_shown) {
        show_getting_started_window(1);
    } else {
        continue_startup_after_welcome();
    }

    {
        int running = 1;
        message.wParam = 0;
        while (running) {
            DWORD wait_result = MsgWaitForMultipleObjectsEx(
                1u, &g_frame_timer, INFINITE, QS_ALLINPUT,
                MWMO_INPUTAVAILABLE);
            if (wait_result == WAIT_OBJECT_0) {
                service_host_timer();
            } else if (wait_result == WAIT_OBJECT_0 + 1u) {
                while (PeekMessageW(&message, NULL, 0, 0, PM_REMOVE)) {
                    int root_shortcut;
                    int game_key;
                    if (message.message == WM_QUIT) {
                        running = 0;
                        break;
                    }
                    if (IsWindow(g_getting_started_window) &&
                        (message.hwnd == g_getting_started_window ||
                         IsChild(g_getting_started_window, message.hwnd))) {
                        if (message.message == WM_KEYDOWN &&
                            message.wParam == VK_TAB) {
                            HWND next = GetFocus() ==
                                g_getting_started_state.close_button ?
                                g_getting_started_state.text :
                                g_getting_started_state.close_button;
                            if (IsWindow(next)) {
                                SetFocus(next);
                                NotifyWinEvent(EVENT_OBJECT_FOCUS, next,
                                               OBJID_CLIENT, CHILDID_SELF);
                            }
                            continue;
                        }
                        if (message.message == WM_KEYDOWN &&
                            message.wParam == VK_RETURN) {
                            SendMessageW(g_getting_started_window, WM_COMMAND,
                                MAKEWPARAM(ID_GETTING_STARTED_CLOSE, BN_CLICKED),
                                (LPARAM)g_getting_started_state.close_button);
                            continue;
                        }
                        if (message.message == WM_KEYDOWN &&
                            message.wParam == VK_ESCAPE) {
                            DestroyWindow(g_getting_started_window);
                            continue;
                        }
                        if (IsDialogMessageW(g_getting_started_window,
                                             &message))
                            continue;
                    }
                    if (IsWindow(g_rom_info_window) &&
                        (message.hwnd == g_rom_info_window ||
                         IsChild(g_rom_info_window, message.hwnd))) {
                        if (message.message == WM_KEYDOWN &&
                            message.wParam == VK_ESCAPE) {
                            DestroyWindow(g_rom_info_window);
                            continue;
                        }
                        if (IsDialogMessageW(g_rom_info_window, &message))
                            continue;
                    }
                    root_shortcut =
                        message.message == WM_KEYDOWN &&
                        (message.wParam == VK_ESCAPE || message.wParam == VK_F1 ||
                         message.wParam == VK_F2 || message.wParam == VK_F3 ||
                         message.wParam == VK_F4 || message.wParam == VK_F5 ||
                         message.wParam == VK_F6 || message.wParam == VK_F7 ||
                         message.wParam == VK_F8 || message.wParam == VK_F9 ||
                          (message.wParam == '1' || message.wParam == '2') ||
                         ((GetKeyState(VK_CONTROL) & 0x8000) != 0 &&
                          (message.wParam == 'O' || message.wParam == 'o')));
                    game_key =
                        (message.message == WM_KEYDOWN ||
                         message.message == WM_KEYUP) &&
                          GetFocus() == g_window && g_game && !g_paused &&
                          keyboard_gameplay_active() &&
                        virtual_key_to_input(message.wParam) != 0u;
                    if (root_shortcut) {
                        if ((GetKeyState(VK_CONTROL) & 0x8000) != 0 &&
                            (message.wParam == 'O' || message.wParam == 'o'))
                            SendMessageW(g_window, WM_COMMAND,
                                         ID_BROWSE_MENU, 0);
                        else
                            SendMessageW(g_window, message.message,
                                         message.wParam, message.lParam);
                        continue;
                    }
                    if (game_key) {
                        SendMessageW(g_window, message.message,
                                     message.wParam, message.lParam);
                        continue;
                    }
                    if (!IsDialogMessageW(g_window, &message)) {
                        TranslateMessage(&message);
                        DispatchMessageW(&message);
                    }
                }
            } else {
                running = 0;
                message.wParam = 1;
            }
        }
    }
    if (g_frame_timer) {
        (void)CancelWaitableTimer(g_frame_timer);
        CloseHandle(g_frame_timer);
        g_frame_timer = NULL;
    }
    return (int)message.wParam;
}
