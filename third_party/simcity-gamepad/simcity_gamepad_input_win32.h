#ifndef SIMCITY_GAMEPAD_INPUT_WIN32_H
#define SIMCITY_GAMEPAD_INPUT_WIN32_H

#include <stddef.h>
#include <stdint.h>
#include <windows.h>

#include <SDL3/SDL_gamepad.h>

#define SIMCITY_GAMEPAD_BINDING_COUNT 12

typedef enum SimCityGamepadControl {
    SIMCITY_GAMEPAD_DPAD_UP = 1,
    SIMCITY_GAMEPAD_DPAD_DOWN,
    SIMCITY_GAMEPAD_DPAD_LEFT,
    SIMCITY_GAMEPAD_DPAD_RIGHT,
    SIMCITY_GAMEPAD_LEFT_STICK_UP,
    SIMCITY_GAMEPAD_LEFT_STICK_DOWN,
    SIMCITY_GAMEPAD_LEFT_STICK_LEFT,
    SIMCITY_GAMEPAD_LEFT_STICK_RIGHT,
    SIMCITY_GAMEPAD_FACE_SOUTH,
    SIMCITY_GAMEPAD_FACE_EAST,
    SIMCITY_GAMEPAD_FACE_WEST,
    SIMCITY_GAMEPAD_FACE_NORTH,
    SIMCITY_GAMEPAD_LEFT_SHOULDER,
    SIMCITY_GAMEPAD_RIGHT_SHOULDER,
    SIMCITY_GAMEPAD_LEFT_TRIGGER,
    SIMCITY_GAMEPAD_RIGHT_TRIGGER,
    SIMCITY_GAMEPAD_START,
    SIMCITY_GAMEPAD_BACK,
    SIMCITY_GAMEPAD_LEFT_STICK_BUTTON,
    SIMCITY_GAMEPAD_RIGHT_STICK_BUTTON,
    SIMCITY_GAMEPAD_CONTROL_LAST = SIMCITY_GAMEPAD_RIGHT_STICK_BUTTON
} SimCityGamepadControl;

typedef struct SimCityGamepadInputWin32 {
    SDL_Gamepad *handle;
    int initialized;
    int startup_gamepad_found;
    unsigned refresh_countdown;
    wchar_t name[160];
} SimCityGamepadInputWin32;

int simcity_gamepad_win32_initialize(SimCityGamepadInputWin32 *input,
                                     const wchar_t *mapping_path);
void simcity_gamepad_win32_shutdown(SimCityGamepadInputWin32 *input);
uint16_t simcity_gamepad_win32_poll(
    SimCityGamepadInputWin32 *input,
    const int bindings[SIMCITY_GAMEPAD_BINDING_COUNT]);
int simcity_gamepad_win32_connected(const SimCityGamepadInputWin32 *input);
const wchar_t *simcity_gamepad_win32_name(const SimCityGamepadInputWin32 *input);
void simcity_gamepad_win32_default_bindings(
    int bindings[SIMCITY_GAMEPAD_BINDING_COUNT]);
const wchar_t *simcity_gamepad_win32_control_name(int control);
int simcity_gamepad_win32_capture_control(SimCityGamepadInputWin32 *input);
void simcity_gamepad_win32_control_display_name(
    const SimCityGamepadInputWin32 *input, int control,
    wchar_t *text, size_t capacity);

#endif
