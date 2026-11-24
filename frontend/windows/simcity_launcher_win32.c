#if !defined(_WIN32)
#error This frontend is for Windows only.
#endif

#include <windows.h>
#include <commdlg.h>
#include <commctrl.h>

#include "simcity_audio_output_dsound_win32.h"
#include "simcity_battery_writer.h"
#include "simcity_frontend_settings_win32.h"
#include "simcity_app_core.h"
#include "simcity_input_latch.h"
#include "simcity_presentation_clock.h"
#include "simcity_playback_log.h"
#include "simcity_prepared_video.h"
#include "simcity_win32_frame_blit.h"
#include "simcity_win32_host_dispatch.h"
#include "simcity_screenshot_report.h"
#ifdef SIMCITY_HEADED_QA
#include "stock_controller_tape.h"
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

#define APP_CLASS_NAME L"SimCityStaticRecompWindow"
#define AUDIO_CLASS_NAME L"SimCityStaticRecompAudioSettings"
#define SNAPSHOT_CLASS_NAME L"SimCityStaticRecompSnapshotWindow"
#define INFO_CLASS_NAME L"SimCityStaticRecompInformationWindow"
#define GETTING_STARTED_CLASS_NAME L"SimCityGettingStartedWindow"
#define APP_TITLE L"SimCity (SNES)"
#define LAUNCHER_TITLE L"Launcher"
#define WM_APP_LOAD_COMPLETE (WM_APP + 1u)
#define WM_APP_STARTUP_CONTINUE (WM_APP + 2u)
#define WM_APP_WELCOME_CLOSED (WM_APP + 3u)
#define HOST_TIMER_100NS_PER_SECOND 10000000u
#define HOST_TIMER_HIGH_RESOLUTION 0x00000002u
#define HOST_TIMER_ACCESS 0x001F0003u
#define HEADED_STATUS_INTERVAL_FRAMES 60u
#define SRAM_IMAGE_BYTES 32768u
#define SRAM_FLUSH_INTERVAL_FRAMES 120u
/* Do not let a flood of keyboard/window messages starve the frame timer. */
#define MAX_HOST_MESSAGES_PER_PASS 32u
#define HOST_LATE_REBASE_DIVISOR 8u

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
#define ID_RESET 1018
#define ID_BROWSE_MENU 1019
#define ID_FULLSCREEN 1020
#define ID_SCREENSHOT 1021
#define ID_60_FPS 1050
#define ID_AUTO_RUN 1022
#define ID_WIDESCREEN 1023
#define ID_SNAPSHOT_SAVE_CURRENT 1024
#define ID_SNAPSHOT_LOAD_CURRENT 1025
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
#define ID_AUDIO_LATENCY_ENABLED 2008
#define ID_AUDIO_OUTPUT_RATE 2009
#define ID_AUDIO_RESAMPLER 2010
#define ID_AUDIO_SAFETY_BUFFER 2011
#define ID_AUDIO_DRIFT_ENABLED 2013
#define ID_AUDIO_DRIFT_TOLERANCE 2014
#define ID_AUDIO_MAX_RATE 2015
#define ID_AUDIO_AVERAGING 2016
#define ID_AUDIO_INTEGRAL 2017
#define ID_AUDIO_RECOVERY_ENABLED 2018
#define ID_AUDIO_RECOVERY_THRESHOLD 2019
#define ID_AUDIO_REALIGN 2020
#define ID_AUDIO_FADE 2022
#define ID_AUDIO_DEFAULTS 2023
#define ID_AUDIO_DIAGNOSTICS 2024

#define PATH_CAPACITY 4096u
#define AUDIO_DEFAULT_DEVICE_LABEL L"Default Windows audio device"
#define ARRAY_COUNT(a) (sizeof(a) / sizeof((a)[0]))

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
    HWND latency_enabled;
    HWND latency;
    HWND output_rate;
    HWND resampler;
    HWND safety_buffer;
    HWND drift_enabled;
    HWND drift_tolerance;
    HWND max_rate_adjustment;
    HWND averaging_frames;
    HWND integral_enabled;
    HWND recovery_enabled;
    HWND recovery_threshold;
    HWND realign_on_underrun;
    HWND resume_fade;
    SimCityAudioDiagnostics diagnostics;
    wchar_t opened_device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
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
    HWND heading;
    HWND text;
    HWND close_button;
    HFONT heading_font;
    HFONT body_font;
    int resume_after;
    int parent_was_enabled;
    HWND previous_focus;
} GettingStartedDialogState;

static HINSTANCE g_instance;
static HWND g_window;
static HWND g_browse_button;
static HWND g_pause_play_button;
static HWND g_reset_button;
static HWND g_keys_button;
static HWND g_audio_button;
static HWND g_settings_button;
static HWND g_fullscreen_checkbox;
static HWND g_widescreen_checkbox;
static HWND g_60_fps_checkbox;
static HWND g_auto_run_checkbox;
static HWND g_rom_path;
static HWND g_status;
static HWND g_info_window;
static HWND g_getting_started_window;
static HMENU g_menu;
static SimCityRecomp *g_game;
static HANDLE g_loader_thread;
static volatile LONG g_loading;
static int g_close_requested;
static int g_shutting_down;
static int g_paused = 1;
static int g_stock_world_active;
static int g_exact_60hz_presentation;
static enum SimCityWorldCatalogScreen g_world_catalog_screen;
static unsigned g_world_catalog_selected;
static SimCityPlaybackLog *g_world_map_audio_log;
static double g_world_frame_ms, g_world_peak_ms, g_world_audio_submit_ms;
static double g_world_inline_paint_ms, g_world_work_excluding_paint_ms;
static int g_presentation_hidden;
static int g_fullscreen_active;
static DWORD g_saved_style;
static DWORD g_saved_ex_style;
static WINDOWPLACEMENT g_saved_placement = {0};
static int g_resume_after_failed_load;
static int g_play_after_load;
static int g_adjacent_rom_found;
static SimCityInputLatch g_keyboard_input;
static uint16_t g_gamepad_input;
static SimCityGamepadInputWin32 g_gamepad;
static wchar_t g_executable_directory[PATH_CAPACITY];
#ifdef SIMCITY_HEADED_QA
static StockControllerTape g_headed_qa_tape;
static int g_headed_qa_active;

static void open_headed_qa_tape(void) {
    wchar_t path[PATH_CAPACITY];
    stock_controller_tape_clear(&g_headed_qa_tape);
    g_headed_qa_active = 0;
    if (swprintf(path, ARRAY_COUNT(path), L"%ls\\World-Map-Headed.scinput", g_executable_directory) < 0)
        return;
    FILE *file = _wfopen(path, L"rb");
    if (!file) return;
    if (fseek(file, 0, SEEK_END) == 0) {
        const long length = ftell(file);
        if (length > STOCK_TAPE_HEADER && length <= STOCK_TAPE_HEADER + 2 * STOCK_TAPE_MAX_FRAMES &&
            fseek(file, 0, SEEK_SET) == 0) {
            uint8_t *bytes = malloc((size_t)length);
            if (bytes && fread(bytes, 1u, (size_t)length, file) == (size_t)length &&
                stock_controller_tape_decode(&g_headed_qa_tape, bytes, (size_t)length) &&
                g_headed_qa_tape.start_frame == 0u)
                g_headed_qa_active = 1;
            free(bytes);
        }
    }
    fclose(file);
}
#endif
static wchar_t g_rom_directory[PATH_CAPACITY];
static wchar_t g_saves_directory[PATH_CAPACITY];
static wchar_t g_sram_path[PATH_CAPACITY];
static uint32_t g_sram_last_flush_frame;
static wchar_t g_settings_ini_path[PATH_CAPACITY];
static SimCityAudioSettings g_audio_settings;
static SimCityAudioOutput g_audio_output;
static SimCityFrontendSettingsWin32 g_frontend_settings;
static int g_settings_saved_on_exit;
static int g_loaded_snapshot_slot = -1;
static LARGE_INTEGER g_qpc_frequency;
static HANDLE g_frame_timer;
static uint64_t g_qpc_ticks_per_frame_base;
static uint32_t g_qpc_ticks_per_frame_remainder;
static uint32_t g_qpc_remainder_accumulator;
static uint64_t g_next_frame_deadline;
static SimCityPresentationClock g_presentation_clock;
static uint32_t g_presentation_frame = UINT32_MAX;
static SimCityPreparedVideo *g_prepared_video;
static uint32_t g_prepared_base_frame;
static uint32_t g_prepared_target_bias;
static uint64_t g_prepared_origin, g_prepared_slots, g_prepared_queue_full;
static uint64_t g_prepared_checkpoint_blits;
static uint64_t g_prepared_older_targets, g_prepared_blit_failures;
static uint64_t g_prepared_paint_samples, g_prepared_paint_ticks, g_prepared_paint_peak;
static uint64_t g_prepared_inline_paint_ticks;
static uint64_t g_host_headroom_samples, g_host_headroom_over;
static uint64_t g_host_headroom_over_excluding_paint;
static int g_prepared_only_paint;
static uint64_t g_presentation_missed_slots;
static uint64_t g_presentation_late_exact_paints;
static double g_presentation_work_ms;
/* Samples are retained only when the existing diagnostic log is open.
   Never perform file I/O from a presentation callback. */
typedef struct HostPresentFault {
    uint64_t deadline, dispatch, ready, done, merged;
    uint64_t paint_done, next_deadline;
    uint64_t timer_due, timer_entry, message_ticks;
    uint64_t maintenance_start, diagnostics_end, maintenance_end;
    uint32_t target, selected, previous, message_count;
    int during_guest, result, paint_failed, late_exact_paint;
    SimCityRenderStatus worker;
} HostPresentFault;
static HostPresentFault g_host_faults[24];
static unsigned g_host_fault_count, g_host_fault_unlogged;
static uint64_t g_host_timer_due, g_host_timer_entry, g_host_next_timer_due;
static uint64_t g_host_message_ticks, g_host_pending_message_ticks;
static uint32_t g_host_message_count, g_host_pending_message_count;
static uint64_t g_host_maintenance_start, g_host_diagnostics_end, g_host_maintenance_end;

static long long host_fault_offset_us(uint64_t stamp, uint64_t origin) {
    if (!stamp || !origin || g_qpc_frequency.QuadPart <= 0) return 0;
    const double scale = 1000000.0 / (double)g_qpc_frequency.QuadPart;
    return stamp >= origin ? (long long)((double)(stamp - origin) * scale) :
        -(long long)((double)(origin - stamp) * scale);
}

static void flush_host_present_faults(void) {
    if (!g_world_map_audio_log) return;
    for (unsigned i = 0u; i < g_host_fault_count; ++i) {
        const HostPresentFault *f = &g_host_faults[i];
        simcity_playback_log_printf(g_world_map_audio_log,
            "host_present_fault target=%u selected=%u previous=%u merged=%llu during_guest=%d result=%d paint_failed=%d dispatch_us=%lld ready_known=%d ready_us=%lld done_known=%d done_us=%lld timer_known=%d timer_entry_vs_due_us=%lld timer_entry_vs_slot_us=%lld prior_message_count=%u prior_message_us=%.0f late_exact_paint=%d paint_known=%d paint_vs_next_us=%lld maintenance_known=%d maintenance_start_us=%lld diagnostics_end_us=%lld maintenance_end_us=%lld worker_stage=%s worker_start_known=%d worker_start_us=%lld worker_finish_known=%d worker_finish_us=%lld\n",
            f->target, f->selected, f->previous, (unsigned long long)f->merged,
            f->during_guest, f->result, f->paint_failed,
            host_fault_offset_us(f->dispatch, f->deadline), f->ready != 0u,
            host_fault_offset_us(f->ready, f->deadline), f->done != 0u,
            host_fault_offset_us(f->done, f->deadline), f->timer_entry && f->timer_due,
            host_fault_offset_us(f->timer_entry, f->timer_due),
            host_fault_offset_us(f->timer_entry, f->deadline), f->message_count,
            g_qpc_frequency.QuadPart > 0 ? 1000000.0 * (double)f->message_ticks /
                (double)g_qpc_frequency.QuadPart : 0.0,
            f->late_exact_paint, f->paint_done != 0u,
            host_fault_offset_us(f->paint_done, f->next_deadline),
            f->maintenance_start != 0u && f->maintenance_end != 0u,
            host_fault_offset_us(f->maintenance_start, f->deadline),
            host_fault_offset_us(f->diagnostics_end, f->deadline),
            host_fault_offset_us(f->maintenance_end, f->deadline),
            simcity_prepared_video_stage_name(f->worker.stage), f->worker.started != 0u,
            host_fault_offset_us(f->worker.started, f->deadline), f->worker.finished != 0u,
            host_fault_offset_us(f->worker.finished, f->deadline));
    }
    if (g_host_fault_unlogged)
        simcity_playback_log_printf(g_world_map_audio_log, "host_present_fault_unlogged=%u\n", g_host_fault_unlogged);
    g_host_fault_count = g_host_fault_unlogged = 0u;
}
static uint64_t g_pacing_timer_ticks;
static uint64_t g_pacing_skipped_deadlines;
static uint32_t g_pacing_max_batch;
static uint64_t g_pacing_resyncs;
static uint64_t g_audio_last_fifo_dropped;
static uint64_t g_audio_last_underruns;
static uint64_t g_audio_last_queue_failures;
static uint64_t g_audio_fps_window_qpc;
static uint32_t g_audio_fps_window_frame;
static double g_audio_host_fps;
static uint64_t g_presented_frame_count;
static uint64_t g_presented_fps_window_count;
static uint32_t g_presented_last_emu_frame = UINT32_MAX;
static double g_presented_host_fps;
static uint64_t g_pacing_render_resync_frames;
static InfoDialogState g_info_state;
static int g_info_resume_after;
static HWND g_info_previous_focus;
static GettingStartedDialogState g_getting_started_state;
static int g_welcome_close_pending;
static int g_getting_started_mark_seen;
static int g_getting_started_save_failed;
static int g_startup_pending;
static wchar_t g_failure_dialog_text[12288];

/* Multiline read-only edits claim Tab themselves. Route it explicitly so the
   Welcome/About pair and every modal settings window support Tab and
   Shift+Tab consistently. */
static int route_dialog_keyboard(HWND dialog, MSG *message) {
    HWND focused;
    HWND next;
    BOOL previous;
    if (!dialog || !message || message->message != WM_KEYDOWN ||
        message->wParam != VK_TAB)
        return dialog && IsDialogMessageW(dialog, message);
    if (!IsWindow(dialog) || !IsWindowVisible(dialog) ||
        !IsWindowEnabled(dialog)) return 0;
    focused = GetFocus();
    previous = (GetKeyState(VK_SHIFT) & 0x8000) != 0;
    if (dialog == g_info_window) {
        HWND text = GetDlgItem(dialog, ID_INFO_TEXT);
        HWND close = GetDlgItem(dialog, ID_INFO_CLOSE);
        if (!text || !close) return 0;
        if (focused == text) next = close;
        else if (focused == close) next = text;
        else next = previous ? text : close;
    } else {
        if (!focused || (focused != dialog && !IsChild(dialog, focused)))
            return 0;
        next = GetNextDlgTabItem(dialog, focused, previous);
    }
    if (!next || next == focused) return 0;
    SetFocus(next);
    return 1;
}

#define IsDialogMessageW(dialog, message) \
    route_dialog_keyboard((dialog), (message))

static void start_rom_load(int play_after_load);
static void pause_game(const wchar_t *message);
static void stop_game_on_core_failure(void);
static void play_game(void);
static void close_audio(void);
static int open_audio(int show_error);
static void update_controls(void);
static void capture_core_screenshot(void);
static int capture_core_screenshot_to(const wchar_t *base_directory,
                                      wchar_t *saved_path,
                                      size_t saved_capacity);
static int capture_fullscreen_screenshot_to(wchar_t *saved_path,
                                            size_t saved_capacity);
static int write_static_core_failure_log(wchar_t *saved_path,
                                         size_t saved_capacity);
static void reset_pacing_clock(void);
static void close_prepared_video(void);
static const uint32_t *display_pixels(unsigned *width);
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
                                            int expanded,
                                            wchar_t *error,
                                            size_t error_capacity) {
    FILE *file;
    size_t count;
    int trailing, read_ok;
    char core_error[256];
    if (!game || !path || !path[0]) return 1;
    const size_t size = expanded ? simcity_recomp_world_battery_size() : SRAM_IMAGE_BYTES;
    if (GetFileAttributesW(path) == INVALID_FILE_ATTRIBUTES) {
        const DWORD failure = GetLastError();
        if (failure == ERROR_FILE_NOT_FOUND || failure == ERROR_PATH_NOT_FOUND) {
            return 1;
        }
        copy_wide(error, error_capacity, L"Unable to access the in-game save file.");
        return 0;
    }
    uint8_t *image = malloc(size);
    if (!image) {
        copy_wide(error, error_capacity, L"Not enough memory for the in-game save file.");
        return 0;
    }
    file = _wfopen(path, L"rb");
    if (!file) {
        free(image);
        copy_wide(error, error_capacity,
                  L"Unable to open the battery SRAM file.");
        return 0;
    }
    count = fread(image, 1u, size, file);
    trailing = fgetc(file);
    read_ok = !ferror(file) && count == size && trailing == EOF;
    if (fclose(file) != 0) read_ok = 0;
    if (!read_ok) {
        free(image);
        copy_wide(error, error_capacity,
                  L"The in-game save file has an invalid size or could not be read.");
        return 0;
    }
    memset(core_error, 0, sizeof(core_error));
    read_ok = expanded ? simcity_recomp_world_battery_import(game, image, size) :
        simcity_recomp_sram_load(game, image, size, core_error, sizeof(core_error));
    free(image);
    if (!read_ok) {
        if (expanded) copy_wide(error, error_capacity, L"The World Map save file is damaged or unsupported. It was not changed.");
        else utf8_to_wide(core_error, error, error_capacity);
        return 0;
    }
    return 1;
}

static int load_production_battery_win32(SimCityRecomp *game, const wchar_t *path,
                                        wchar_t *error, size_t error_capacity) {
    if (GetFileAttributesW(path) != INVALID_FILE_ATTRIBUTES)
        return load_battery_sram_file_win32(game, path, 1, error, error_capacity);
    const DWORD failure = GetLastError();
    if (failure != ERROR_FILE_NOT_FOUND && failure != ERROR_PATH_NOT_FOUND) {
        copy_wide(error, error_capacity, L"Unable to access the in-game save file.");
        return 0;
    }
    wchar_t legacy[PATH_CAPACITY];
    join_wide_path(legacy, ARRAY_COUNT(legacy), g_saves_directory, L"SimCity-USA.srm");
    if (!load_battery_sram_file_win32(game, legacy, 0, error, error_capacity)) return 0;
    if (simcity_recomp_world_battery_enable(game)) return 1;
    copy_wide(error, error_capacity, L"Unable to initialize in-game saves.");
    return 0;
}

static struct {
    SimCityBatteryWrite *job;
    SimCityRecomp *owner;
    uint64_t revision;
} g_pending_battery;

/* File replacement is serialized. Neither an older completion nor a
   failed write can clear a more recent native save. */
static int collect_battery_write(int wait) {
    int written;
    if (!g_pending_battery.job) return 1;
    if (!simcity_battery_write_collect(g_pending_battery.job, wait, &written)) return 0;
    if (written && g_pending_battery.owner == g_game)
        simcity_recomp_world_battery_acknowledge(g_game, g_pending_battery.revision);
    g_pending_battery.job = NULL;
    return 1;
}

static void schedule_world_battery_write(void) {
    if (g_pending_battery.job || !g_sram_path[0]) return;
    const size_t size = simcity_recomp_world_battery_size();
    uint8_t *image = malloc(size);
    if (image && simcity_recomp_world_battery_export(g_game, image, size)) {
        g_pending_battery.job = simcity_battery_write_start(g_saves_directory, g_sram_path, image, size);
        if (g_pending_battery.job) {
            g_pending_battery.owner = g_game;
            g_pending_battery.revision = simcity_recomp_world_battery_revision(g_game);
            return;
        }
    }
    free(image);
}

static int flush_battery_sram_win32(int force, wchar_t *saved_path,
                                      size_t saved_capacity) {
    if (saved_path && saved_capacity) saved_path[0] = L'\0';
    if (!collect_battery_write(force)) return 0;
    if (!g_game || !g_sram_path[0]) return 1;
    if (!simcity_recomp_world_battery_dirty(g_game)) return 1;
    const size_t size = simcity_recomp_world_battery_size();
    uint8_t *image = malloc(size);
    if (!image) return 0;
    const int exported = simcity_recomp_world_battery_export(g_game, image, size);
    const int written = exported && simcity_battery_write_now(g_saves_directory, g_sram_path, image, size);
    free(image);
    if (!written) return 0;
    simcity_recomp_world_battery_mark_clean(g_game);
    g_sram_last_flush_frame = simcity_recomp_current_frame(g_game);
    if (saved_path && saved_capacity)
        copy_wide(saved_path, saved_capacity, g_sram_path);
    return 1;
}

static void maybe_flush_battery_sram_win32(void) {
    uint32_t frame;
    if (!collect_battery_write(0)) return;
    if (!g_game || !simcity_recomp_world_battery_dirty(g_game)) return;
    frame = simcity_recomp_current_frame(g_game);
    if (frame - g_sram_last_flush_frame >= SRAM_FLUSH_INTERVAL_FRAMES) {
        g_sram_last_flush_frame = frame;
        schedule_world_battery_write();
    }
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

static void restore_main_window_focus(HWND preferred) {
    if (g_shutting_down || !IsWindow(g_window)) return;
    SetForegroundWindow(g_window);
    SetActiveWindow(g_window);
    if (!IsWindow(preferred) ||
        (preferred != g_window && !IsChild(g_window, preferred)) ||
        !IsWindowEnabled(preferred) || !IsWindowVisible(preferred))
        preferred = g_window;
    SetFocus(preferred);
    NotifyWinEvent(EVENT_OBJECT_FOCUS, preferred,
                   OBJID_CLIENT, CHILDID_SELF);
}

static void update_running_window_title(void) {
    wchar_t title[128];
    if (!IsWindow(g_window) || !g_game || g_paused) return;
    if (!g_frontend_settings.show_fps_counter) {
        SetWindowTextW(g_window, APP_TITLE);
        return;
    }
    (void)_snwprintf_s(title, ARRAY_COUNT(title), _TRUNCATE,
                       L"%s - %.1f FPS", APP_TITLE, g_presented_host_fps);
    SetWindowTextW(g_window, title);
}

static unsigned world_log_wram(unsigned address, unsigned count) {
    uint8_t data[3] = {0};
    if (!simcity_recomp_read_wram(g_game, address, data, count)) return 0u;
    return data[0] | ((unsigned)data[1] << 8u) | ((unsigned)data[2] << 16u);
}

static int world_log_status(SimCityWorldMapStatus *world) {
    if (!simcity_recomp_stock_world_active(g_game))
        return simcity_recomp_world_map_status(g_game, world);
    const int x = (int)(int16_t)world_log_wram(0x01bdu, 2u) * 8 +
                  (int)(world_log_wram(0x0139u, 2u) & 7u) +
                  (int)(int16_t)world_log_wram(0x025du, 2u);
    const int y = (int)(int16_t)world_log_wram(0x01bfu, 2u) * 8 +
                  (int)(world_log_wram(0x0137u, 2u) & 7u) +
                  (int)(int16_t)world_log_wram(0x025fu, 2u);
    world->width = 240u;
    world->height = 200u;
    world->cursor_x = x >= 0 ? (unsigned)x / 8u : 0u;
    world->cursor_y = y >= 0 ? (unsigned)y / 8u : 0u;
    world->tool = world_log_wram(0x01f9u, 2u);
    world->funds = world_log_wram(0x0b9du, 3u);
    world->plants = world_log_wram(0x0c85u, 2u);
    world->zones = world_log_wram(0x0c73u, 2u) + world_log_wram(0x0c75u, 2u) +
                   world_log_wram(0x0c77u, 2u);
    world->population = world_log_wram(0x0ba5u, 2u) + (world_log_wram(0x0ba7u, 2u) << 16u);
    return 1;
}

static void report_audio_diagnostic_events(void) {
    SimCityAudioDiagnostics diagnostics;
    uint64_t fifo_dropped;
    uint64_t fps_frame_delta = 0u;
    LARGE_INTEGER fps_now;
    if (!g_game) return;
    memset(&diagnostics, 0, sizeof(diagnostics));
    simcity_audio_output_get_diagnostics(&g_audio_output, &diagnostics);
    fifo_dropped = simcity_recomp_audio_dropped_frames(g_game);
    if (g_world_map_audio_log && (simcity_recomp_current_frame(g_game) % 60u == 0u ||
            diagnostics.underruns != g_audio_last_underruns ||
            diagnostics.queue_failures != g_audio_last_queue_failures ||
            fifo_dropped != g_audio_last_fifo_dropped)) {
        SimCityWorldMapStatus world = {0};
        SimCityRecompAudioStaticStatus core_audio = {0};
        (void)world_log_status(&world);
        (void)simcity_recomp_audio_static_status(g_game, &core_audio);
        simcity_playback_log_printf(g_world_map_audio_log,
                "frame=%u stock_world=%d cursor=(%u,%u) tool=%u funds=%u plants=%u roads=%u powered_roads=%u zones=%u served_zones=%u population=%u commuters=%u congested=%u peak_load=%u edits=%u rejected=%u output_open=%d queue=%u underruns=%llu failures=%llu dropped=%llu pcm_overflows=%llu skipped_deadlines=%llu guest_fps=%.2f painted_fps=%.2f frame_work_ms=%.3f peak_work_ms=%.3f audio_submit_ms=%.3f video_missed_slots=%llu video_work_ms=%.3f\n",
                simcity_recomp_current_frame(g_game), simcity_recomp_stock_world_active(g_game),
                world.cursor_x, world.cursor_y,
                world.tool, world.funds, world.plants, world.roads, world.powered_roads,
                world.zones, world.served_zones,
                world.population, world.commuters, world.congested_roads, world.peak_road_load,
                world.edits, world.rejected, simcity_audio_output_is_open(&g_audio_output),
                diagnostics.queue_depth_frames, (unsigned long long)diagnostics.underruns,
                (unsigned long long)diagnostics.queue_failures, (unsigned long long)fifo_dropped,
                (unsigned long long)core_audio.pcm_overflows,
                (unsigned long long)g_pacing_skipped_deadlines,
                g_audio_host_fps, g_presented_host_fps, g_world_frame_ms,
                g_world_peak_ms, g_world_audio_submit_ms,
                (unsigned long long)g_presentation_missed_slots,
                g_presentation_work_ms);
        if (g_prepared_video && g_presentation_frame != UINT32_MAX) {
            const uint32_t guest_delta = simcity_recomp_current_frame(g_game) -
                                         g_presentation_frame;
            simcity_playback_log_printf(g_world_map_audio_log,
                    "av_timing guest_frame=%u video_frame=%u video_lag_ms=%.2f device_queue_ms=%.2f render_peak_ms=%.2f queue_full=%llu checkpoint_blits=%llu older_targets=%llu blit_failures=%llu recovery_bias=%u core_audio_over_8_33ms=%llu/%llu inline_paint_ms=%.3f work_excluding_inline_paint_ms=%.3f work_excluding_inline_paint_over_8_33ms=%llu/%llu late_exact_paints=%llu\n",
                    simcity_recomp_current_frame(g_game), g_presentation_frame,
                    1000.0 * guest_delta / simcity_recomp_nominal_fps(),
                    diagnostics.device_sample_rate > 0 ?
                        1000.0 * diagnostics.queue_depth_frames / diagnostics.device_sample_rate : 0.0,
                    1000.0 * simcity_prepared_video_peak_render_ticks(g_prepared_video) /
                        (double)g_qpc_frequency.QuadPart,
                    (unsigned long long)g_prepared_queue_full,
                    (unsigned long long)g_prepared_checkpoint_blits,
                    (unsigned long long)g_prepared_older_targets,
                    (unsigned long long)g_prepared_blit_failures,
                    g_prepared_target_bias,
                    (unsigned long long)g_host_headroom_over,
                    (unsigned long long)g_host_headroom_samples,
                    g_world_inline_paint_ms, g_world_work_excluding_paint_ms,
                    (unsigned long long)g_host_headroom_over_excluding_paint,
                    (unsigned long long)g_host_headroom_samples,
                    (unsigned long long)g_presentation_late_exact_paints);
        }
        flush_host_present_faults();
        g_world_peak_ms = 0.0;
        g_host_headroom_samples = g_host_headroom_over = 0u;
        g_host_headroom_over_excluding_paint = 0u;
    }
    if (g_qpc_frequency.QuadPart > 0 && QueryPerformanceCounter(&fps_now)) {
        uint32_t current_frame = simcity_recomp_current_frame(g_game);
        if (!g_audio_fps_window_qpc ||
            current_frame < g_audio_fps_window_frame) {
            g_audio_fps_window_qpc = (uint64_t)fps_now.QuadPart;
            g_audio_fps_window_frame = current_frame;
            g_presented_fps_window_count = g_presented_frame_count;
        } else if ((uint64_t)fps_now.QuadPart - g_audio_fps_window_qpc >=
                   (uint64_t)g_qpc_frequency.QuadPart) {
            uint64_t elapsed = (uint64_t)fps_now.QuadPart -
                               g_audio_fps_window_qpc;
            fps_frame_delta = (uint64_t)current_frame -
                              g_audio_fps_window_frame;
            g_audio_host_fps = (double)fps_frame_delta *
                (double)g_qpc_frequency.QuadPart / (double)elapsed;
            g_presented_host_fps =
                (double)(g_presented_frame_count -
                         g_presented_fps_window_count) *
                (double)g_qpc_frequency.QuadPart / (double)elapsed;
            g_audio_fps_window_qpc = (uint64_t)fps_now.QuadPart;
            g_audio_fps_window_frame = current_frame;
            g_presented_fps_window_count = g_presented_frame_count;
            update_running_window_title();
        }
    }

    if (fifo_dropped < g_audio_last_fifo_dropped)
        g_audio_last_fifo_dropped = fifo_dropped;
    if (diagnostics.underruns < g_audio_last_underruns)
        g_audio_last_underruns = diagnostics.underruns;
    if (diagnostics.queue_failures < g_audio_last_queue_failures)
        g_audio_last_queue_failures = diagnostics.queue_failures;

    g_audio_last_fifo_dropped = fifo_dropped;
    g_audio_last_underruns = diagnostics.underruns;
    g_audio_last_queue_failures = diagnostics.queue_failures;
}

static uint16_t virtual_key_to_input(WPARAM key) {
    return simcity_frontend_settings_win32_input(&g_frontend_settings, (UINT)key);
}

static int keyboard_gameplay_active(void) {
    return g_frontend_settings.input_source == SIMCITY_INPUT_SOURCE_KEYBOARD ||
           !simcity_gamepad_win32_connected(&g_gamepad);
}

static uint16_t opposite_direction(uint16_t mask) {
    if (mask == SIMCITY_INPUT_UP) return SIMCITY_INPUT_DOWN;
    if (mask == SIMCITY_INPUT_DOWN) return SIMCITY_INPUT_UP;
    if (mask == SIMCITY_INPUT_LEFT) return SIMCITY_INPUT_RIGHT;
    if (mask == SIMCITY_INPUT_RIGHT) return SIMCITY_INPUT_LEFT;
    return 0u;
}

static uint16_t current_gameplay_input(void) {
    if (g_frontend_settings.input_source == SIMCITY_INPUT_SOURCE_GAMEPAD &&
        simcity_gamepad_win32_connected(&g_gamepad))
        return g_gamepad_input;
    return simcity_input_latch_sample(&g_keyboard_input);
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
                  L"The exact 2,097,152-byte SimCity USA/Canada NTSC ROM is required.");
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
    } else if (!load_production_battery_win32(result->game, request->sram_path,
                                            result->error, ARRAY_COUNT(result->error))) {
        simcity_recomp_destroy(result->game);
        result->game = NULL;
    }
    free(rom);
    free(path);
    free(request);
    {
        DWORD status = result->game ? 0u : 1u;
        PostMessageW(g_window, WM_APP_LOAD_COMPLETE, 0, (LPARAM)result);
        return status;
    }
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
    ShowWindow(g_settings_button, command);
    ShowWindow(g_fullscreen_checkbox, command);
    ShowWindow(g_widescreen_checkbox, command);
    ShowWindow(g_60_fps_checkbox, command);
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
    g_audio_last_fifo_dropped = 0u;
    g_audio_last_underruns = 0u;
    g_audio_last_queue_failures = 0u;
    g_audio_fps_window_qpc = 0u;
    g_audio_fps_window_frame = 0u;
    g_audio_host_fps = 0.0;
    g_presented_frame_count = 0u;
    g_presented_fps_window_count = 0u;
    g_presented_last_emu_frame = UINT32_MAX;
    g_presented_host_fps = 0.0;
    g_pacing_render_resync_frames = 0u;
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
    EnableWindow(g_settings_button, !loading);
    EnableWindow(g_fullscreen_checkbox, !loading);
    EnableWindow(g_widescreen_checkbox, !loading);
    EnableWindow(g_60_fps_checkbox, !loading);
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
    CheckMenuItem(g_menu, ID_FULLSCREEN, MF_BYCOMMAND |
                  (SendMessageW(g_fullscreen_checkbox, BM_GETCHECK, 0, 0) ==
                   BST_CHECKED ? MF_CHECKED : MF_UNCHECKED));
    CheckMenuItem(g_menu, ID_WIDESCREEN, MF_BYCOMMAND |
                  (SendMessageW(g_widescreen_checkbox, BM_GETCHECK, 0, 0) ==
                   BST_CHECKED ? MF_CHECKED : MF_UNCHECKED));
    SendMessageW(g_60_fps_checkbox, BM_SETCHECK,
                 g_exact_60hz_presentation ? BST_CHECKED : BST_UNCHECKED, 0);
    CheckMenuItem(g_menu, ID_60_FPS, MF_BYCOMMAND |
                  (g_exact_60hz_presentation ? MF_CHECKED : MF_UNCHECKED));
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
                                   g_window, error,
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
    g_paused = 1;
    if (g_prepared_video) {
        close_prepared_video();
        if (simcity_recomp_render_presentation_frame(g_game, NULL, 0u))
            g_presentation_frame = simcity_recomp_current_frame(g_game);
    }
    simcity_input_latch_reset(&g_keyboard_input);
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
    wchar_t log_path[PATH_CAPACITY];
    wchar_t status[PATH_CAPACITY + 256u];
    wchar_t detail[8192];
    int log_written;
    /* A missing static authority is a production error. Stop immediately,
       preserve the final frame, save the complete machine diagnostics and
       present the exact repair evidence without enabling a fallback path. */
    simcity_audio_output_pause(&g_audio_output);
    g_paused = 1;
    close_prepared_video();
    simcity_input_latch_reset(&g_keyboard_input);
    g_gamepad_input = 0u;
    detail[0] = L'\0';
    utf8_to_wide(simcity_recomp_last_error(g_game), detail,
                 sizeof(detail) / sizeof(detail[0]));
    log_written = write_static_core_failure_log(
        log_path, sizeof(log_path) / sizeof(log_path[0]));
    if (log_written) {
        (void)_snwprintf(status, sizeof(status) / sizeof(status[0]),
                         L"Static core stopped fail-closed. Diagnostic log: %s",
                         log_path);
        status[(sizeof(status) / sizeof(status[0])) - 1u] = L'\0';
        set_status(status);
        (void)_snwprintf(
            g_failure_dialog_text,
            sizeof(g_failure_dialog_text) / sizeof(g_failure_dialog_text[0]),
            L"SimCity stopped because the static-recompiled core reached "
            L"an execution or hardware state that is not in its compiled "
            L"production authority. No interpreter or emulator fallback was used.\r\n\r\n"
            L"Error details\r\n"
            L"-------------\r\n%s\r\n\r\n"
            L"Diagnostic log\r\n"
            L"--------------\r\n%s\r\n\r\n"
            L"Keep this text file when reporting the problem. It contains the "
            L"processor state, exact source and target contexts, expected "
            L"successors, recent execution history, timing, audio, PPU and "
            L"machine-state hashes needed to reproduce and repair the gap.",
            detail[0] ? detail : L"The static core stopped without a text description.",
            log_path);
    } else {
        set_status(L"Static core stopped fail-closed, but its diagnostic log could not be written.");
        (void)_snwprintf(
            g_failure_dialog_text,
            sizeof(g_failure_dialog_text) / sizeof(g_failure_dialog_text[0]),
            L"SimCity stopped because the static-recompiled core reached "
            L"an execution or hardware state that is not in its compiled "
            L"production authority. No interpreter or emulator fallback was used.\r\n\r\n"
            L"Error details\r\n"
            L"-------------\r\n%s\r\n\r\n"
            L"The Logs folder or diagnostic text file could not be created. "
            L"Check that this folder is writable, then reproduce the error.",
            detail[0] ? detail : L"The static core stopped without a text description.");
    }
    g_failure_dialog_text[
        (sizeof(g_failure_dialog_text) / sizeof(g_failure_dialog_text[0])) - 1u] =
        L'\0';
    InvalidateRect(g_window, NULL, FALSE);
    UpdateWindow(g_window);
    g_info_resume_after = 0;
    if (IsWindow(g_info_window)) DestroyWindow(g_info_window);
    show_information_window(L"Static Recompilation Error",
                            g_failure_dialog_text, 860, 640);
}

static void play_game(void) {
    if (!g_game) return;
    g_paused = 0;
    update_running_window_title();
    simcity_input_latch_reset(&g_keyboard_input);
    g_gamepad_input = 0u;
    simcity_audio_output_resume(&g_audio_output);
    reset_pacing_clock();
    if (simcity_recomp_stock_world_active(g_game)) {
        set_status(L"World Map. Use the original SimCity controls. F2 and F3 open World Map snapshot slots.");
    } else if (simcity_recomp_stock_world_new_city_pending(g_game)) {
        set_status(L"World Map selected. Finish the New City setup.");
    } else if (simcity_audio_output_is_open(&g_audio_output)) {
        set_status(L"SimCity is running.");
    } else {
        set_status(L"Running generated static code. Audio output is disabled in Audio Settings.");
    }
    update_controls();
    apply_play_presentation();
    restore_main_window_focus(g_window);
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
                                         g_settings_ini_path);
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
    if (!flush_battery_sram_win32(1, NULL, 0u)) {
        free(path);
        set_status(L"Could not write the in-game saves. The current city is still open.");
        MessageBoxW(g_window, L"Could not write the in-game saves. Check the save folder and try again.",
                    APP_TITLE, MB_OK | MB_ICONERROR);
        return;
    }
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
    set_status(L"Loading and verifying the exact SimCity ROM...");
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

static int capture_core_screenshot_to(const wchar_t *base_directory,
                                      wchar_t *saved_path,
                                      size_t saved_capacity) {
    const uint32_t *source;
    uint32_t *pixels = NULL;
    wchar_t directory[PATH_CAPACITY];
    wchar_t path[PATH_CAPACITY];
    SYSTEMTIME now;
    uint32_t frame = g_game ? simcity_recomp_current_frame(g_game) : 0u;
    unsigned frame_width;
    if (saved_path && saved_capacity) saved_path[0] = L'\0';
    source = display_pixels(&frame_width);
    if (!source) return 0;
    if (simcity_prepared_video_pixels(g_prepared_video, NULL))
        frame = g_presentation_frame;
    if (frame_width != SIMCITY_RECOMP_FRAME_WIDTH &&
        frame_width != SIMCITY_RECOMP_WIDESCREEN_WIDTH) return 0;
    /* Match Mesen's screenshot ownership: copy the last completed emulator
       output buffer first, then encode the private copy.  Never sample the
       Windows desktop/window surface or a scanline still being composed. */
    pixels = (uint32_t *)malloc((size_t)frame_width *
                                SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*pixels));
    if (!pixels) return 0;
    memcpy(pixels, source, (size_t)frame_width *
                           SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*pixels));
    if (base_directory && base_directory[0])
        join_wide_path(directory, PATH_CAPACITY, base_directory, L"Screenshots");
    else
        join_wide_path(directory, PATH_CAPACITY, g_executable_directory,
                       L"Screenshots");
    if (!simcity_win32_ensure_directory_tree(directory)) {
        free(pixels);
        return 0;
    }
    GetLocalTime(&now);
    (void)_snwprintf(path, PATH_CAPACITY,
               L"%s\\simcity-frame-%08u-%04u%02u%02u-%02u%02u%02u-%03u.bmp",
               directory, frame, (unsigned)now.wYear, (unsigned)now.wMonth,
               (unsigned)now.wDay, (unsigned)now.wHour, (unsigned)now.wMinute,
               (unsigned)now.wSecond, (unsigned)now.wMilliseconds);
    path[PATH_CAPACITY - 1u] = L'\0';
    if (!save_bgra_bmp(path, (const uint8_t *)pixels,
                       (int)frame_width,
                       (int)SIMCITY_RECOMP_FRAME_HEIGHT,
                       (int)frame_width * 4)) {
        free(pixels);
        return 0;
    }
    free(pixels);
    if (saved_path && saved_capacity)
        copy_wide(saved_path, saved_capacity, path);
    return 1;
}

static int capture_fullscreen_screenshot_to(wchar_t *saved_path,
                                            size_t saved_capacity) {
    RECT client;
    BITMAPINFO bitmap;
    HDC window_dc = NULL;
    HDC memory_dc = NULL;
    HBITMAP dib = NULL;
    HGDIOBJ previous = NULL;
    void *pixels = NULL;
    wchar_t directory[PATH_CAPACITY];
    wchar_t path[PATH_CAPACITY];
    SYSTEMTIME now;
    uint32_t frame = g_game ? simcity_recomp_current_frame(g_game) : 0u;
    int width;
    int height;
    int saved = 0;
    if (saved_path && saved_capacity) saved_path[0] = L'\0';
    if (simcity_prepared_video_pixels(g_prepared_video, NULL))
        frame = g_presentation_frame;
    if (!g_window || !g_fullscreen_active || !GetClientRect(g_window, &client))
        return 0;
    width = client.right - client.left;
    height = client.bottom - client.top;
    if (width <= 0 || height <= 0) return 0;

    /* Capture the borderless fullscreen client exactly as presented,
       including native or SimCity-wide scaling and any black bars. */
    (void)UpdateWindow(g_window);
    GdiFlush();
    window_dc = GetDC(g_window);
    if (!window_dc) goto cleanup;
    memory_dc = CreateCompatibleDC(window_dc);
    if (!memory_dc) goto cleanup;
    ZeroMemory(&bitmap, sizeof(bitmap));
    bitmap.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bitmap.bmiHeader.biWidth = width;
    bitmap.bmiHeader.biHeight = -height;
    bitmap.bmiHeader.biPlanes = 1u;
    bitmap.bmiHeader.biBitCount = 32u;
    bitmap.bmiHeader.biCompression = BI_RGB;
    dib = CreateDIBSection(window_dc, &bitmap, DIB_RGB_COLORS, &pixels,
                           NULL, 0u);
    if (!dib || !pixels) goto cleanup;
    previous = SelectObject(memory_dc, dib);
    if (!previous || previous == HGDI_ERROR) goto cleanup;
    if (!BitBlt(memory_dc, 0, 0, width, height, window_dc, 0, 0, SRCCOPY))
        goto cleanup;
    GdiFlush();

    join_wide_path(directory, PATH_CAPACITY, g_executable_directory,
                   L"Screenshots");
    if (!simcity_win32_ensure_directory_tree(directory)) goto cleanup;
    GetLocalTime(&now);
    (void)_snwprintf(
        path, PATH_CAPACITY,
        L"%s\\simcity-fullscreen-%dx%d-frame-%08u-%04u%02u%02u-%02u%02u%02u-%03u.bmp",
        directory, width, height, frame, (unsigned)now.wYear,
        (unsigned)now.wMonth, (unsigned)now.wDay, (unsigned)now.wHour,
        (unsigned)now.wMinute, (unsigned)now.wSecond,
        (unsigned)now.wMilliseconds);
    path[PATH_CAPACITY - 1u] = L'\0';
    if (!save_bgra_bmp(path, (const uint8_t *)pixels, width, height,
                       width * 4))
        goto cleanup;
    if (saved_path && saved_capacity)
        copy_wide(saved_path, saved_capacity, path);
    saved = 1;

cleanup:
    if (previous && previous != HGDI_ERROR)
        (void)SelectObject(memory_dc, previous);
    if (dib) (void)DeleteObject(dib);
    if (memory_dc) (void)DeleteDC(memory_dc);
    if (window_dc) (void)ReleaseDC(g_window, window_dc);
    return saved;
}

static int write_static_core_failure_log(wchar_t *saved_path,
                                         size_t saved_capacity) {
    wchar_t logs_directory[PATH_CAPACITY];
    wchar_t log_path[PATH_CAPACITY];
    char narrow_log_path[PATH_CAPACITY * 3u];
    char error[192];
    SYSTEMTIME now;
    if (saved_path && saved_capacity) saved_path[0] = L'\0';
    if (!g_game || !g_executable_directory[0]) return 0;
    join_wide_path(logs_directory, PATH_CAPACITY,
                   g_executable_directory, L"Logs");
    if (!simcity_win32_ensure_directory_tree(logs_directory)) return 0;
    GetLocalTime(&now);
    (void)_snwprintf(
        log_path, PATH_CAPACITY,
        L"%s\\Static-Core-Failure-%04u%02u%02u-%02u%02u%02u-%03u.txt",
        logs_directory, (unsigned)now.wYear, (unsigned)now.wMonth,
        (unsigned)now.wDay, (unsigned)now.wHour, (unsigned)now.wMinute,
        (unsigned)now.wSecond, (unsigned)now.wMilliseconds);
    log_path[PATH_CAPACITY - 1u] = L'\0';
    if (!wide_to_utf8(log_path, narrow_log_path,
                      sizeof(narrow_log_path)) ||
        !simcity_recomp_write_diagnostic_log(
            g_game, narrow_log_path, NULL, error, sizeof(error)))
        return 0;
    if (saved_path && saved_capacity)
        copy_wide(saved_path, saved_capacity, log_path);
    return 1;
}

static uint64_t screenshot_wram_hash(void) {
    uint8_t block[4096];
    uint64_t hash = UINT64_C(14695981039346656037);
    for (uint32_t base = 0u; base < 128u * 1024u; base += (uint32_t)sizeof(block)) {
        if (!simcity_recomp_read_wram(g_game, base, block, sizeof(block))) return 0u;
        for (size_t i = 0u; i < sizeof(block); ++i)
            hash = (hash ^ block[i]) * UINT64_C(1099511628211);
    }
    return hash;
}

static int format_screenshot_state(char *report, size_t capacity, uint32_t image_frame,
    const SimCityWorldMapStatus *world, int world_active, const SimCityAudioDiagnostics *audio) {
    SimCityRecompAudioStaticStatus core_audio = {0};
    SimCityRecompStockWorldSample city = {0};
    SYSTEMTIME now;
    unsigned source_width = 0u;
    const uint32_t live_frame = simcity_recomp_current_frame(g_game);
    const int audio_status = simcity_recomp_audio_static_status(g_game, &core_audio);
    const int sampled_city = simcity_recomp_stock_world_sample(g_game, world->cursor_x, world->cursor_y, &city);
    const double render_peak_ms = g_prepared_video && g_qpc_frequency.QuadPart > 0 ?
        1000.0 * simcity_prepared_video_peak_render_ticks(g_prepared_video) /
            (double)g_qpc_frequency.QuadPart : 0.0;
    const double qpc_to_ms = g_qpc_frequency.QuadPart > 0 ?
        1000.0 / (double)g_qpc_frequency.QuadPart : 0.0;
    const double paint_peak_ms = (double)g_prepared_paint_peak * qpc_to_ms;
    const double paint_mean_ms = g_prepared_paint_samples ?
        (double)g_prepared_paint_ticks * qpc_to_ms / (double)g_prepared_paint_samples : 0.0;
    (void)display_pixels(&source_width);
    GetLocalTime(&now);
    const int size = snprintf(report, capacity,
        "SimCity 2.0.0 screenshot diagnostics (v2)\r\n"
        "Captured local time: %04u-%02u-%02u %02u:%02u:%02u.%03u\r\n"
        "Capture: %s; source: %ux%u\r\n"
        "Mode: %s; paused: %s; core failed: %s\r\n"
        "\r\n"
        "Image frame: %u\r\n"
        "Live guest frame: %u\r\n"
        "Image age (guest frames): %u\r\n"
        "Master clock ticks: %llu\r\n"
        "CPU instructions: %llu\r\n"
        "Original guest rate: %.6f FPS\r\n"
        "Display mode: %s\r\n"
        "Measured guest FPS: %.2f; presented FPS: %.2f\r\n"
        "Frame work: %.3f ms; present work: %.3f ms\r\n"
        "Guest updates including audio and inline paint above 8.33 ms: %llu/%llu measured\r\n"
        "Latest guest work: %.3f ms inline paint; %.3f ms excluding inline paint\r\n"
        "Guest and audio updates above 8.33 ms excluding inline paint: %llu/%llu measured\r\n"
        "Skipped guest deadlines: %llu; missed display slots: %llu; late exact paints: %llu\r\n"
        "Render worker: %s; render peak: %.3f ms; render queue full: %llu\r\n"
        "Prepared window paints: %llu; mean: %.3f ms; peak: %.3f ms; guest overlap: %s\r\n"
        "Old prepared targets: %llu; failed paints: %llu; guest-checkpoint paints: %llu\r\n"
        "\r\n"
        "Audio output: %s; device sample rate: %d Hz\r\n"
        "Audio queue: %u frames; target: %u; average latency: %.2f ms\r\n"
        "Device underruns: %llu; queue failures: %llu; recoveries: %llu\r\n"
        "Core audio status available: %s; PCM generated: %llu; core overflows: %llu; dropped: %llu\r\n"
        "\r\n"
        "Guest RAM at capture\r\n"
        "Scenario ID: %u; year: %u; month index: %u\r\n"
        "Treasury: %u; population: %u; tool ID: %u; map focus: %04X\r\n"
        "Last placement anchor: (%u,%u); current controller mask: %04X\r\n"
        "Expanded map state available: %s; size: %ux%u\r\n"
        "Expanded map cursor: (%u,%u); funds: %u; plants: %u; zones: %u\r\n"
        "WRAM: 131072 bytes; FNV-1a-64: %016llX\r\n"
        "Native screen $0014=%04X; camera tiles $01BD/$01BF=(%d,%d); speed $012B=%04X\r\n"
        "Expanded simulation sample: %s; census visits: %u; census/power order errors: %u/%u\r\n"
        "Passes: power=%u density=%u environment=%u crime=%u fire=%u\r\n"
        "Traffic writes: %u (west=%u east=%u); cursor cell: traffic=%u land=%u pollution=%u density=%u crime=%u police=%u fire=%u\r\n"
        "\r\n"
        "Audio detail: volume=%d%%; playback ratio=%.6f; peak queue=%u; stale frames=%llu; device reopens=%llu\r\n"
        "SMP: PC=%04X epoch=%u failed=%u opcode mismatches=%u; PCM known=%llu unknown=%llu hash=%016llX\r\n",
        (unsigned)now.wYear, (unsigned)now.wMonth, (unsigned)now.wDay,
        (unsigned)now.wHour, (unsigned)now.wMinute, (unsigned)now.wSecond,
        (unsigned)now.wMilliseconds, g_fullscreen_active ? "fullscreen client" : "game output",
        source_width, SIMCITY_RECOMP_FRAME_HEIGHT,
        simcity_recomp_stock_world_active(g_game) ? "World Map (stock engine)" :
            world_active ? "World Map sandbox" : "original game",
        g_paused ? "yes" : "no", simcity_recomp_failed(g_game) ? "yes" : "no",
        image_frame, live_frame, image_frame <= live_frame ? live_frame - image_frame : 0u,
        (unsigned long long)simcity_recomp_master_clock(g_game),
        (unsigned long long)simcity_recomp_instruction_count(g_game), simcity_recomp_nominal_fps(),
        g_exact_60hz_presentation ? "buffered 60 Hz" : "original NTSC cadence",
        g_audio_host_fps, g_presented_host_fps, g_world_frame_ms, g_presentation_work_ms,
        (unsigned long long)g_host_headroom_over,
        (unsigned long long)g_host_headroom_samples,
        g_world_inline_paint_ms, g_world_work_excluding_paint_ms,
        (unsigned long long)g_host_headroom_over_excluding_paint,
        (unsigned long long)g_host_headroom_samples,
        (unsigned long long)g_pacing_skipped_deadlines,
        (unsigned long long)g_presentation_missed_slots,
        (unsigned long long)g_presentation_late_exact_paints,
        g_prepared_video ? "active" : "not active", render_peak_ms,
        (unsigned long long)g_prepared_queue_full,
        (unsigned long long)g_prepared_paint_samples, paint_mean_ms, paint_peak_ms,
        g_prepared_video && simcity_recomp_stock_world_active(g_game) ? "on" : "off",
        (unsigned long long)g_prepared_older_targets, (unsigned long long)g_prepared_blit_failures,
        (unsigned long long)g_prepared_checkpoint_blits,
        simcity_audio_output_is_open(&g_audio_output) ? "open" : "closed",
        audio->device_sample_rate, audio->queue_depth_frames, audio->target_latency_frames,
        (double)audio->average_latency_ms, (unsigned long long)audio->underruns,
        (unsigned long long)audio->queue_failures, (unsigned long long)audio->queue_recoveries,
        audio_status ? "yes" : "no", (unsigned long long)core_audio.pcm_frames,
        (unsigned long long)core_audio.pcm_overflows,
        (unsigned long long)simcity_recomp_audio_dropped_frames(g_game),
        world_log_wram(0x0040u, 2u), world_log_wram(0x0b53u, 2u), world_log_wram(0x0b55u, 2u),
        world_log_wram(0x0b9du, 3u), world_log_wram(0x0ba5u, 3u), world_log_wram(0x020du, 2u),
        world_log_wram(0x0201u, 2u), world_log_wram(0x0205u, 2u), world_log_wram(0x0207u, 2u),
        (unsigned)current_gameplay_input(), world_active ? "yes" : "no",
        world->width, world->height, world->cursor_x, world->cursor_y,
        world->funds, world->plants, world->zones,
        (unsigned long long)screenshot_wram_hash(),
        world_log_wram(0x0014u, 2u), (int)(int16_t)world_log_wram(0x01bdu, 2u),
        (int)(int16_t)world_log_wram(0x01bfu, 2u), world_log_wram(0x012bu, 2u),
        sampled_city ? "available" : "not available", city.census_visits,
        city.census_order_errors, city.power_order_errors, city.power_cycles,
        city.density_cycles, city.environment_cycles, city.crime_cycles, city.fire_cycles,
        city.traffic_writes, city.traffic_west, city.traffic_east, (unsigned)city.traffic,
        (unsigned)city.land_value, (unsigned)city.pollution, (unsigned)city.density,
        (unsigned)city.crime, (unsigned)city.police, (unsigned)city.fire,
        g_audio_settings.volume_percent, (double)audio->playback_ratio,
        audio->peak_queue_depth_frames, (unsigned long long)audio->stale_frames_dropped,
        (unsigned long long)audio->device_reopens, (unsigned)core_audio.current_smp_pc,
        (unsigned)core_audio.current_epoch, (unsigned)core_audio.route_failed, core_audio.opcode_mismatches,
        (unsigned long long)core_audio.pcm_known_frames, (unsigned long long)core_audio.pcm_unknown_frames,
        (unsigned long long)core_audio.pcm_hash);
    return size > 0 && (size_t)size < capacity;
}

static void capture_core_screenshot(void) {
    wchar_t path[PATH_CAPACITY];
    wchar_t status[PATH_CAPACITY + 96u];
    char report[8192];
    uint32_t frame = g_game ? simcity_recomp_current_frame(g_game) : 0u;
    SimCityWorldMapStatus world = {0};
    SimCityAudioDiagnostics audio = {0};
    const int world_active = world_log_status(&world);
    const int stock_menu = simcity_recomp_world_menu_ready(g_game);
    if (!g_game) {
        set_status(L"Load SimCity before taking a screenshot.");
        return;
    }
    simcity_audio_output_get_diagnostics(&g_audio_output, &audio);
    int resume_audio = g_game && !g_paused &&
                       simcity_audio_output_is_open(&g_audio_output);
    if (resume_audio) simcity_audio_output_pause(&g_audio_output);
    if (simcity_prepared_video_pixels(g_prepared_video, NULL))
        frame = g_presentation_frame;
    else if (g_exact_60hz_presentation && g_game && g_presentation_frame != frame) {
        if (!simcity_recomp_render_presentation_frame(g_game, NULL, 0u)) {
            if (resume_audio) {
                simcity_audio_output_resume(&g_audio_output);
                reset_pacing_clock();
            }
            set_status(L"Unable to render the current frame for the screenshot.");
            return;
        }
        g_presentation_frame = frame;
    }
    if (g_fullscreen_active && g_game)
        RedrawWindow(g_window, NULL, NULL, RDW_INVALIDATE | RDW_UPDATENOW);
    const int have_report = format_screenshot_state(report, sizeof(report), frame,
        &world, world_active, &audio);
    if (!(g_fullscreen_active ?
          capture_fullscreen_screenshot_to(
              path, sizeof(path) / sizeof(path[0])) :
          capture_core_screenshot_to(
              NULL, path, sizeof(path) / sizeof(path[0])))) {
        if (resume_audio) {
            simcity_audio_output_resume(&g_audio_output);
            reset_pacing_clock();
        }
        set_status(g_fullscreen_active ?
            L"Unable to save the fullscreen screenshot." :
            L"Unable to save the current game-frame screenshot.");
        return;
    }
    const int report_saved = have_report &&
        simcity_write_screenshot_report(g_executable_directory, path, report);
    if (resume_audio) {
        simcity_audio_output_resume(&g_audio_output);
        reset_pacing_clock();
    }
    if (g_world_map_audio_log) {
        char utf8_path[PATH_CAPACITY * 3u] = {0};
        (void)wide_to_utf8(path, utf8_path, sizeof(utf8_path));
        simcity_playback_log_printf(g_world_map_audio_log,
                "screenshot=\"%s\" frame=%u stock_menu=%d world=%d stock_world=%d auto=%d cursor=(%u,%u) tool=%u funds=%u plants=%u roads=%u powered_roads=%u zones=%u served_zones=%u population=%u commuters=%u congested=%u peak_load=%u queue=%u underruns=%llu dropped=%llu skipped_deadlines=%llu guest_fps=%.2f painted_fps=%.2f frame_work_ms=%.3f video_missed_slots=%llu video_work_ms=%.3f\n",
                utf8_path, frame, stock_menu, world_active, simcity_recomp_stock_world_active(g_game),
                simcity_recomp_world_demo_active(g_game),
                world.cursor_x, world.cursor_y, world.tool, world.funds, world.plants, world.roads,
                world.powered_roads, world.zones, world.served_zones, world.population,
                world.commuters, world.congested_roads, world.peak_road_load, audio.queue_depth_frames,
                (unsigned long long)audio.underruns,
                (unsigned long long)simcity_recomp_audio_dropped_frames(g_game),
                (unsigned long long)g_pacing_skipped_deadlines,
                g_audio_host_fps, g_presented_host_fps, g_world_frame_ms,
                (unsigned long long)g_presentation_missed_slots,
                g_presentation_work_ms);
    }
    (void)_snwprintf(status, sizeof(status) / sizeof(status[0]),
                     report_saved ? L"Screenshot and state report saved at frame %u: %s" :
                         L"Screenshot saved at frame %u, but the state report could not be written: %s",
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
                &g_frontend_settings, g_settings_ini_path))
            set_status(L"Control settings changed, but the settings file could not be written.");
        else set_status(L"Control settings changed and saved.");
    }
    if (resume_after && g_game) play_game();
}

static const wchar_t g_welcome_text[] =
    L"Welcome to SimCity (SNES) Static Recompilation\r\n\r\n"
    L"Frontend shortcuts\r\n"
    L"Escape - Switch between the game and Launcher\r\n"
    L"1 - Save the current snapshot slot\r\n"
    L"2 - Load the current snapshot slot\r\n"
    L"F1 - Welcome and shortcut guide\r\n"
    L"F2 - Open the Save Snapshot window\r\n"
    L"F3 - Open the Load Snapshot window\r\n"
    L"F4 - Settings\r\n"
    L"F5 - Controls\r\n"
    L"F6 - Audio settings\r\n"
    L"F7 - Run the selected ROM\r\n"
    L"F8 - Capture the current game frame\r\n\r\n"
    L"ROM title: SimCity\r\n"
    L"Region: USA/Canada NTSC\r\n"
    L"File type: .sfc\r\n"
    L"Place the ROM in the Rom folder or select Browse ROM.";

static void show_frontend_settings(void) {
    int resume_after = g_game && !g_paused;
    if (resume_after) pause_game(L"Paused while Settings is open.");
    if (simcity_frontend_settings_win32_dialog(
            g_window, g_instance, &g_frontend_settings)) {
        g_exact_60hz_presentation = g_frontend_settings.ntsc_frame_lock;
        reset_pacing_clock();
        if (!simcity_frontend_settings_win32_save(
                &g_frontend_settings, g_settings_ini_path))
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
    copy_wide(directory, capacity, g_saves_directory);
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
    char error[256];
    if (slot < 1 || slot > 5) slot = 1;
    g_frontend_settings.snapshot_slot = slot;
    (void)simcity_frontend_settings_win32_save(
        &g_frontend_settings, g_settings_ini_path);
    if (!snapshot_slot_path(slot, path,
                            sizeof(path) / sizeof(path[0]))) {
        set_status(L"The snapshot folder could not be created beside Launcher.exe.");
        return 0;
    }
    {
        wchar_t temporary[PATH_CAPACITY];
        char temporary_utf8[PATH_CAPACITY * 3];
        const int n = _snwprintf_s(temporary, ARRAY_COUNT(temporary), _TRUNCATE,
                                  L"%s.tmp-%lu", path, (unsigned long)GetCurrentProcessId());
        if (n < 0 || !wide_to_utf8(temporary, temporary_utf8, ARRAY_COUNT(temporary_utf8))) {
            set_status(L"Unable to create a temporary snapshot path.");
            return 0;
        }
        if (!simcity_recomp_snapshot_save(g_game, temporary_utf8, error, sizeof(error))) {
            (void)DeleteFileW(temporary);
            set_status_utf8(error[0] ? error : "Snapshot save failed.");
            return 0;
        }
        if (!MoveFileExW(temporary, path, MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) {
            (void)DeleteFileW(temporary);
            set_status(L"Unable to replace the snapshot. The previous slot was kept.");
            return 0;
        }
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
        &g_frontend_settings, g_settings_ini_path);
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
    /* A snapshot changes emulated machine time, not the host audio device.
       Keep the existing DirectSound objects alive while the snapshot modal
       owns the UI thread. Recreating the device here can block in the driver
       or place an audio warning behind the disabled launcher, which makes a
       successful snapshot load look like a frozen application. */
    close_prepared_video();
    simcity_audio_output_pause(&g_audio_output);
    simcity_audio_output_flush(&g_audio_output);
    (void)simcity_recomp_audio_discard(g_game);
    if (!simcity_recomp_snapshot_load(g_game, narrow_path, error, sizeof(error))) {
        set_status_utf8(error[0] ? error : "Snapshot load failed.");
        return 0;
    }
    (void)simcity_recomp_audio_discard(g_game);
    simcity_audio_output_flush(&g_audio_output);
    simcity_audio_output_pause(&g_audio_output);
    g_audio_last_fifo_dropped = 0u;
    g_audio_last_underruns = 0u;
    g_audio_last_queue_failures = 0u;
    g_audio_fps_window_qpc = 0u;
    g_audio_fps_window_frame = simcity_recomp_current_frame(g_game);
    g_presented_fps_window_count = g_presented_frame_count;
    g_pacing_render_resync_frames = 0u;
    g_stock_world_active = simcity_recomp_stock_world_active(g_game);
    g_presentation_frame = UINT32_MAX;
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
                L"Choose a numbered slot to save the current paused game. Snapshots are stored in the Saves folder beside Launcher.exe." :
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
    HWND previous_focus = GetFocus();
    ZeroMemory(&message, sizeof(message));
    if (!g_game) {
        set_status(L"Load and run the ROM before using snapshots.");
        MessageBeep(MB_ICONWARNING);
        return;
    }
    if (!ensure_snapshot_directory(directory,
                                   sizeof(directory) / sizeof(directory[0]))) {
        MessageBoxW(g_window,
            L"The Saves folder could not be created beside Launcher.exe.",
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
        if (message.message == WM_KEYDOWN &&
            message.wParam == VK_ESCAPE) {
            DestroyWindow(dialog);
            continue;
        }
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
    if ((state.resume_after || state.run_after_action) && g_game) play_game();
    else {
        set_status(L"Snapshot window closed. The game remains paused.");
        update_controls();
        restore_main_window_focus(previous_focus);
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
        case WM_DESTROY:
            if (window == g_info_window) {
                g_info_window = NULL;
                ZeroMemory(&g_info_state, sizeof(g_info_state));
                if (g_info_resume_after && !g_shutting_down && g_game &&
                    IsWindow(g_window))
                    play_game();
                restore_main_window_focus(g_info_previous_focus);
                g_info_resume_after = 0;
                g_info_previous_focus = NULL;
            }
            return 0;
        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static void show_information_window(const wchar_t *title,
                                    const wchar_t *body,
                                    int width, int height) {
    HWND dialog;
    if (IsWindow(g_info_window)) {
        ShowWindow(g_info_window, SW_RESTORE);
        BringWindowToTop(g_info_window);
        SetForegroundWindow(g_info_window);
        if (IsWindow(g_info_state.text)) SetFocus(g_info_state.text);
        return;
    }
    ZeroMemory(&g_info_state, sizeof(g_info_state));
    g_info_previous_focus = GetFocus();
    g_info_state.body = body;
    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        INFO_CLASS_NAME, title,
        WS_CAPTION | WS_SYSMENU | WS_POPUP | WS_THICKFRAME,
        CW_USEDEFAULT, CW_USEDEFAULT, width, height,
        g_window, NULL, g_instance, &g_info_state);
    if (!dialog) {
        if (g_info_resume_after && g_game) play_game();
        g_info_resume_after = 0;
        return;
    }
    g_info_window = dialog;
    SetWindowTextW(dialog, title);
    center_window_on_parent(dialog, g_window);
    ShowWindow(dialog, SW_SHOWNORMAL);
    SetWindowPos(dialog, HWND_TOP, 0, 0, 0, 0,
                 SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
    SetActiveWindow(dialog);
    SetForegroundWindow(dialog);
    if (IsWindow(g_info_state.text)) SetFocus(g_info_state.text);
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

static void getting_started_dialog_layout(
    HWND window, GettingStartedDialogState *state) {
    RECT client;
    int width;
    int height;
    int text_width;
    int text_height;
    int button_x;
    if (!window || !state || !GetClientRect(window, &client)) return;
    width = client.right - client.left;
    height = client.bottom - client.top;
    text_width = width - 40;
    text_height = height - 126;
    if (text_width < 120) text_width = 120;
    if (text_height < 100) text_height = 100;
    button_x = (width - 120) / 2;
    if (button_x < 0) button_x = 0;
    if (state->heading)
        MoveWindow(state->heading, 24, 16,
                   width > 48 ? width - 48 : width, 34, TRUE);
    if (state->text)
        MoveWindow(state->text, 20, 56, text_width, text_height, TRUE);
    if (state->close_button)
        MoveWindow(state->close_button, button_x,
                   height > 48 ? height - 48 : 0, 120, 34, TRUE);
}

static void finish_welcome_close(void) {
    GettingStartedDialogState *state = &g_getting_started_state;
    const int reenable = state->parent_was_enabled;
    const int resume = state->resume_after;
    const int mark_seen = g_getting_started_mark_seen;
    HWND previous_focus = state->previous_focus;
    if (!g_welcome_close_pending) return;
    g_welcome_close_pending = 0;
    g_getting_started_mark_seen = 0;
    state->parent_was_enabled = 0;
    state->resume_after = 0;
    state->previous_focus = NULL;
    if (g_shutting_down || !IsWindow(g_window)) return;
    if (reenable) EnableWindow(g_window, TRUE);
    if (mark_seen) {
        g_frontend_settings.welcome_shown = 1;
        if (!simcity_frontend_settings_win32_save(&g_frontend_settings, g_settings_ini_path)) {
            g_frontend_settings.welcome_shown = 0;
            g_getting_started_save_failed = 1;
        }
    }
    if (resume && g_game) play_game();
    restore_main_window_focus(previous_focus);
    if (g_startup_pending) continue_startup_after_welcome();
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

            state->heading = create_getting_started_heading(
                window, L"Welcome", 24, 16, 760, 34,
                state->heading_font);
            state->text = create_getting_started_text(
                window, g_welcome_text,
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
            getting_started_dialog_layout(window, state);
            if (!state->text || !state->close_button) return -1;
            if (state->text) {
                SetFocus(state->text);
                NotifyWinEvent(EVENT_OBJECT_FOCUS, state->text,
                               OBJID_CLIENT, CHILDID_SELF);
            } else if (state->close_button) {
                SetFocus(state->close_button);
            }
            return 0;
        }
        case WM_SIZE:
            getting_started_dialog_layout(window, state);
            return 0;
        case WM_GETMINMAXINFO: {
            MINMAXINFO *info = (MINMAXINFO *)lparam;
            info->ptMinTrackSize.x = 480;
            info->ptMinTrackSize.y = 360;
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
                state->heading = NULL;
                state->text = NULL;
                state->close_button = NULL;
                state->heading_font = NULL;
                state->body_font = NULL;
            }
            if (window == g_getting_started_window) {
                g_getting_started_window = NULL;
                /* Owner activation and startup happen after child teardown. */
                g_welcome_close_pending = 1;
                if (!g_shutting_down && IsWindow(g_window))
                    (void)PostMessageW(g_window, WM_APP_WELCOME_CLOSED, 0, 0);
            }
            return 0;
        default:
            break;
    }
    return DefWindowProcW(window, message, wparam, lparam);
}

static void show_getting_started_window(int mark_seen) {
    HWND dialog;
    HMONITOR monitor;
    MONITORINFO monitor_info;
    int width = 820;
    int height = 720;
    if (g_welcome_close_pending || g_shutting_down) return;
    if (IsWindow(g_getting_started_window)) {
        ShowWindow(g_getting_started_window, SW_RESTORE);
        SetWindowPos(g_getting_started_window, HWND_TOP, 0, 0, 0, 0,
                     SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
        SetForegroundWindow(g_getting_started_window);
        if (g_getting_started_state.text)
            SetFocus(g_getting_started_state.text);
        return;
    }
    if (IsWindow(g_info_window)) DestroyWindow(g_info_window);
    ZeroMemory(&g_getting_started_state, sizeof(g_getting_started_state));
    g_getting_started_mark_seen = mark_seen != 0;
    g_getting_started_state.resume_after = g_game && !g_paused;
    g_getting_started_state.parent_was_enabled = IsWindowEnabled(g_window);
    g_getting_started_state.previous_focus = GetFocus();
    if (g_getting_started_state.resume_after)
        pause_game(L"Paused while Welcome is open.");
    monitor = MonitorFromWindow(g_window, MONITOR_DEFAULTTONEAREST);
    ZeroMemory(&monitor_info, sizeof(monitor_info));
    monitor_info.cbSize = sizeof(monitor_info);
    if (GetMonitorInfoW(monitor, &monitor_info)) {
        int available_width = monitor_info.rcWork.right -
                              monitor_info.rcWork.left;
        int available_height = monitor_info.rcWork.bottom -
                               monitor_info.rcWork.top;
        if (available_width > 352 && width > available_width - 32)
            width = available_width - 32;
        if (available_height > 392 && height > available_height - 32)
            height = available_height - 32;
    }
    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        GETTING_STARTED_CLASS_NAME, L"Welcome",
        WS_CAPTION | WS_SYSMENU | WS_POPUP | WS_THICKFRAME,
        CW_USEDEFAULT, CW_USEDEFAULT, width, height,
        g_window, NULL, g_instance, &g_getting_started_state);
    if (!dialog) {
        g_getting_started_mark_seen = 0;
        if (g_getting_started_state.resume_after && g_game)
            play_game();
        g_getting_started_state.resume_after = 0;
        if (g_startup_pending &&
            !PostMessageW(g_window, WM_APP_STARTUP_CONTINUE, 0, 0))
            continue_startup_after_welcome();
        return;
    }
    g_getting_started_window = dialog;
    if (g_getting_started_state.parent_was_enabled)
        EnableWindow(g_window, FALSE);
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

static void advance_frame_deadline(void) {
    uint64_t frame_ticks = g_qpc_ticks_per_frame_base;
    g_qpc_remainder_accumulator += g_qpc_ticks_per_frame_remainder;
    if (g_qpc_remainder_accumulator >=
        SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR) {
        frame_ticks += 1u;
        g_qpc_remainder_accumulator -=
            SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR;
    }
    g_next_frame_deadline += frame_ticks;
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
    uint64_t deadline = g_next_frame_deadline;
    if (!g_frame_timer || g_qpc_frequency.QuadPart <= 0 ||
        !QueryPerformanceCounter(&now)) return 0;
    if (g_exact_60hz_presentation && g_game && !g_paused &&
        g_presentation_clock.frequency) {
        if (g_prepared_video) {
            const uint64_t current = (uint64_t)now.QuadPart;
            deadline = simcity_prepared_guest_wakeup(
                deadline < current ? current : deadline, g_presentation_clock.deadline,
                g_presentation_clock.frequency, simcity_recomp_stock_world_active(g_game));
        }
        if (g_presentation_clock.deadline < deadline) deadline = g_presentation_clock.deadline;
    }
    if (deadline <= (uint64_t)now.QuadPart)
        delay_ticks = 1u;
    else
        delay_ticks = deadline - (uint64_t)now.QuadPart;
    delay_100ns = qpc_ticks_to_100ns_ceil(delay_ticks);
    if (delay_100ns > (uint64_t)INT64_MAX) delay_100ns = (uint64_t)INT64_MAX;
    due.QuadPart = -(LONGLONG)delay_100ns;
    const int armed = SetWaitableTimer(g_frame_timer, &due, 0, NULL, NULL, FALSE) != 0;
    g_host_next_timer_due = armed ? deadline : 0u;
    return armed;
}

static void close_prepared_video(void) {
    simcity_prepared_video_close(g_prepared_video);
    g_prepared_video = NULL;
}

static const uint32_t *display_pixels(unsigned *width) {
    const uint32_t *pixels = simcity_prepared_video_pixels(g_prepared_video, width);
    if (pixels) return pixels;
    if (width) *width = g_game ? simcity_recomp_frame_width(g_game) : 0u;
    return g_game ? simcity_recomp_frame_bgra(g_game) : NULL;
}

static void service_presentation_clock(uint64_t now, int during_guest);

static void begin_prepared_video(uint64_t now) {
    g_prepared_video = simcity_prepared_video_open();
    if (!g_prepared_video) return;
    g_prepared_base_frame = simcity_recomp_current_frame(g_game);
    /* Three frames survived the ordinary and expanded city timing gates.
       This is display buffering only; it never changes the guest clock. */
    g_prepared_origin = now + simcity_prepared_lead_frames(1) * g_qpc_ticks_per_frame_base;
    g_prepared_slots = 0u;
    g_prepared_target_bias = 0u;
    simcity_presentation_reset(&g_presentation_clock, g_prepared_origin,
                               (uint64_t)g_qpc_frequency.QuadPart);
}

static void reset_pacing_clock(void) {
    LARGE_INTEGER now;
    if (g_prepared_video) {
        close_prepared_video();
        if (g_game) (void)simcity_recomp_render_presentation_frame(g_game, NULL, 0u);
    }
    if (g_qpc_frequency.QuadPart <= 0 ||
        !QueryPerformanceCounter(&now)) {
        g_next_frame_deadline = 0u;
        return;
    }
    g_qpc_remainder_accumulator = 0u;
    g_next_frame_deadline = (uint64_t)now.QuadPart;
    if (g_exact_60hz_presentation) {
        simcity_presentation_reset(&g_presentation_clock, (uint64_t)now.QuadPart,
                                   (uint64_t)g_qpc_frequency.QuadPart);
        g_presentation_frame = UINT32_MAX;
        if (g_game && !g_paused)
            begin_prepared_video((uint64_t)now.QuadPart);
    }
    (void)arm_frame_timer();
}

static void pump_audio_during_render(SimCityRecomp *game,
                                     void *opaque) {
    SimCityAudioOutput *output = (SimCityAudioOutput *)opaque;
    simcity_audio_output_pump_progress(output, game);
}

static void pump_audio_and_prepared_video(SimCityRecomp *game, void *opaque) {
    LARGE_INTEGER now;
    pump_audio_during_render(game, opaque);
    if (g_prepared_video && QueryPerformanceCounter(&now) &&
        (uint64_t)now.QuadPart >= g_presentation_clock.deadline &&
        IsWindowVisible(g_window) && !IsIconic(g_window))
        service_presentation_clock((uint64_t)now.QuadPart, 1);
}

static void finish_frame_host_maintenance(void) {
    LARGE_INTEGER start = {0}, diagnostics_end = {0}, end = {0};
    const int measure = g_world_map_audio_log && QueryPerformanceCounter(&start);
    report_audio_diagnostic_events();
    const int have_boundary = measure && QueryPerformanceCounter(&diagnostics_end);
    maybe_flush_battery_sram_win32();
    if (simcity_recomp_audio_overflowed(g_game))
        simcity_recomp_audio_clear_overflow(g_game);
    if (measure && QueryPerformanceCounter(&end)) {
        g_host_maintenance_start = (uint64_t)start.QuadPart;
        g_host_maintenance_end = (uint64_t)end.QuadPart;
        g_host_diagnostics_end = have_boundary ? (uint64_t)diagnostics_end.QuadPart : 0u;
    }
}

static int advance_one_frame(void) {
    SimCityRecompFrameResult result;
    wchar_t message[512];
    uint16_t input_mask;
    LARGE_INTEGER start = {0}, core_done = {0}, audio_done;
    int measure;
    if (!g_game) return 1;
    memset(&result, 0, sizeof(result));
    input_mask = current_gameplay_input();
    /* A later screenshot report needs these counters even when the user
       has not enabled the ongoing diagnostic log. Keep them in memory. */
    measure = (g_exact_60hz_presentation || g_world_map_audio_log != NULL) &&
        QueryPerformanceCounter(&start);
    const uint64_t paint_before = g_prepared_inline_paint_ticks;
    uint16_t routed_input = simcity_recomp_world_demo_active(g_game) ?
        simcity_recomp_world_demo_input(g_game) : input_mask;
#ifdef SIMCITY_HEADED_QA
    if (g_headed_qa_active) {
        const uint32_t at = simcity_recomp_current_frame(g_game);
        if (at < g_headed_qa_tape.frames) routed_input = g_headed_qa_tape.input[at];
        else g_headed_qa_active = 0;
    }
#endif
    if (!(g_exact_60hz_presentation ?
          simcity_recomp_advance_streamed_headless(
              g_game, routed_input, 1u, pump_audio_and_prepared_video,
              &g_audio_output, &result) :
          simcity_recomp_advance_streamed(
              g_game, routed_input, 1u, pump_audio_during_render,
              &g_audio_output, &result))) {
        stop_game_on_core_failure();
        return 0;
    }
    if (keyboard_gameplay_active())
        simcity_input_latch_consume(&g_keyboard_input, input_mask);
    if (measure) measure = QueryPerformanceCounter(&core_done);
    simcity_audio_output_pump(&g_audio_output, g_game);
    if (measure && QueryPerformanceCounter(&audio_done) &&
        audio_done.QuadPart >= core_done.QuadPart && core_done.QuadPart >= start.QuadPart) {
        const double scale = 1000.0 / (double)g_qpc_frequency.QuadPart;
        const uint64_t frame_ticks = (uint64_t)(audio_done.QuadPart - start.QuadPart);
        uint64_t paint_ticks = g_prepared_inline_paint_ticks - paint_before;
        if (paint_ticks > frame_ticks) paint_ticks = frame_ticks;
        const uint64_t excluding_paint = frame_ticks - paint_ticks;
        const uint64_t budget = (uint64_t)g_qpc_frequency.QuadPart / (2u * SIMCITY_HOST_PRESENT_HZ);
        g_world_frame_ms = (double)frame_ticks * scale;
        g_world_audio_submit_ms = (double)(audio_done.QuadPart - core_done.QuadPart) * scale;
        g_world_inline_paint_ms = (double)paint_ticks * scale;
        g_world_work_excluding_paint_ms = (double)excluding_paint * scale;
        ++g_host_headroom_samples;
        g_host_headroom_over += frame_ticks > budget;
        g_host_headroom_over_excluding_paint += excluding_paint > budget;
        if (g_world_frame_ms > g_world_peak_ms) g_world_peak_ms = g_world_frame_ms;
    }
    {
        const int stock_active = simcity_recomp_stock_world_active(g_game);
        unsigned selected = 0u;
        const enum SimCityWorldCatalogScreen catalog = simcity_recomp_world_catalog_view(g_game, &selected);
        const int catalog_changed = catalog != g_world_catalog_screen || selected != g_world_catalog_selected;
        if (catalog_changed) {
            const enum SimCityWorldCatalogScreen prior = g_world_catalog_screen;
            g_world_catalog_screen = catalog;
            g_world_catalog_selected = selected;
            if (catalog == SIMCITY_WORLD_CATALOG_LIST) {
                const SimCityWorldMapTemplateInfo *map = simcity_recomp_world_map_template_info(selected);
                if (map) {
                    wchar_t map_name[48], status[192];
                    utf8_to_wide(map->name, map_name, ARRAY_COUNT(map_name));
                    (void)_snwprintf_s(status, ARRAY_COUNT(status), _TRUNCATE,
                        L"%ls: %u percent land, %u percent sea. Up and Down browse, B selects, X goes back.",
                        map_name, map->land_percent, 100u - map->land_percent);
                    set_status(status);
                }
            } else if (catalog == SIMCITY_WORLD_CATALOG_FOCUSED) {
                set_status(L"World Maps selected. Press B to browse maps, or Up to return to Select Scenario.");
            } else if (catalog == SIMCITY_WORLD_CATALOG_MAIN && prior != SIMCITY_WORLD_CATALOG_HIDDEN) {
                set_status(L"Main menu. From Select Scenario, press Down to reach World Maps.");
            }
        }
        if (stock_active != g_stock_world_active) {
            if (stock_active != g_stock_world_active) {
                LARGE_INTEGER now;
                set_status(stock_active ?
                    L"World Map started. F2 saves and F3 opens snapshots." :
                    L"Original-size city loaded.");
                close_prepared_video();
                (void)simcity_recomp_render_presentation_frame(g_game, NULL, 0u);
                if (g_exact_60hz_presentation && QueryPerformanceCounter(&now))
                    begin_prepared_video((uint64_t)now.QuadPart);
            }
            g_stock_world_active = stock_active;
            update_running_window_title();
        } else if (catalog_changed) update_running_window_title();
    }
    if (g_prepared_video) {
        const uint32_t frame = simcity_recomp_current_frame(g_game) - g_prepared_base_frame;
        if (frame) {
            const int submitted = simcity_prepared_video_submit(g_prepared_video, g_game, frame);
            if (!submitted) close_prepared_video();
            else g_prepared_queue_full += submitted == 2;
        }
    }
#ifdef SIMCITY_HEADED_QA
    if (g_headed_qa_active) {
        const uint32_t completed = simcity_recomp_current_frame(g_game);
        if ((completed >= 1000u && completed % 600u == 0u) || completed == g_headed_qa_tape.frames)
            (void)PostMessageW(g_window, WM_COMMAND, ID_SCREENSHOT, 0);
        if (completed >= g_headed_qa_tape.frames) g_headed_qa_active = 0;
    }
#endif
    if (g_exact_60hz_presentation) return 1;
    finish_frame_host_maintenance();
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

static void service_presentation_clock(uint64_t now, int during_guest) {
    uint64_t slots;
    uint32_t frame;
    LARGE_INTEGER done;
    if (!g_exact_60hz_presentation || !g_game || g_paused ||
        (during_guest && !g_prepared_video)) return;
    const uint64_t initial_deadline = g_presentation_clock.deadline;
    slots = simcity_presentation_consume(&g_presentation_clock, now);
    if (!slots) return;
    g_presentation_missed_slots += slots - 1u;
    frame = 0u;
    if (g_prepared_video) {
        g_prepared_slots += slots;
        const uint64_t slot = g_prepared_slots - 1u;
        const uint32_t target = simcity_prepared_biased_target(slot, g_prepared_target_bias);
        /* A delayed host wake still has only one display slot. A frame
           already ready when we get that wake is safe for its own slot. */
        uint64_t ready = 0u;
        const uint32_t previous = g_world_map_audio_log ?
            simcity_prepared_video_last_presented(g_prepared_video) : 0u;
        const int result = simcity_prepared_video_present(g_prepared_video,
            target, now, &frame, g_world_map_audio_log ? &ready : NULL);
        int paint_failed = 0;
        int late_exact_paint = 0;
        uint64_t paint_done = 0u;
        if (result) {
            if (result == 2) {
                const int older = frame != target;
                g_prepared_older_targets += older;
                g_presentation_frame = g_prepared_base_frame + frame;
                if (IsWindowVisible(g_window) && !IsIconic(g_window)) {
                    /* UpdateWindow sends only the pending WM_PAINT here.
                       The paint path is restricted to the immutable buffer;
                       never pump input, open a dialog, or use the guest. */
                    const uint64_t painted = g_presented_frame_count;
                    LARGE_INTEGER paint_start, paint_end;
                    const BOOL have_start = QueryPerformanceCounter(&paint_start);
                    g_prepared_only_paint = 1;
                    if (InvalidateRect(g_window, NULL, FALSE))
                        (void)UpdateWindow(g_window);
                    g_prepared_only_paint = 0;
                    const BOOL have_end = QueryPerformanceCounter(&paint_end);
                    paint_failed = g_presented_frame_count == painted;
                    if (have_end && !paint_failed) {
                        paint_done = (uint64_t)paint_end.QuadPart;
                        late_exact_paint = !older && simcity_presentation_paint_late(
                            paint_done, g_presentation_clock.deadline);
                        g_presentation_late_exact_paints += late_exact_paint;
                    }
                    if (have_start && have_end &&
                        paint_end.QuadPart >= paint_start.QuadPart) {
                        const uint64_t ticks = (uint64_t)(paint_end.QuadPart - paint_start.QuadPart);
                        if (during_guest) g_prepared_inline_paint_ticks += ticks;
                        if (!paint_failed) {
                            ++g_prepared_paint_samples;
                            g_prepared_paint_ticks += ticks;
                            if (ticks > g_prepared_paint_peak) g_prepared_paint_peak = ticks;
                        }
                    }
                    if (!paint_failed) g_prepared_checkpoint_blits += during_guest != 0;
                }
                g_prepared_blit_failures += paint_failed;
                g_presentation_missed_slots += older || paint_failed;
            } else {
                ++g_presentation_missed_slots;
            }
            const int measured = QueryPerformanceCounter(&done);
            if (measured)
                g_presentation_work_ms = 1000.0 * (double)((uint64_t)done.QuadPart - now) /
                                         (double)g_qpc_frequency.QuadPart;
            if (g_world_map_audio_log && (slots > 1u || result != 2 || frame != target ||
                    paint_failed || late_exact_paint ||
                    (measured && (uint64_t)done.QuadPart >= g_presentation_clock.deadline))) {
                /* A merge's latency is relative to the oldest unserviced
                   slot, whereas the image selected above is for the newest. */
                if (g_host_fault_count < sizeof(g_host_faults) / sizeof(g_host_faults[0])) {
                    if (result != 2 || frame != target)
                        ready = simcity_prepared_video_queued_ready_tick(g_prepared_video, target);
                    g_host_faults[g_host_fault_count++] = (HostPresentFault){initial_deadline, now, ready,
                        measured ? (uint64_t)done.QuadPart : 0u, slots - 1u,
                        paint_done, g_presentation_clock.deadline,
                        g_host_timer_due, g_host_timer_entry, g_host_message_ticks,
                        g_host_maintenance_start, g_host_diagnostics_end, g_host_maintenance_end,
                        target, frame, previous, g_host_message_count, during_guest, result, paint_failed,
                        late_exact_paint, simcity_prepared_video_status(g_prepared_video, target)};
                } else {
                    ++g_host_fault_unlogged;
                }
            }
            return;
        }
        if (during_guest) {
            ++g_presentation_missed_slots;
            return; /* The outer timer/submission path handles worker failure. */
        }
        close_prepared_video();
    }
    frame = simcity_recomp_current_frame(g_game);
    if (frame == g_presentation_frame) return;
    if (simcity_recomp_render_presentation_frame(g_game, NULL, 0u)) {
        g_presentation_frame = frame;
        InvalidateRect(g_window, NULL, FALSE);
    } else {
        ++g_presentation_missed_slots;
    }
    if (QueryPerformanceCounter(&done))
        g_presentation_work_ms = 1000.0 * (double)((uint64_t)done.QuadPart - now) /
                                 (double)g_qpc_frequency.QuadPart;
}

static void service_host_timer(void) {
    LARGE_INTEGER before;
    LARGE_INTEGER after;
    uint64_t late_tolerance;
    if (!QueryPerformanceCounter(&before)) {
        (void)arm_frame_timer();
        return;
    }
    uint64_t now = (uint64_t)before.QuadPart;
    if (g_world_map_audio_log) {
        g_host_timer_due = g_host_next_timer_due;
        g_host_timer_entry = now;
        g_host_message_ticks = g_host_pending_message_ticks;
        g_host_message_count = g_host_pending_message_count;
        g_host_pending_message_ticks = 0u;
        g_host_pending_message_count = 0u;
    }
    const int prepared_due = g_prepared_video && now >= g_presentation_clock.deadline;
    if (prepared_due) {
        service_presentation_clock(now, 0);
        /* A synchronous paint can cross the next guest deadline. Use
           the real time after it, so work that is now due need not
           wait for a redundant timer round trip. */
        if (QueryPerformanceCounter(&after)) now = (uint64_t)after.QuadPart;
    }
    if (now < g_next_frame_deadline ||
        (!prepared_due && g_prepared_video &&
         simcity_prepared_guest_wakeup(now, g_presentation_clock.deadline,
             g_presentation_clock.frequency, simcity_recomp_stock_world_active(g_game)) > now)) {
        if (!prepared_due) service_presentation_clock(now, 0);
        (void)arm_frame_timer();
        return;
    }

    ++g_pacing_timer_ticks;
    g_gamepad_input = simcity_gamepad_win32_poll(
        &g_gamepad, g_frontend_settings.gamepad_bindings);
    int finish_prepared_step = 0;
    if (g_game && !g_paused) {
        const int deferred_maintenance = g_exact_60hz_presentation;
        g_pacing_max_batch = 1u;
        finish_prepared_step = advance_one_frame() && deferred_maintenance;
    }

    /* One guest frame per dispatch, even when running behind. In 60 Hz mode,
       keep short delays on the original guest timeline so repeated spikes
       do not drain the audio queue by permanently losing emulation time. */
    advance_frame_deadline();
    if (QueryPerformanceCounter(&after)) {
        if (g_exact_60hz_presentation && g_game && !g_paused) {
            const uint64_t skipped = simcity_guest_limit_debt(
                (uint64_t)after.QuadPart, g_qpc_ticks_per_frame_base,
                &g_next_frame_deadline, &g_qpc_remainder_accumulator);
            if (skipped) {
                g_pacing_skipped_deadlines += skipped;
                ++g_pacing_resyncs;
                if (g_prepared_video) {
                    /* Count overdue slots using the old target before
                       recovering the video lead for future slots. */
                    service_presentation_clock((uint64_t)after.QuadPart, 0);
                    g_prepared_target_bias = simcity_prepared_recovery_bias(g_prepared_slots,
                        simcity_recomp_current_frame(g_game) - g_prepared_base_frame,
                        simcity_prepared_lead_frames(1), g_prepared_target_bias);
                }
            }
        } else {
            late_tolerance = g_qpc_ticks_per_frame_base / HOST_LATE_REBASE_DIVISOR;
            if (!late_tolerance) late_tolerance = 1u;
            if ((uint64_t)after.QuadPart > g_next_frame_deadline + late_tolerance) {
                g_pacing_skipped_deadlines +=
                    ((uint64_t)after.QuadPart - g_next_frame_deadline) /
                        (g_qpc_ticks_per_frame_base ?
                             g_qpc_ticks_per_frame_base : 1u) + 1u;
                g_qpc_remainder_accumulator = 0u;
                g_next_frame_deadline = (uint64_t)after.QuadPart;
                ++g_pacing_resyncs;
            }
        }
    } else {
        reset_pacing_clock();
        if (finish_prepared_step) finish_frame_host_maintenance();
        return;
    }
    service_presentation_clock((uint64_t)after.QuadPart, 0);
    (void)arm_frame_timer();
    /* A finished guest step must reach the render worker and any due
       display slot before the diagnostics and durable save checks run.
       The next timer can already signal while maintenance is in progress.
       These writes remain synchronous and may still delay a later slot. */
    if (finish_prepared_step) finish_frame_host_maintenance();
}



static void layout_controls(HWND window) {
    RECT client;
    int width;
    GetClientRect(window, &client);
    width = client.right - client.left;
    if (g_presentation_hidden) return;
    MoveWindow(g_browse_button, 8, 8, 92, 30, TRUE);
    MoveWindow(g_pause_play_button, 106, 8, 72, 30, TRUE);
    MoveWindow(g_reset_button, 184, 8, 66, 30, TRUE);
    MoveWindow(g_audio_button, 256, 8, 66, 30, TRUE);
    MoveWindow(g_settings_button, 328, 8, 82, 30, TRUE);
    MoveWindow(g_keys_button, 416, 8, 62, 30, TRUE);
    MoveWindow(g_fullscreen_checkbox, 488, 10, 112, 26, TRUE);
    MoveWindow(g_widescreen_checkbox, 610, 10, 108, 26, TRUE);
    MoveWindow(g_auto_run_checkbox, 724, 10,
               width > 820 ? 88 : 82, 26, TRUE);
    MoveWindow(g_60_fps_checkbox, 818, 10, 82, 26, TRUE);
    MoveWindow(g_status, 12, 48, width - 24, 24, TRUE);
}

static void paint_window(HWND window) {
    PAINTSTRUCT paint;
    HDC dc = BeginPaint(window, &paint);
    RECT client;
    RECT render_area;
    unsigned image_width = 0u;
    const uint32_t *pixels = g_prepared_only_paint ?
        simcity_prepared_video_pixels(g_prepared_video, &image_width) : display_pixels(&image_width);
    GetClientRect(window, &client);
    render_area.left = 0;
    render_area.top = g_presentation_hidden ? 0 : 80;
    render_area.right = client.right;
    render_area.bottom = client.bottom;

    if (g_game && pixels && render_area.bottom > render_area.top) {
        if (render_area.top > 0) {
            const RECT controls = {client.left, client.top, client.right, render_area.top};
            FillRect(dc, &controls, (HBRUSH)GetStockObject(BLACK_BRUSH));
        }
        if (simcity_win32_frame_blit(dc, &render_area, pixels, image_width,
                g_fullscreen_active && image_width == SIMCITY_RECOMP_WIDESCREEN_WIDTH,
                g_frontend_settings.integer_scale)) {
            uint32_t emu_frame = (g_prepared_only_paint || g_exact_60hz_presentation) ?
                g_presentation_frame : simcity_recomp_current_frame(g_game);
            /* Repaints caused by expose/resize messages do not represent a
               newly presented emulated frame. */
            if (emu_frame != UINT32_MAX && emu_frame != g_presented_last_emu_frame) {
                g_presented_last_emu_frame = emu_frame;
                ++g_presented_frame_count;
            }
        } else {
            FillRect(dc, &render_area, (HBRUSH)GetStockObject(BLACK_BRUSH));
        }
    } else if (!g_prepared_only_paint) {
        const wchar_t *message =
            L"Browse for the exact SimCity USA/Canada NTSC ROM and choose Run.";
        FillRect(dc, &client, (HBRUSH)GetStockObject(BLACK_BRUSH));
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

static HWND create_audio_label(HWND parent, const wchar_t *text,
                               int x, int y, int width) {
    HWND control = CreateWindowExW(
        0, L"STATIC", text, WS_CHILD | WS_VISIBLE | SS_LEFT,
        x, y, width, 22, parent, NULL, g_instance, NULL);
    set_control_font(control);
    return control;
}

static HWND create_audio_numeric_edit(HWND parent, int id, int x, int y,
                                      int value) {
    wchar_t number[32];
    HWND control;
    _snwprintf_s(number, ARRAY_COUNT(number), _TRUNCATE, L"%d", value);
    control = CreateWindowExW(
        WS_EX_CLIENTEDGE, L"EDIT", number,
        WS_CHILD | WS_VISIBLE | WS_TABSTOP | ES_AUTOHSCROLL | ES_NUMBER,
        x, y, 92, 24, parent, (HMENU)(INT_PTR)id, g_instance, NULL);
    set_control_font(control);
    return control;
}

static HWND create_audio_checkbox(HWND parent, int id, const wchar_t *text,
                                  int x, int y, int width, int checked) {
    HWND control = CreateWindowExW(
        0, L"BUTTON", text,
        WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
        x, y, width, 24, parent, (HMENU)(INT_PTR)id, g_instance, NULL);
    set_control_font(control);
    SendMessageW(control, BM_SETCHECK,
                 checked ? BST_CHECKED : BST_UNCHECKED, 0);
    return control;
}

static void set_audio_edit_int(HWND control, int value) {
    wchar_t number[32];
    _snwprintf_s(number, ARRAY_COUNT(number), _TRUNCATE, L"%d", value);
    SetWindowTextW(control, number);
}

static int read_audio_edit_int(HWND window, HWND control,
                               const wchar_t *name, int minimum, int maximum,
                               int *value) {
    wchar_t text[64];
    wchar_t *end = NULL;
    long parsed;
    wchar_t message[256];
    if (!control || !value) return 0;
    GetWindowTextW(control, text, (int)ARRAY_COUNT(text));
    parsed = wcstol(text, &end, 10);
    if (!text[0] || !end || *end || parsed < minimum || parsed > maximum) {
        _snwprintf_s(message, ARRAY_COUNT(message), _TRUNCATE,
            L"%s must be between %d and %d.", name, minimum, maximum);
        MessageBoxW(window, message, L"Audio Settings",
                    MB_OK | MB_ICONWARNING);
        SetFocus(control);
        SendMessageW(control, EM_SETSEL, 0, -1);
        return 0;
    }
    *value = (int)parsed;
    return 1;
}

static void update_audio_control_enabled_state(AudioDialogState *state) {
    int latency;
    int drift;
    int recovery;
    if (!state) return;
    latency = SendMessageW(state->latency_enabled, BM_GETCHECK, 0, 0) ==
              BST_CHECKED;
    drift = SendMessageW(state->drift_enabled, BM_GETCHECK, 0, 0) ==
            BST_CHECKED;
    recovery = SendMessageW(state->recovery_enabled, BM_GETCHECK, 0, 0) ==
               BST_CHECKED;
    EnableWindow(state->latency, latency);
    EnableWindow(state->drift_tolerance, drift);
    EnableWindow(state->max_rate_adjustment, drift);
    EnableWindow(state->averaging_frames, drift);
    EnableWindow(state->integral_enabled, drift);
    EnableWindow(state->recovery_threshold, recovery);
}

static void apply_audio_settings_to_controls(AudioDialogState *state) {
    int index;
    int count;
    if (!state) return;
    SendMessageW(state->enabled, BM_SETCHECK,
        state->settings.enabled ? BST_CHECKED : BST_UNCHECKED, 0);
    SendMessageW(state->volume, CB_SETCURSEL,
                 state->settings.volume_percent, 0);
    SendMessageW(state->latency_enabled, BM_SETCHECK,
        state->settings.latency_enabled ? BST_CHECKED : BST_UNCHECKED, 0);
    SendMessageW(state->latency, CB_SETCURSEL,
                 state->settings.latency_ms, 0);
    count = (int)SendMessageW(state->output_rate, CB_GETCOUNT, 0, 0);
    for (index = 0; index < count; ++index) {
        if ((int)SendMessageW(state->output_rate, CB_GETITEMDATA,
                              index, 0) == state->settings.output_sample_rate) {
            SendMessageW(state->output_rate, CB_SETCURSEL, index, 0);
            break;
        }
    }
    SendMessageW(state->resampler, CB_SETCURSEL,
                 state->settings.resampler_mode, 0);
    set_audio_edit_int(state->safety_buffer,
                       state->settings.safety_buffer_ms);
    SendMessageW(state->drift_enabled, BM_SETCHECK,
        state->settings.drift_correction_enabled ? BST_CHECKED : BST_UNCHECKED,
        0);
    set_audio_edit_int(state->drift_tolerance,
                       state->settings.drift_tolerance_ms);
    set_audio_edit_int(state->max_rate_adjustment,
                       state->settings.max_rate_adjustment_ppm);
    set_audio_edit_int(state->averaging_frames,
                       state->settings.averaging_frames);
    SendMessageW(state->integral_enabled, BM_SETCHECK,
        state->settings.integral_correction_enabled ?
            BST_CHECKED : BST_UNCHECKED, 0);
    SendMessageW(state->recovery_enabled, BM_SETCHECK,
        state->settings.recovery_enabled ? BST_CHECKED : BST_UNCHECKED, 0);
    set_audio_edit_int(state->recovery_threshold,
                       state->settings.recovery_threshold_ms);
    SendMessageW(state->realign_on_underrun, BM_SETCHECK,
        state->settings.realign_on_underrun ? BST_CHECKED : BST_UNCHECKED, 0);
    set_audio_edit_int(state->resume_fade, state->settings.resume_fade_ms);
    SendMessageW(state->device, CB_SETCURSEL, 0, 0);
    if (state->settings.device_name[0]) {
        LRESULT found = SendMessageW(state->device, CB_FINDSTRINGEXACT,
                                     (WPARAM)-1,
                                     (LPARAM)state->settings.device_name);
        if (found != CB_ERR) SendMessageW(state->device, CB_SETCURSEL,
                                          (WPARAM)found, 0);
    }
    update_audio_control_enabled_state(state);
}

static int read_audio_dialog(AudioDialogState *state, HWND window) {
    LRESULT volume;
    LRESULT latency;
    LRESULT selection;
    if (!state) return 0;
    volume = SendMessageW(state->volume, CB_GETCURSEL, 0, 0);
    latency = SendMessageW(state->latency, CB_GETCURSEL, 0, 0);
    if (volume < 0 || volume > 100 || latency < 0 || latency > 40) return 0;
    state->settings.enabled =
        SendMessageW(state->enabled, BM_GETCHECK, 0, 0) == BST_CHECKED;
    state->settings.volume_percent = (int)volume;
    state->settings.latency_enabled =
        SendMessageW(state->latency_enabled, BM_GETCHECK, 0, 0) == BST_CHECKED;
    state->settings.latency_ms = (int)latency;
    selection = SendMessageW(state->device, CB_GETCURSEL, 0, 0);
    state->settings.device_name[0] = L'\0';
    if (selection > 0) {
        (void)SendMessageW(state->device, CB_GETLBTEXT, selection,
                           (LPARAM)state->settings.device_name);
        state->settings.device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY - 1u] =
            L'\0';
    }
    selection = SendMessageW(state->output_rate, CB_GETCURSEL, 0, 0);
    if (selection == CB_ERR) return 0;
    state->settings.output_sample_rate = (int)SendMessageW(
        state->output_rate, CB_GETITEMDATA, selection, 0);
    selection = SendMessageW(state->resampler, CB_GETCURSEL, 0, 0);
    if (selection < SIMCITY_AUDIO_RESAMPLER_HERMITE ||
        selection > SIMCITY_AUDIO_RESAMPLER_NEAREST) return 0;
    state->settings.resampler_mode = (int)selection;
    if (!read_audio_edit_int(window, state->safety_buffer,
            L"Safety prebuffer", SIMCITY_AUDIO_MIN_SAFETY_BUFFER_MS,
            SIMCITY_AUDIO_MAX_SAFETY_BUFFER_MS,
            &state->settings.safety_buffer_ms) ||
        !read_audio_edit_int(window, state->drift_tolerance,
            L"Drift tolerance", SIMCITY_AUDIO_MIN_DRIFT_TOLERANCE_MS,
            SIMCITY_AUDIO_MAX_DRIFT_TOLERANCE_MS,
            &state->settings.drift_tolerance_ms) ||
        !read_audio_edit_int(window, state->max_rate_adjustment,
            L"Maximum rate correction",
            SIMCITY_AUDIO_MIN_RATE_ADJUSTMENT_PPM,
            SIMCITY_AUDIO_MAX_RATE_ADJUSTMENT_PPM,
            &state->settings.max_rate_adjustment_ppm) ||
        !read_audio_edit_int(window, state->averaging_frames,
            L"Averaging window", SIMCITY_AUDIO_MIN_AVERAGING_FRAMES,
            SIMCITY_AUDIO_MAX_AVERAGING_FRAMES,
            &state->settings.averaging_frames) ||
        !read_audio_edit_int(window, state->recovery_threshold,
            L"Recovery threshold", SIMCITY_AUDIO_MIN_RECOVERY_MS,
            SIMCITY_AUDIO_MAX_RECOVERY_MS,
            &state->settings.recovery_threshold_ms) ||
        !read_audio_edit_int(window, state->resume_fade,
            L"Resume fade", SIMCITY_AUDIO_MIN_FADE_MS,
            SIMCITY_AUDIO_MAX_FADE_MS,
            &state->settings.resume_fade_ms)) return 0;
    state->settings.drift_correction_enabled =
        SendMessageW(state->drift_enabled, BM_GETCHECK, 0, 0) == BST_CHECKED;
    state->settings.integral_correction_enabled =
        SendMessageW(state->integral_enabled, BM_GETCHECK, 0, 0) ==
            BST_CHECKED;
    state->settings.recovery_enabled =
        SendMessageW(state->recovery_enabled, BM_GETCHECK, 0, 0) ==
            BST_CHECKED;
    state->settings.realign_on_underrun =
        SendMessageW(state->realign_on_underrun, BM_GETCHECK, 0, 0) ==
            BST_CHECKED;
    return 1;
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
            wchar_t device_name[SIMCITY_AUDIO_DEVICE_NAME_CAPACITY];
            wchar_t diagnostics[1024];
            UINT index;
            HWND group;
            state = audio_dialog_state(window);
            if (!state) return -1;
            SetWindowTextW(window, L"SimCity Audio Settings");

            state->enabled = create_audio_checkbox(window, ID_AUDIO_ENABLED,
                L"Enable &audio output", 18, 12, 210,
                state->settings.enabled);
            create_audio_label(window,
                L"DirectSound 8, signed 16-bit stereo; static DSP source: 32,040 Hz",
                250, 16, 510);

            group = CreateWindowExW(0, L"BUTTON", L"Output and resampling",
                WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 10, 45, 370, 300,
                window, NULL, g_instance, NULL);
            set_control_font(group);
            create_audio_label(window, L"Output &device:", 25, 72, 110);
            state->device = CreateWindowExW(WS_EX_CLIENTEDGE, L"COMBOBOX", L"",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | CBS_DROPDOWNLIST |
                WS_VSCROLL, 140, 68, 220, 260, window,
                (HMENU)(INT_PTR)ID_AUDIO_DEVICE, g_instance, NULL);
            set_control_font(state->device);
            SendMessageW(state->device, CB_ADDSTRING, 0,
                         (LPARAM)AUDIO_DEFAULT_DEVICE_LABEL);
            for (index = 0u; index < simcity_audio_device_count(); ++index) {
                if (simcity_audio_device_name(index, device_name,
                        ARRAY_COUNT(device_name)))
                    SendMessageW(state->device, CB_ADDSTRING, 0,
                                 (LPARAM)device_name);
            }

            create_audio_label(window, L"&Volume (0-100):", 25, 110, 110);
            state->volume = CreateWindowExW(
                WS_EX_CLIENTEDGE, L"COMBOBOX", L"",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | CBS_DROPDOWNLIST |
                WS_VSCROLL,
                140, 106, 92, 280, window,
                (HMENU)(INT_PTR)ID_AUDIO_VOLUME, g_instance, NULL);
            set_control_font(state->volume);
            for (index = 0u; index <= 100u; ++index) {
                _snwprintf_s(number, ARRAY_COUNT(number), _TRUNCATE,
                             L"%u%%", index);
                (void)SendMessageW(state->volume, CB_ADDSTRING, 0,
                                   (LPARAM)number);
            }
            create_audio_label(window, L"Output &rate:", 25, 148, 110);
            state->output_rate = CreateWindowExW(WS_EX_CLIENTEDGE,
                L"COMBOBOX", L"", WS_CHILD | WS_VISIBLE | WS_TABSTOP |
                CBS_DROPDOWNLIST, 140, 144, 130, 180, window,
                (HMENU)(INT_PTR)ID_AUDIO_OUTPUT_RATE, g_instance, NULL);
            set_control_font(state->output_rate);
            {
                static const int rates[] = {32040, 44100, 48000, 96000};
                for (index = 0u; index < ARRAY_COUNT(rates); ++index) {
                    LRESULT item;
                    _snwprintf_s(number, ARRAY_COUNT(number), _TRUNCATE,
                                 L"%d Hz", rates[index]);
                    item = SendMessageW(state->output_rate, CB_ADDSTRING, 0,
                                        (LPARAM)number);
                    SendMessageW(state->output_rate, CB_SETITEMDATA, item,
                                 rates[index]);
                }
            }

            create_audio_label(window, L"&Resampler:", 25, 186, 110);
            state->resampler = CreateWindowExW(WS_EX_CLIENTEDGE, L"COMBOBOX",
                L"", WS_CHILD | WS_VISIBLE | WS_TABSTOP | CBS_DROPDOWNLIST,
                140, 182, 170, 150, window,
                (HMENU)(INT_PTR)ID_AUDIO_RESAMPLER, g_instance, NULL);
            set_control_font(state->resampler);
            SendMessageW(state->resampler, CB_ADDSTRING, 0,
                         (LPARAM)L"Cubic Hermite (Mesen)");
            SendMessageW(state->resampler, CB_ADDSTRING, 0,
                         (LPARAM)L"Linear");
            SendMessageW(state->resampler, CB_ADDSTRING, 0,
                         (LPARAM)L"Nearest-neighbour");

            state->latency_enabled = create_audio_checkbox(window,
                ID_AUDIO_LATENCY_ENABLED, L"Enable e&xtra latency (0-40 ms)",
                25, 221, 230, state->settings.latency_enabled);
            state->latency = CreateWindowExW(
                WS_EX_CLIENTEDGE, L"COMBOBOX", L"",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | CBS_DROPDOWNLIST,
                262, 218, 92, 280, window,
                (HMENU)(INT_PTR)ID_AUDIO_LATENCY, g_instance, NULL);
            set_control_font(state->latency);
            for (index = 0u; index <= 40u; ++index) {
                _snwprintf_s(number, ARRAY_COUNT(number), _TRUNCATE,
                              L"%u ms", index);
                (void)SendMessageW(state->latency, CB_ADDSTRING, 0,
                                   (LPARAM)number);
            }
            create_audio_label(window, L"Resume &fade (0-100 ms):",
                               25, 263, 190);
            state->resume_fade = create_audio_numeric_edit(window,
                ID_AUDIO_FADE, 220, 259, state->settings.resume_fade_ms);

            group = CreateWindowExW(0, L"BUTTON", L"Buffering and recovery",
                WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 390, 45, 380, 300,
                window, NULL, g_instance, NULL);
            set_control_font(group);
            create_audio_label(window, L"Safety &prebuffer (0-100 ms):",
                               405, 75, 220);
            state->safety_buffer = create_audio_numeric_edit(window,
                ID_AUDIO_SAFETY_BUFFER, 650, 70,
                state->settings.safety_buffer_ms);
            state->recovery_enabled = create_audio_checkbox(window,
                ID_AUDIO_RECOVERY_ENABLED,
                L"Recover automatically from stale audio", 405, 113, 335,
                state->settings.recovery_enabled);
            create_audio_label(window, L"Recovery limit (10-500 ms):",
                               405, 154, 220);
            state->recovery_threshold = create_audio_numeric_edit(window,
                ID_AUDIO_RECOVERY_THRESHOLD, 650, 149,
                state->settings.recovery_threshold_ms);
            state->realign_on_underrun = create_audio_checkbox(window,
                ID_AUDIO_REALIGN, L"Realign writer after an underrun",
                405, 188, 335, state->settings.realign_on_underrun);
            create_audio_label(window,
                L"Safety prebuffer is the first control to raise for crunchy audio.",
                405, 228, 350);

            group = CreateWindowExW(0, L"BUTTON", L"Clock synchronization",
                WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 10, 355, 370, 230,
                window, NULL, g_instance, NULL);
            set_control_font(group);
            state->drift_enabled = create_audio_checkbox(window,
                ID_AUDIO_DRIFT_ENABLED, L"Enable device-latency drift correction",
                25, 382, 330, state->settings.drift_correction_enabled);
            create_audio_label(window, L"Tolerance (0-20 ms):", 25, 421, 190);
            state->drift_tolerance = create_audio_numeric_edit(window,
                ID_AUDIO_DRIFT_TOLERANCE, 245, 416,
                state->settings.drift_tolerance_ms);
            create_audio_label(window, L"Maximum correction (0-10000 ppm):",
                               25, 459, 220);
            state->max_rate_adjustment = create_audio_numeric_edit(window,
                ID_AUDIO_MAX_RATE, 245, 454,
                state->settings.max_rate_adjustment_ppm);
            create_audio_label(window, L"Averaging window (1-60 frames):",
                               25, 497, 220);
            state->averaging_frames = create_audio_numeric_edit(window,
                ID_AUDIO_AVERAGING, 245, 492,
                state->settings.averaging_frames);
            state->integral_enabled = create_audio_checkbox(window,
                ID_AUDIO_INTEGRAL, L"Enable slow integral correction",
                25, 532, 320, state->settings.integral_correction_enabled);

            group = CreateWindowExW(0, L"BUTTON",
                L"Last live diagnostics (captured before this window paused audio)",
                WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 390, 355, 380, 230,
                window, NULL, g_instance, NULL);
            set_control_font(group);
            _snwprintf_s(diagnostics, ARRAY_COUNT(diagnostics), _TRUNCATE,
                L"Device: %s\r\nRate: %d Hz | Queue: %u frames | Safe: %u | Target: %u\r\n"
                L"Average safe latency: %.2f ms | Ratio: %.6f\r\n"
                L"Underruns: %llu | Recoveries: %llu | Dropped: %llu\r\n"
                L"Write failures: %llu | Device reopens: %llu",
                state->opened_device_name[0] ? state->opened_device_name :
                    L"Audio device not open",
                state->diagnostics.device_sample_rate,
                state->diagnostics.queue_depth_frames,
                state->diagnostics.safe_queue_depth_frames,
                state->diagnostics.target_latency_frames,
                state->diagnostics.average_latency_ms,
                state->diagnostics.playback_ratio,
                (unsigned long long)state->diagnostics.underruns,
                (unsigned long long)state->diagnostics.queue_recoveries,
                (unsigned long long)state->diagnostics.stale_frames_dropped,
                (unsigned long long)state->diagnostics.queue_failures,
                (unsigned long long)state->diagnostics.device_reopens);
            {
                HWND diagnostics_control = CreateWindowExW(
                    WS_EX_CLIENTEDGE, L"EDIT", diagnostics,
                    WS_CHILD | WS_VISIBLE | WS_TABSTOP | ES_MULTILINE |
                    ES_READONLY | ES_AUTOVSCROLL | WS_VSCROLL,
                    405, 382, 350, 185, window,
                    (HMENU)(INT_PTR)ID_AUDIO_DIAGNOSTICS, g_instance, NULL);
                set_control_font(diagnostics_control);
            }

            set_control_font(CreateWindowExW(0, L"BUTTON", L"Restore defaults",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                18, 602, 140, 32, window,
                (HMENU)(INT_PTR)ID_AUDIO_DEFAULTS, g_instance, NULL));
            set_control_font(CreateWindowExW(0, L"BUTTON", L"OK",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                535, 602, 105, 32, window,
                (HMENU)(INT_PTR)ID_AUDIO_APPLY, g_instance, NULL));
            set_control_font(CreateWindowExW(0, L"BUTTON", L"Cancel",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                650, 602, 105, 32, window,
                (HMENU)(INT_PTR)ID_AUDIO_CANCEL, g_instance, NULL));
            apply_audio_settings_to_controls(state);
            return 0;
        }

        case WM_GETMINMAXINFO: {
            MINMAXINFO *info = (MINMAXINFO *)lparam;
            info->ptMinTrackSize.x = 800;
            info->ptMinTrackSize.y = 680;
            return 0;
        }

        case WM_COMMAND:
            if (LOWORD(wparam) == ID_AUDIO_LATENCY_ENABLED) {
                update_audio_control_enabled_state(state);
                return 0;
            }
            if (LOWORD(wparam) == ID_AUDIO_DRIFT_ENABLED ||
                LOWORD(wparam) == ID_AUDIO_RECOVERY_ENABLED) {
                update_audio_control_enabled_state(state);
                return 0;
            }
            if (LOWORD(wparam) == ID_AUDIO_DEFAULTS) {
                simcity_audio_settings_defaults(&state->settings);
                apply_audio_settings_to_controls(state);
                return 0;
            }
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
    HWND previous_focus = GetFocus();

    ZeroMemory(&message, sizeof(message));
    memset(&state, 0, sizeof(state));
    state.settings = g_audio_settings;
    simcity_audio_output_get_diagnostics(&g_audio_output, &state.diagnostics);
    if (g_audio_output.opened_device_name[0]) {
        wcsncpy(state.opened_device_name, g_audio_output.opened_device_name,
                ARRAY_COUNT(state.opened_device_name) - 1u);
        state.opened_device_name[ARRAY_COUNT(state.opened_device_name) - 1u] =
            L'\0';
    }
    resume_after = g_game && !g_paused;
    if (resume_after) pause_game(L"Paused while Audio Settings is open.");

    dialog = CreateWindowExW(
        WS_EX_DLGMODALFRAME | WS_EX_CONTROLPARENT,
        AUDIO_CLASS_NAME, L"SimCity Audio Settings",
        WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 680,
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
        if (message.message == WM_KEYDOWN &&
            message.wParam == VK_ESCAPE) {
            DestroyWindow(dialog);
            continue;
        }
        if (!IsDialogMessageW(dialog, &message)) {
            TranslateMessage(&message);
            DispatchMessageW(&message);
        }
    }
    if (parent_was_enabled) EnableWindow(g_window, TRUE);

    if (state.applied) {
        g_audio_settings = state.settings;
        simcity_audio_settings_save(&g_audio_settings, g_settings_ini_path);
        if (g_game) {
            if (open_audio(1) && simcity_audio_output_is_open(&g_audio_output))
                set_status(L"Audio settings applied.");
            else if (!g_audio_settings.enabled)
                set_status(L"Audio settings applied. Audio output is disabled.");
        } else {
            set_status(L"Audio settings saved. They will be used when the game starts.");
        }
    }
    if (resume_after && g_game) play_game();
    else restore_main_window_focus(previous_focus);
    if (message_result == 0) PostQuitMessage((int)message.wParam);
}

static HMENU create_menu_bar(void) {
    HMENU bar = CreateMenu();
    HMENU file = CreatePopupMenu();
    HMENU settings = CreatePopupMenu();
    AppendMenuW(file, MF_STRING, ID_BROWSE_MENU, L"&Browse ROM...");
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
                L"Capture Game Frame\tF8");
    AppendMenuW(file, MF_SEPARATOR, 0, NULL);
    AppendMenuW(file, MF_STRING, ID_EXIT, L"E&xit\tAlt+F4");
    AppendMenuW(settings, MF_STRING, ID_FRONTEND_SETTINGS,
                L"&Settings...\tF4");
    AppendMenuW(settings, MF_STRING, ID_KEYS,
                L"&Controller Bindings...\tF5");
    AppendMenuW(settings, MF_STRING, ID_AUDIO_SETTINGS,
                L"&Audio Settings...\tF6");
    AppendMenuW(settings, MF_SEPARATOR, 0, NULL);
    AppendMenuW(settings, MF_STRING, ID_FULLSCREEN,
                 L"Use &Full Screen When Playing");
    AppendMenuW(settings, MF_STRING, ID_WIDESCREEN,
                 L"Use SimCity &Wide Screen");
    AppendMenuW(settings, MF_STRING, ID_60_FPS, L"&60 FPS");
    AppendMenuW(settings, MF_STRING, ID_AUTO_RUN,
                L"&Auto-Run at Startup");
    AppendMenuW(settings, MF_SEPARATOR, 0, NULL);
    AppendMenuW(settings, MF_STRING, ID_ABOUT, L"&About");
    AppendMenuW(bar, MF_POPUP, (UINT_PTR)file, L"&File");
    AppendMenuW(bar, MF_POPUP, (UINT_PTR)settings, L"&Settings");
    return bar;
}

static void initialize_paths_and_settings(void) {
    wchar_t module_path[PATH_CAPACITY];
    wchar_t default_rom[PATH_CAPACITY];
    wchar_t legacy_audio_ini[PATH_CAPACITY];
    wchar_t legacy_frontend_ini[PATH_CAPACITY];
    wchar_t migrated_rom_path[PATH_CAPACITY];
    wchar_t *slash;
    DWORD attributes;
    int unified_exists;
    DWORD length = GetModuleFileNameW(NULL, module_path,
                                     (DWORD)(sizeof(module_path) /
                                             sizeof(module_path[0])));
    simcity_audio_settings_defaults(&g_audio_settings);
    simcity_audio_output_initialize(&g_audio_output);
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
                   sizeof(g_saves_directory) /
                       sizeof(g_saves_directory[0]),
                   g_executable_directory, L"Saves");
    join_wide_path(g_sram_path, ARRAY_COUNT(g_sram_path), g_saves_directory, L"In-Game Saves.scwb");

    (void)_snwprintf(g_settings_ini_path,
                     sizeof(g_settings_ini_path) /
                     sizeof(g_settings_ini_path[0]),
                     L"%s\\settings.ini", g_executable_directory);
    g_settings_ini_path[(sizeof(g_settings_ini_path) /
                         sizeof(g_settings_ini_path[0])) - 1u] = L'\0';
    (void)_snwprintf(legacy_audio_ini,
                     sizeof(legacy_audio_ini) / sizeof(legacy_audio_ini[0]),
                     L"%s\\Launcher-Audio.ini", g_executable_directory);
    legacy_audio_ini[(sizeof(legacy_audio_ini) /
                      sizeof(legacy_audio_ini[0])) - 1u] = L'\0';
    (void)_snwprintf(legacy_frontend_ini,
                     sizeof(legacy_frontend_ini) /
                     sizeof(legacy_frontend_ini[0]),
                     L"%s\\Launcher-Frontend.ini", g_executable_directory);
    legacy_frontend_ini[(sizeof(legacy_frontend_ini) /
                         sizeof(legacy_frontend_ini[0])) - 1u] = L'\0';
    unified_exists = GetFileAttributesW(g_settings_ini_path) !=
                     INVALID_FILE_ATTRIBUTES;
    simcity_frontend_settings_win32_load(
        &g_frontend_settings,
        !unified_exists && GetFileAttributesW(legacy_frontend_ini) !=
            INVALID_FILE_ATTRIBUTES ? legacy_frontend_ini :
                                      g_settings_ini_path);
    g_exact_60hz_presentation = g_frontend_settings.ntsc_frame_lock;
    simcity_audio_settings_load(
        &g_audio_settings,
        !unified_exists && GetFileAttributesW(legacy_audio_ini) !=
            INVALID_FILE_ATTRIBUTES ? legacy_audio_ini :
                                      g_settings_ini_path);
    if (!unified_exists) {
        int frontend_saved;
        migrated_rom_path[0] = L'\0';
        (void)GetPrivateProfileStringW(
            L"ROM", L"Path", L"", migrated_rom_path,
            (DWORD)(sizeof(migrated_rom_path) /
                    sizeof(migrated_rom_path[0])), legacy_frontend_ini);
        frontend_saved = simcity_frontend_settings_win32_save(
            &g_frontend_settings, g_settings_ini_path);
        simcity_audio_settings_save(&g_audio_settings, g_settings_ini_path);
        if (migrated_rom_path[0])
            (void)WritePrivateProfileStringW(
                L"ROM", L"Path", migrated_rom_path, g_settings_ini_path);
        (void)WritePrivateProfileStringW(NULL, NULL, NULL,
                                         g_settings_ini_path);
        if (frontend_saved &&
            GetFileAttributesW(g_settings_ini_path) !=
                INVALID_FILE_ATTRIBUTES) {
            (void)DeleteFileW(legacy_frontend_ini);
            (void)DeleteFileW(legacy_audio_ini);
        }
    }
    (void)simcity_gamepad_win32_initialize(&g_gamepad, NULL);
    /* Keep the configured default input source on first launch.  A connected
       physical or virtual controller must not silently disable the keyboard;
       the user can explicitly select Gamepad in Controls.  This follows the
       Mesen input contract: device discovery does not itself choose which
       configured mapping supplies Player 1 input. */
    SendMessageW(g_auto_run_checkbox, BM_SETCHECK,
                 g_frontend_settings.auto_run_on_load ? BST_CHECKED : BST_UNCHECKED,
                 0);

    default_rom[0] = L'\0';
    (void)GetPrivateProfileStringW(
        L"ROM", L"Path", L"", default_rom,
        (DWORD)(sizeof(default_rom) / sizeof(default_rom[0])),
        g_settings_ini_path);
    attributes = default_rom[0] ? GetFileAttributesW(default_rom) :
                                 INVALID_FILE_ATTRIBUTES;
    if ((attributes != INVALID_FILE_ATTRIBUTES &&
         (attributes & FILE_ATTRIBUTE_DIRECTORY) == 0) ||
        find_sfc_rom(g_rom_directory, default_rom,
                     sizeof(default_rom) / sizeof(default_rom[0]))) {
        g_adjacent_rom_found = 1;
        SetWindowTextW(g_rom_path, default_rom);
    }
    SendMessageW(g_fullscreen_checkbox, BM_SETCHECK,
                 g_frontend_settings.fullscreen_on_play ?
                 BST_CHECKED : BST_UNCHECKED, 0);
    SendMessageW(g_widescreen_checkbox, BM_SETCHECK,
                 g_frontend_settings.widescreen ?
                 BST_CHECKED : BST_UNCHECKED, 0);
    update_controls();
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
        set_status(L"Browse for the required SimCity ROM.");
        update_controls();
        SetFocus(g_browse_button);
        NotifyWinEvent(EVENT_OBJECT_FOCUS, g_browse_button,
                       OBJID_CLIENT, CHILDID_SELF);
    }
    if (g_getting_started_save_failed) {
        set_status(L"Welcome closed, but its one-time setting could not be saved; it will appear again next launch.");
        g_getting_started_save_failed = 0;
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
    if (IsWindow(g_widescreen_checkbox))
        g_frontend_settings.widescreen =
            SendMessageW(g_widescreen_checkbox, BM_GETCHECK, 0, 0) ==
            BST_CHECKED;
    (void)simcity_frontend_settings_win32_save(
        &g_frontend_settings, g_settings_ini_path);
    simcity_audio_settings_save(&g_audio_settings, g_settings_ini_path);
    g_settings_saved_on_exit = 1;
}

static LRESULT CALLBACK window_proc(HWND window, UINT message,
                                    WPARAM wparam, LPARAM lparam) {
    switch (message) {
        case WM_GETOBJECT:
            /* The launcher remains a normal accessible Win32 UI.  While the
               emulated game view is active it has no useful control tree, so
               do not expose DefWindowProc's synthetic client object to screen readers. */
            if (g_game && !g_paused) return 0;
            break;

        case WM_CREATE:
            g_browse_button = CreateWindowExW(
                0, L"BUTTON", L"&Browse",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_DEFPUSHBUTTON,
                8, 8, 92, 30, window, (HMENU)(INT_PTR)ID_BROWSE,
                g_instance, NULL);
            g_pause_play_button = CreateWindowExW(
                0, L"BUTTON", L"&Play",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                106, 8, 72, 30, window,
                (HMENU)(INT_PTR)ID_PAUSE_PLAY, g_instance, NULL);
            g_reset_button = CreateWindowExW(
                0, L"BUTTON", L"&Reset",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                184, 8, 66, 30, window, (HMENU)(INT_PTR)ID_RESET,
                g_instance, NULL);
            g_audio_button = CreateWindowExW(
                0, L"BUTTON", L"&Audio",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                256, 8, 66, 30, window,
                (HMENU)(INT_PTR)ID_AUDIO_SETTINGS, g_instance, NULL);
            g_settings_button = CreateWindowExW(
                0, L"BUTTON", L"&Settings",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                328, 8, 82, 30, window,
                (HMENU)(INT_PTR)ID_FRONTEND_SETTINGS, g_instance, NULL);
            g_keys_button = CreateWindowExW(
                0, L"BUTTON", L"&Controls",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_PUSHBUTTON,
                416, 8, 62, 30, window, (HMENU)(INT_PTR)ID_KEYS,
                g_instance, NULL);
            g_fullscreen_checkbox = CreateWindowExW(
                0, L"BUTTON", L"&Full screen",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
                488, 10, 112, 26, window,
                (HMENU)(INT_PTR)ID_FULLSCREEN, g_instance, NULL);
            g_widescreen_checkbox = CreateWindowExW(
                0, L"BUTTON", L"&Wide Screen",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
                610, 10, 108, 26, window,
                (HMENU)(INT_PTR)ID_WIDESCREEN, g_instance, NULL);
            g_auto_run_checkbox = CreateWindowExW(
                0, L"BUTTON", L"Auto-&Run",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
                724, 10, 88, 26, window,
                (HMENU)(INT_PTR)ID_AUTO_RUN, g_instance, NULL);
            g_60_fps_checkbox = CreateWindowExW(
                0, L"BUTTON", L"&60 FPS",
                WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_AUTOCHECKBOX,
                818, 10, 82, 26, window,
                (HMENU)(INT_PTR)ID_60_FPS, g_instance, NULL);
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
            set_control_font(g_settings_button);
            set_control_font(g_fullscreen_checkbox);
            set_control_font(g_widescreen_checkbox);
            set_control_font(g_60_fps_checkbox);
            set_control_font(g_auto_run_checkbox);
            set_control_font(g_rom_path);
            set_control_font(g_status);
            SendMessageW(g_fullscreen_checkbox, BM_SETCHECK, BST_UNCHECKED, 0);
            SendMessageW(g_widescreen_checkbox, BM_SETCHECK, BST_CHECKED, 0);
            SendMessageW(g_auto_run_checkbox, BM_SETCHECK, BST_UNCHECKED, 0);
            update_controls();
            return 0;

        case WM_SIZE:
            layout_controls(window);
            return 0;

        case WM_GETMINMAXINFO: {
            MINMAXINFO *info = (MINMAXINFO *)lparam;
            info->ptMinTrackSize.x = 930;
            info->ptMinTrackSize.y = 580;
            return 0;
        }

        case WM_PAINT:
            paint_window(window);
            return 0;

        case WM_ERASEBKGND:
            /* paint_window always covers the entire client area.  Suppressing
               the separate erase pass avoids a visible black flash and keeps
               presentation work out of the emulation/audio schedule. */
            return 1;

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
                case ID_60_FPS:
                    g_frontend_settings.ntsc_frame_lock = lparam ?
                        SendMessageW(g_60_fps_checkbox, BM_GETCHECK, 0, 0) == BST_CHECKED :
                        !g_frontend_settings.ntsc_frame_lock;
                    g_exact_60hz_presentation = g_frontend_settings.ntsc_frame_lock;
                    reset_pacing_clock();
                    if (!simcity_frontend_settings_win32_save(
                            &g_frontend_settings, g_settings_ini_path))
                        set_status(L"60 FPS changed, but settings could not be saved.");
                    update_controls();
                    return 0;
                case ID_PAUSE_PLAY: toggle_pause_play(); return 0;
                case ID_KEYS: show_key_bindings(); return 0;
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
                        &g_frontend_settings, g_settings_ini_path);
                    update_controls();
                    return 0;
                case ID_WIDESCREEN: {
                    char error[256];
                    if (lparam == 0) {
                        LRESULT checked = SendMessageW(g_widescreen_checkbox,
                                                       BM_GETCHECK, 0, 0);
                        SendMessageW(g_widescreen_checkbox, BM_SETCHECK,
                                     checked == BST_CHECKED ? BST_UNCHECKED :
                                     BST_CHECKED, 0);
                    }
                    g_frontend_settings.widescreen =
                        SendMessageW(g_widescreen_checkbox, BM_GETCHECK,
                                     0, 0) == BST_CHECKED;
                    memset(error, 0, sizeof(error));
                    const int restart_prepared = g_prepared_video != NULL;
                    close_prepared_video();
                    if (g_game && !simcity_recomp_set_widescreen(
                            g_game, g_frontend_settings.widescreen,
                            error, sizeof(error))) {
                        g_frontend_settings.widescreen =
                            simcity_recomp_widescreen_enabled(g_game);
                        SendMessageW(g_widescreen_checkbox, BM_SETCHECK,
                            g_frontend_settings.widescreen ? BST_CHECKED :
                                                            BST_UNCHECKED, 0);
                        set_status_utf8(error[0] ? error :
                            "Unable to change widescreen geometry.");
                    } else {
                        (void)simcity_frontend_settings_win32_save(
                            &g_frontend_settings, g_settings_ini_path);
                        set_status(g_frontend_settings.widescreen ?
                            L"Widescreen enabled: rendering 71 additional pixels on both sides." :
                            L"Widescreen disabled: authentic 256-pixel presentation restored.");
                        InvalidateRect(g_window, NULL, TRUE);
                    }
                    if (restart_prepared) reset_pacing_clock();
                    update_controls();
                    return 0;
                }
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
                        &g_frontend_settings, g_settings_ini_path);
                    set_status(g_frontend_settings.auto_run_on_load ?
                        L"Auto-Run enabled for the next launch." :
                        L"Auto-Run disabled. Adjacent ROMs will load and wait for Play.");
                    return 0;
                case ID_SNAPSHOT_SAVE: show_snapshot_window(1); return 0;
                case ID_SNAPSHOT_LOAD: show_snapshot_window(0); return 0;
                case ID_SNAPSHOT_SAVE_CURRENT: save_current_snapshot(); return 0;
                case ID_SNAPSHOT_LOAD_CURRENT: load_current_snapshot(); return 0;
                case ID_SCREENSHOT: capture_core_screenshot(); return 0;
                case ID_ABOUT:
                    {
                        static const wchar_t about[] =
                            L"F1 - Open the Welcome window\r\n\r\n"
                            L"SimCity (SNES) Static Recompilation\r\n"
                            L"Version 2.0.0\r\n\r\n"
                            L"Title: SimCity\r\n"
                            L"Region: USA/Canada NTSC\r\n"
                            L"File type: .sfc";
                        if (IsWindow(g_info_window))
                            DestroyWindow(g_info_window);
                        show_information_window(L"About SimCity",
                                                about, 520, 320);
                    }
                    return 0;
                case ID_EXIT: SendMessageW(window, WM_CLOSE, 0, 0); return 0;
                default: break;
            }
            break;

        case WM_KEYDOWN:
            if (wparam == VK_ESCAPE) {
#ifdef SIMCITY_HEADED_QA
                g_headed_qa_active = 0;
#endif
                if ((lparam & (1L << 30)) == 0) toggle_pause_play();
                return 0;
            }
            if (wparam == VK_F1) { show_getting_started_window(0); return 0; }
            if (wparam == VK_F2) {
                show_snapshot_window(1);
                return 0;
            }
            if (wparam == VK_F3) { show_snapshot_window(0); return 0; }
            if (wparam == VK_F4) {
                show_frontend_settings();
                return 0;
            }
            if (wparam == VK_F5) { show_key_bindings(); return 0; }
            if (wparam == VK_F6) { show_audio_settings(); return 0; }
            if (wparam == VK_F7) {
                if (!g_game) start_rom_load(1);
                return 0;
            }
            if (wparam == VK_F8) { capture_core_screenshot(); return 0; }
            if (wparam == '1') { save_current_snapshot(); return 0; }
            if (wparam == '2') { load_current_snapshot(); return 0; }
            if (g_game && !g_paused && GetFocus() == g_window &&
                keyboard_gameplay_active()) {
                uint16_t mask = virtual_key_to_input(wparam);
                if (mask != 0u) {
                    simcity_input_latch_press(
                        &g_keyboard_input, mask, opposite_direction(mask),
                        (lparam & (1L << 30)) != 0);
                    return 0;
                }
            }
            break;

        case WM_KEYUP:
            if (g_game && !g_paused && GetFocus() == g_window &&
                keyboard_gameplay_active()) {
                uint16_t mask = virtual_key_to_input(wparam);
                if (mask != 0u) {
                    simcity_input_latch_release(&g_keyboard_input, mask);
                    return 0;
                }
            }
            break;

        case WM_KILLFOCUS:
            simcity_input_latch_reset(&g_keyboard_input);
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
            close_prepared_video();
            simcity_recomp_destroy(g_game);
            g_game = result->game;
            simcity_recomp_world_catalog_enable(g_game, 1);
#ifdef SIMCITY_HEADED_QA
            open_headed_qa_tape();
#endif
            g_world_catalog_screen = SIMCITY_WORLD_CATALOG_HIDDEN;
            g_world_catalog_selected = 0u;
            {
                char geometry_error[256];
                memset(geometry_error, 0, sizeof(geometry_error));
                if (!simcity_recomp_set_widescreen(
                        g_game, g_frontend_settings.widescreen,
                        geometry_error, sizeof(geometry_error))) {
                    simcity_recomp_destroy(g_game);
                    g_game = NULL;
                    utf8_to_wide(geometry_error, result->error,
                                 ARRAY_COUNT(result->error));
                    MessageBoxW(window, result->error, APP_TITLE,
                                MB_OK | MB_ICONERROR);
                    free(result);
                    (void)open_audio(1);
                    update_controls();
                    return 0;
                }
            }
            g_loaded_snapshot_slot = -1;
            g_sram_last_flush_frame = 0u;
            g_audio_last_fifo_dropped = 0u;
            g_audio_last_underruns = 0u;
            g_audio_last_queue_failures = 0u;
            g_audio_fps_window_qpc = 0u;
            g_audio_fps_window_frame = 0u;
            g_audio_host_fps = 0.0;
            g_presented_frame_count = 0u;
            g_presented_fps_window_count = 0u;
            g_presented_last_emu_frame = UINT32_MAX;
            g_presented_host_fps = 0.0;
            g_pacing_render_resync_frames = 0u;
            result->game = NULL;
            free(result);
            g_paused = 1;
            simcity_input_latch_reset(&g_keyboard_input);
            (void)open_audio(1);
            InvalidateRect(window, NULL, TRUE);
            update_controls();
            if (g_play_after_load) {
                play_game();
            } else {
                SetWindowTextW(window, LAUNCHER_TITLE);
                set_status(L"SimCity is loaded and ready. Choose Play to start.");
                SetFocus(g_pause_play_button);
            }
            return 0;
        }

        case WM_APP_STARTUP_CONTINUE:
            continue_startup_after_welcome();
            return 0;

        case WM_APP_WELCOME_CLOSED:
            finish_welcome_close();
            return 0;

        case WM_CLOSE:
            if (InterlockedCompareExchange(&g_loading, 0, 0) != 0) {
                g_close_requested = 1;
                set_status(L"Closing after the current ROM load finishes...");
                update_controls();
                return 0;
            }
            if (!flush_battery_sram_win32(1, NULL, 0u)) {
                set_status(L"Could not write the in-game saves. The current city is still open.");
                MessageBoxW(window, L"Could not write the in-game saves. Check the save folder and try closing again.",
                            APP_TITLE, MB_OK | MB_ICONERROR);
                return 0;
            }
            g_shutting_down = 1;
            save_current_settings_on_exit();
            DestroyWindow(window);
            return 0;

        case WM_ENDSESSION:
            if (wparam) {
                (void)flush_battery_sram_win32(1, NULL, 0u);
                save_current_settings_on_exit();
            }
            return 0;

        case WM_DESTROY:
            save_current_settings_on_exit();
            if (g_frame_timer) (void)CancelWaitableTimer(g_frame_timer);
            (void)flush_battery_sram_win32(1, NULL, 0u);
            close_audio();
            if (g_loader_thread) {
                WaitForSingleObject(g_loader_thread, INFINITE);
                CloseHandle(g_loader_thread);
                g_loader_thread = NULL;
            }
            close_prepared_video();
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
    window_class.hbrBackground = NULL;
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
    ShowWindow(g_window, SW_SHOWNORMAL);
    UpdateWindow(g_window);
    g_startup_pending = 1;
    if (!g_frontend_settings.welcome_shown) {
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
                LARGE_INTEGER message_begin = {0}, message_end;
                const int measure_messages = g_world_map_audio_log && QueryPerformanceCounter(&message_begin);
                uint32_t messages_processed = 0u;
                int timer_taken = 0;
                LARGE_INTEGER message_present_at = {0};
                int present_without_timer = 0;
                while (messages_processed < MAX_HOST_MESSAGES_PER_PASS) {
                    const int game_running = g_exact_60hz_presentation && g_game && !g_paused;
                    timer_taken = simcity_host_take_timer_between_messages(g_frame_timer,
                        messages_processed, game_running);
                    if (timer_taken) break;
                    if (messages_processed && game_running && g_prepared_video &&
                        QueryPerformanceCounter(&message_present_at) &&
                        simcity_host_present_between_messages(messages_processed, 1,
                            g_presentation_clock.deadline, (uint64_t)message_present_at.QuadPart)) {
                        present_without_timer = 1;
                        break;
                    }
                    if (!PeekMessageW(&message, NULL, 0, 0, PM_REMOVE)) break;
                    int root_shortcut;
                    int game_key;
                    ++messages_processed;
                    if (message.message == WM_QUIT) {
                        running = 0;
                        break;
                    }
                    if (g_welcome_close_pending && message.message != WM_APP_WELCOME_CLOSED &&
                        !(message.message == WM_CLOSE && message.hwnd == g_window))
                        finish_welcome_close();
                    if (IsWindow(g_getting_started_window) &&
                        message.message == WM_SYSKEYDOWN && message.wParam == VK_F4 &&
                        (message.lParam & (1L << 29)) != 0 &&
                        (message.hwnd == g_window || message.hwnd == g_getting_started_window ||
                         IsChild(g_getting_started_window, message.hwnd))) {
                        DestroyWindow(g_getting_started_window);
                        continue;
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
                    if (IsWindow(g_info_window) &&
                        (message.hwnd == g_info_window ||
                         IsChild(g_info_window, message.hwnd))) {
                        if (message.message == WM_KEYDOWN &&
                            message.wParam == VK_ESCAPE) {
                            DestroyWindow(g_info_window);
                            continue;
                        }
                        if (IsDialogMessageW(g_info_window, &message))
                            continue;
                    }
                    root_shortcut =
                        message.message == WM_KEYDOWN &&
                        (message.wParam == VK_ESCAPE || message.wParam == VK_F1 ||
                         message.wParam == VK_F2 || message.wParam == VK_F3 ||
                         message.wParam == VK_F4 || message.wParam == VK_F5 ||
                         message.wParam == VK_F6 || message.wParam == VK_F7 ||
                         message.wParam == VK_F8 ||
                         message.wParam == '1' ||
                         message.wParam == '2');
                    game_key =
                        (message.message == WM_KEYDOWN ||
                         message.message == WM_KEYUP) &&
                          GetFocus() == g_window && g_game && !g_paused &&
                          keyboard_gameplay_active() &&
                        virtual_key_to_input(message.wParam) != 0u;
                    if (root_shortcut) {
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
                if (measure_messages && QueryPerformanceCounter(&message_end) &&
                    message_end.QuadPart >= message_begin.QuadPart) {
                    g_host_pending_message_ticks += (uint64_t)(message_end.QuadPart - message_begin.QuadPart);
                    g_host_pending_message_count += messages_processed;
                }
                if (timer_taken) service_host_timer();
                else if (present_without_timer) {
                    if (g_world_map_audio_log) {
                        g_host_timer_due = 0u;
                        g_host_timer_entry = 0u;
                        g_host_message_ticks = g_host_pending_message_ticks;
                        g_host_message_count = g_host_pending_message_count;
                    }
                    if (QueryPerformanceCounter(&message_end)) message_present_at = message_end;
                    service_presentation_clock((uint64_t)message_present_at.QuadPart, 0);
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
    if (g_world_map_audio_log) {
        flush_host_present_faults();
        simcity_playback_log_close(g_world_map_audio_log);
    }
    return (int)message.wParam;
}
