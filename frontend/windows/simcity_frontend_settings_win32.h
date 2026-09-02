#ifndef SIMCITY_FRONTEND_SETTINGS_WIN32_H
#define SIMCITY_FRONTEND_SETTINGS_WIN32_H

#include <windows.h>
#include <stdint.h>

#include "simcity_gamepad_input_win32.h"

#define SIMCITY_WIN_BINDING_COUNT 12
#define SIMCITY_INPUT_SOURCE_KEYBOARD 0
#define SIMCITY_INPUT_SOURCE_GAMEPAD 1

typedef enum SimCityWinBindingAction {
    SIMCITY_WIN_BIND_UP = 0, SIMCITY_WIN_BIND_DOWN, SIMCITY_WIN_BIND_LEFT, SIMCITY_WIN_BIND_RIGHT,
    SIMCITY_WIN_BIND_SNES_B, SIMCITY_WIN_BIND_SNES_A, SIMCITY_WIN_BIND_SNES_Y,
    SIMCITY_WIN_BIND_SNES_X, SIMCITY_WIN_BIND_SNES_L, SIMCITY_WIN_BIND_SNES_R,
    SIMCITY_WIN_BIND_START, SIMCITY_WIN_BIND_SELECT
} SimCityWinBindingAction;

typedef struct SimCityFrontendSettingsWin32 {
    int integer_scale;
    int pause_on_focus_loss;
    int auto_run_on_load;
    int fullscreen_on_play;
    int show_fps_counter;
    int ntsc_frame_lock;
    int widescreen;
    int snapshot_slot;
    int input_source;
    int input_source_saved;
    int welcome_shown;
    UINT bindings[SIMCITY_WIN_BINDING_COUNT];
    int gamepad_bindings[SIMCITY_WIN_BINDING_COUNT];
} SimCityFrontendSettingsWin32;

void simcity_frontend_settings_win32_defaults(SimCityFrontendSettingsWin32 *s);
void simcity_frontend_settings_win32_classic(SimCityFrontendSettingsWin32 *s);
void simcity_frontend_settings_win32_load(SimCityFrontendSettingsWin32 *s,
                                          const wchar_t *path);
int simcity_frontend_settings_win32_save(const SimCityFrontendSettingsWin32 *s,
                                         const wchar_t *path);
uint16_t simcity_frontend_settings_win32_input(
    const SimCityFrontendSettingsWin32 *s, UINT virtual_key);
const wchar_t *simcity_frontend_settings_win32_action_name(int action);
void simcity_frontend_settings_win32_key_name(UINT virtual_key,
                                               wchar_t *text, size_t capacity);
int simcity_frontend_settings_win32_dialog(HWND parent, HINSTANCE instance,
                                           SimCityFrontendSettingsWin32 *s);
int simcity_frontend_controls_win32_dialog(HWND parent, HINSTANCE instance,
                                           SimCityFrontendSettingsWin32 *s,
                                           SimCityGamepadInputWin32 *gamepad);

#endif
