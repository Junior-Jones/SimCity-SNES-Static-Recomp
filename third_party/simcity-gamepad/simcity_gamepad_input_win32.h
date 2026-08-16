#ifndef SIMCITY_GAMEPAD_INPUT_WIN32_H
#define SIMCITY_GAMEPAD_INPUT_WIN32_H

#include <stddef.h>
#include <stdint.h>
#include <windows.h>

#include <SDL3/SDL_gamepad.h>

#define SIMCITY_GAMEPAD_BINDING_COUNT 12

typedef enum SimCityGamepadControl {
    SC_GAMEPAD_DPAD_UP = 1,
    SC_GAMEPAD_DPAD_DOWN,
    SC_GAMEPAD_DPAD_LEFT,
    SC_GAMEPAD_DPAD_RIGHT,
    SC_GAMEPAD_LEFT_STICK_UP,
    SC_GAMEPAD_LEFT_STICK_DOWN,
    SC_GAMEPAD_LEFT_STICK_LEFT,
    SC_GAMEPAD_LEFT_STICK_RIGHT,
    SC_GAMEPAD_FACE_SOUTH,
    SC_GAMEPAD_FACE_EAST,
    SC_GAMEPAD_FACE_WEST,
    SC_GAMEPAD_FACE_NORTH,
    SC_GAMEPAD_LEFT_SHOULDER,
    SC_GAMEPAD_RIGHT_SHOULDER,
    SC_GAMEPAD_LEFT_TRIGGER,
    SC_GAMEPAD_RIGHT_TRIGGER,
    SC_GAMEPAD_START,
    SC_GAMEPAD_BACK,
    SC_GAMEPAD_LEFT_STICK_BUTTON,
    SC_GAMEPAD_RIGHT_STICK_BUTTON,
    SC_GAMEPAD_CONTROL_LAST = SC_GAMEPAD_RIGHT_STICK_BUTTON
} SimCityGamepadControl;

typedef struct SimCityGamepadInputWin32 {
    SDL_Gamepad *handle;
    int initialized;
    int startup_gamepad_found;
    unsigned player_index;
    unsigned refresh_countdown;
    uint32_t analog_latched;
    char preferred_guid[64];
    char guid[64];
    wchar_t name[160];
} SimCityGamepadInputWin32;

int simcity_gamepad_win32_initialize(SimCityGamepadInputWin32 *input,
                                     const wchar_t *mapping_path,
                                     unsigned player_index,
                                     const wchar_t *preferred_guid);
void simcity_gamepad_win32_shutdown(SimCityGamepadInputWin32 *input);
void simcity_gamepad_win32_begin_frame(SimCityGamepadInputWin32 *inputs,
                                       size_t input_count);
uint16_t simcity_gamepad_win32_poll(
    SimCityGamepadInputWin32 *input,
    const int bindings[SIMCITY_GAMEPAD_BINDING_COUNT],
    int deadzone_percent);
int simcity_gamepad_win32_connected(const SimCityGamepadInputWin32 *input);
const wchar_t *simcity_gamepad_win32_name(const SimCityGamepadInputWin32 *input);
void simcity_gamepad_win32_guid(const SimCityGamepadInputWin32 *input,
                                wchar_t *guid, size_t capacity);
void simcity_gamepad_win32_default_bindings(
    int bindings[SIMCITY_GAMEPAD_BINDING_COUNT]);
const wchar_t *simcity_gamepad_win32_control_name(int control);
int simcity_gamepad_win32_capture_control(SimCityGamepadInputWin32 *input);
void simcity_gamepad_win32_control_display_name(
    const SimCityGamepadInputWin32 *input, int control,
    wchar_t *text, size_t capacity);

#endif
