#ifndef SIMCITY_FRONTEND_SETTINGS_WIN32_H
#define SIMCITY_FRONTEND_SETTINGS_WIN32_H

#include <windows.h>
#include <stdint.h>

#include "simcity_gamepad_input_win32.h"

#define SIMCITY_WIN_BINDING_COUNT 12
#define SIMCITY_PLAYER_COUNT 1
#define SIMCITY_INPUT_SOURCE_KEYBOARD 0
#define SIMCITY_INPUT_SOURCE_GAMEPAD 1
#define SIMCITY_INPUT_SOURCE_COMBINED 2
#define SIMCITY_GAMEPAD_GUID_CAPACITY 64

typedef enum SimCityWinBindingAction {
    SC_WIN_BIND_UP = 0, SC_WIN_BIND_DOWN, SC_WIN_BIND_LEFT, SC_WIN_BIND_RIGHT,
    SC_WIN_BIND_SNES_B, SC_WIN_BIND_SNES_A, SC_WIN_BIND_SNES_Y,
    SC_WIN_BIND_SNES_X, SC_WIN_BIND_SNES_L, SC_WIN_BIND_SNES_R,
    SC_WIN_BIND_START, SC_WIN_BIND_SELECT
} SimCityWinBindingAction;

typedef struct SimCityFrontendSettingsWin32 {
    int integer_scale;
    int pause_on_focus_loss;
    int auto_run_on_load;
    int fullscreen_on_play;
    int show_status_text;
    int correct_aspect;
    int vsync_enabled;
    int allow_invalid_input;
    int gamepad_deadzone_percent;
    int snapshot_slot;
    int input_source[SIMCITY_PLAYER_COUNT];
    int input_source_saved[SIMCITY_PLAYER_COUNT];
    int getting_started_shown;
    UINT bindings[SIMCITY_PLAYER_COUNT][SIMCITY_WIN_BINDING_COUNT];
    int gamepad_bindings[SIMCITY_PLAYER_COUNT][SIMCITY_WIN_BINDING_COUNT];
    wchar_t gamepad_guid[SIMCITY_PLAYER_COUNT][SIMCITY_GAMEPAD_GUID_CAPACITY];
} SimCityFrontendSettingsWin32;

void simcity_frontend_settings_win32_defaults(SimCityFrontendSettingsWin32 *s);
void simcity_frontend_settings_win32_classic(SimCityFrontendSettingsWin32 *s);
void simcity_frontend_settings_win32_load(SimCityFrontendSettingsWin32 *s,
                                          const wchar_t *path);
int simcity_frontend_settings_win32_save(const SimCityFrontendSettingsWin32 *s,
                                         const wchar_t *path);
uint16_t simcity_frontend_settings_win32_input(
    const SimCityFrontendSettingsWin32 *s, unsigned player, UINT physical_key);
UINT simcity_frontend_settings_win32_physical_key(UINT virtual_key,
                                                   LPARAM key_lparam);
const wchar_t *simcity_frontend_settings_win32_action_name(int action);
void simcity_frontend_settings_win32_key_name(UINT virtual_key,
                                               wchar_t *text, size_t capacity);
int simcity_frontend_settings_win32_dialog(HWND parent, HINSTANCE instance,
                                           SimCityFrontendSettingsWin32 *s);
int simcity_frontend_controls_win32_dialog(HWND parent, HINSTANCE instance,
                                           SimCityFrontendSettingsWin32 *s,
                                           SimCityGamepadInputWin32 gamepads[SIMCITY_PLAYER_COUNT]);

#endif
