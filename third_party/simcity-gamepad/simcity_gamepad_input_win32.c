#include "simcity_gamepad_input_win32.h"

#include "simcity_static_recomp.h"

#include <SDL3/SDL.h>
#include <string.h>
#include <wchar.h>

#define GAMEPAD_REFRESH_FRAMES 60u
#define GAMEPAD_DEFAULT_DEADZONE_PERCENT 35
#define GAMEPAD_HYSTERESIS_UNITS 3277

static unsigned g_gamepad_users;
static SDL_JoystickID g_open_gamepads[2];

static void utf8_to_wide(const char *text, wchar_t *wide, size_t capacity) {
    int result;
    if (!wide || capacity == 0u) return;
    wide[0] = L'\0';
    if (!text || !text[0]) return;
    result = MultiByteToWideChar(CP_UTF8, 0, text, -1, wide, (int)capacity);
    if (result <= 0) wide[0] = L'\0';
    wide[capacity - 1u] = L'\0';
}

static void wide_to_utf8(const wchar_t *wide, char *text, size_t capacity) {
    int result;
    if (!text || capacity == 0u) return;
    text[0] = '\0';
    if (!wide || !wide[0]) return;
    result = WideCharToMultiByte(CP_UTF8, 0, wide, -1, text, (int)capacity,
                                 NULL, NULL);
    if (result <= 0) text[0] = '\0';
    text[capacity - 1u] = '\0';
}

static void gamepad_guid_string(SDL_JoystickID id, char *text,
                                size_t capacity) {
    SDL_GUID guid;
    if (!text || capacity == 0u) return;
    text[0] = '\0';
    guid = SDL_GetGamepadGUIDForID(id);
    SDL_GUIDToString(guid, text, (int)capacity);
    text[capacity - 1u] = '\0';
}

static void close_gamepad(SimCityGamepadInputWin32 *input) {
    if (!input) return;
    if (input->handle) SDL_CloseGamepad(input->handle);
    if (input->player_index < 2u) g_open_gamepads[input->player_index] = 0;
    input->handle = NULL;
    input->name[0] = L'\0';
    input->analog_latched = 0u;
}

static int open_player_gamepad(SimCityGamepadInputWin32 *input) {
    SDL_JoystickID *gamepads;
    int count = 0;
    int index;
    if (!input || !input->initialized || input->handle) return input && input->handle;
    gamepads = SDL_GetGamepads(&count);
    if (!gamepads) return 0;
    {
        int pass;
        for (pass = 0; pass < 2 && !input->handle; ++pass) {
            for (index = 0; index < count; ++index) {
                unsigned other = input->player_index == 0u ? 1u : 0u;
                char candidate_guid[64];
                int preferred_match;
                if (other < 2u && g_open_gamepads[other] == gamepads[index])
                    continue;
                gamepad_guid_string(gamepads[index], candidate_guid,
                                    sizeof(candidate_guid));
                preferred_match = input->preferred_guid[0] &&
                    strcmp(input->preferred_guid, candidate_guid) == 0;
                if ((pass == 0 && !preferred_match) ||
                    (pass == 1 && input->preferred_guid[0] && preferred_match))
                    continue;
                input->handle = SDL_OpenGamepad(gamepads[index]);
                if (input->handle) {
                    if (input->player_index < 2u)
                        g_open_gamepads[input->player_index] = gamepads[index];
                    strncpy(input->guid, candidate_guid,
                            sizeof(input->guid) - 1u);
                    input->guid[sizeof(input->guid) - 1u] = '\0';
                    if (!input->preferred_guid[0]) {
                        strncpy(input->preferred_guid, candidate_guid,
                                sizeof(input->preferred_guid) - 1u);
                        input->preferred_guid[
                            sizeof(input->preferred_guid) - 1u] = '\0';
                    }
                    utf8_to_wide(SDL_GetGamepadName(input->handle), input->name,
                                 sizeof(input->name) / sizeof(input->name[0]));
                    if (!input->name[0])
                        wcscpy_s(input->name,
                                 sizeof(input->name) / sizeof(input->name[0]),
                                 L"Connected gamepad");
                    break;
                }
            }
        }
    }
    SDL_free(gamepads);
    return input->handle != NULL;
}

int simcity_gamepad_win32_initialize(SimCityGamepadInputWin32 *input,
                                     const wchar_t *mapping_path,
                                     unsigned player_index,
                                     const wchar_t *preferred_guid) {
    char utf8_path[MAX_PATH * 4];
    int length;
    if (!input) return 0;
    memset(input, 0, sizeof(*input));
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "0");
    if (g_gamepad_users == 0u && !SDL_InitSubSystem(SDL_INIT_GAMEPAD)) return 0;
    ++g_gamepad_users;
    input->initialized = 1;
    input->player_index = player_index;
    wide_to_utf8(preferred_guid, input->preferred_guid,
                 sizeof(input->preferred_guid));
    SDL_SetGamepadEventsEnabled(false);
    if (mapping_path && mapping_path[0]) {
        length = WideCharToMultiByte(CP_UTF8, 0, mapping_path, -1,
                                     utf8_path, (int)sizeof(utf8_path),
                                     NULL, NULL);
        if (length > 0) (void)SDL_AddGamepadMappingsFromFile(utf8_path);
    }
    SDL_UpdateGamepads();
    input->startup_gamepad_found = open_player_gamepad(input);
    input->refresh_countdown = GAMEPAD_REFRESH_FRAMES;
    return 1;
}

void simcity_gamepad_win32_shutdown(SimCityGamepadInputWin32 *input) {
    if (!input) return;
    close_gamepad(input);
    if (input->initialized && g_gamepad_users > 0u) {
        --g_gamepad_users;
        if (g_gamepad_users == 0u) SDL_QuitSubSystem(SDL_INIT_GAMEPAD);
    }
    memset(input, 0, sizeof(*input));
}

static int analog_pressed(SimCityGamepadInputWin32 *input, int control,
                          int value, int deadzone_percent) {
    uint32_t bit = 1u << (unsigned)control;
    int threshold;
    int release_threshold;
    int pressed;
    if (deadzone_percent < 10) deadzone_percent = 10;
    if (deadzone_percent > 90) deadzone_percent = 90;
    threshold = (32767 * deadzone_percent) / 100;
    release_threshold = threshold - GAMEPAD_HYSTERESIS_UNITS;
    if (release_threshold < 1024) release_threshold = 1024;
    pressed = (input->analog_latched & bit) != 0u ?
        value > release_threshold : value > threshold;
    if (pressed) input->analog_latched |= bit;
    else input->analog_latched &= ~bit;
    return pressed;
}

static int control_pressed(SimCityGamepadInputWin32 *input, int control,
                           int deadzone_percent) {
    Sint16 axis;
    SDL_Gamepad *gamepad = input ? input->handle : NULL;
    if (!gamepad) return 0;
    switch (control) {
        case SC_GAMEPAD_DPAD_UP: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_UP);
        case SC_GAMEPAD_DPAD_DOWN: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_DOWN);
        case SC_GAMEPAD_DPAD_LEFT: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_LEFT);
        case SC_GAMEPAD_DPAD_RIGHT: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_DPAD_RIGHT);
        case SC_GAMEPAD_LEFT_STICK_UP:
            axis = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTY);
            return analog_pressed(input, control, -(int)axis,
                                  deadzone_percent);
        case SC_GAMEPAD_LEFT_STICK_DOWN:
            axis = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTY);
            return analog_pressed(input, control, (int)axis,
                                  deadzone_percent);
        case SC_GAMEPAD_LEFT_STICK_LEFT:
            axis = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTX);
            return analog_pressed(input, control, -(int)axis,
                                  deadzone_percent);
        case SC_GAMEPAD_LEFT_STICK_RIGHT:
            axis = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTX);
            return analog_pressed(input, control, (int)axis,
                                  deadzone_percent);
        case SC_GAMEPAD_FACE_SOUTH: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_SOUTH);
        case SC_GAMEPAD_FACE_EAST: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_EAST);
        case SC_GAMEPAD_FACE_WEST: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_WEST);
        case SC_GAMEPAD_FACE_NORTH: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_NORTH);
        case SC_GAMEPAD_LEFT_SHOULDER: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_LEFT_SHOULDER);
        case SC_GAMEPAD_RIGHT_SHOULDER: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER);
        case SC_GAMEPAD_LEFT_TRIGGER:
            return analog_pressed(input, control,
                SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER),
                deadzone_percent);
        case SC_GAMEPAD_RIGHT_TRIGGER:
            return analog_pressed(input, control,
                SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER),
                deadzone_percent);
        case SC_GAMEPAD_START: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_START);
        case SC_GAMEPAD_BACK: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_BACK);
        case SC_GAMEPAD_LEFT_STICK_BUTTON: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_LEFT_STICK);
        case SC_GAMEPAD_RIGHT_STICK_BUTTON: return SDL_GetGamepadButton(gamepad, SDL_GAMEPAD_BUTTON_RIGHT_STICK);
        default: return 0;
    }
}

uint16_t simcity_gamepad_win32_poll(
    SimCityGamepadInputWin32 *input,
    const int bindings[SIMCITY_GAMEPAD_BINDING_COUNT],
    int deadzone_percent) {
    static const uint16_t masks[SIMCITY_GAMEPAD_BINDING_COUNT] = {
        SIMCITY_INPUT_UP, SIMCITY_INPUT_DOWN, SIMCITY_INPUT_LEFT,
        SIMCITY_INPUT_RIGHT, SIMCITY_INPUT_B, SIMCITY_INPUT_A,
        SIMCITY_INPUT_Y, SIMCITY_INPUT_X, SIMCITY_INPUT_L,
        SIMCITY_INPUT_R, SIMCITY_INPUT_START, SIMCITY_INPUT_SELECT
    };
    uint16_t result = 0u;
    int index;
    if (!input || !input->initialized || !bindings) return 0u;
    if (!input->handle) return 0u;
    for (index = 0; index < SIMCITY_GAMEPAD_BINDING_COUNT; ++index)
        if (control_pressed(input, bindings[index], deadzone_percent))
            result |= masks[index];
    return result;
}

void simcity_gamepad_win32_begin_frame(SimCityGamepadInputWin32 *inputs,
                                       size_t input_count) {
    size_t index;
    SDL_UpdateGamepads();
    for (index = 0u; inputs && index < input_count; ++index) {
        SimCityGamepadInputWin32 *input = &inputs[index];
        if (!input->initialized) continue;
        if (input->handle && !SDL_GamepadConnected(input->handle))
            close_gamepad(input);
        if (!input->handle) {
            if (input->refresh_countdown > 0u) --input->refresh_countdown;
            if (input->refresh_countdown == 0u) {
                (void)open_player_gamepad(input);
                input->refresh_countdown = GAMEPAD_REFRESH_FRAMES;
            }
        }
    }
}

int simcity_gamepad_win32_connected(const SimCityGamepadInputWin32 *input) {
    return input && input->handle && SDL_GamepadConnected(input->handle);
}

const wchar_t *simcity_gamepad_win32_name(const SimCityGamepadInputWin32 *input) {
    if (!simcity_gamepad_win32_connected(input)) return L"No gamepad connected";
    return input->name[0] ? input->name : L"Connected gamepad";
}

void simcity_gamepad_win32_guid(const SimCityGamepadInputWin32 *input,
                                wchar_t *guid, size_t capacity) {
    if (!guid || capacity == 0u) return;
    guid[0] = L'\0';
    if (input)
        utf8_to_wide(input->preferred_guid, guid, capacity);
}

void simcity_gamepad_win32_default_bindings(
    int bindings[SIMCITY_GAMEPAD_BINDING_COUNT]) {
    if (!bindings) return;
    bindings[0] = SC_GAMEPAD_DPAD_UP;
    bindings[1] = SC_GAMEPAD_DPAD_DOWN;
    bindings[2] = SC_GAMEPAD_DPAD_LEFT;
    bindings[3] = SC_GAMEPAD_DPAD_RIGHT;
    bindings[4] = SC_GAMEPAD_FACE_SOUTH;
    bindings[5] = SC_GAMEPAD_FACE_EAST;
    bindings[6] = SC_GAMEPAD_FACE_WEST;
    bindings[7] = SC_GAMEPAD_FACE_NORTH;
    bindings[8] = SC_GAMEPAD_LEFT_SHOULDER;
    bindings[9] = SC_GAMEPAD_RIGHT_SHOULDER;
    bindings[10] = SC_GAMEPAD_START;
    bindings[11] = SC_GAMEPAD_BACK;
}

const wchar_t *simcity_gamepad_win32_control_name(int control) {
    static const wchar_t *names[] = {
        L"", L"D-pad Up", L"D-pad Down", L"D-pad Left", L"D-pad Right",
        L"Left Stick Up", L"Left Stick Down", L"Left Stick Left",
        L"Left Stick Right", L"South / bottom face button",
        L"East / right face button", L"West / left face button",
        L"North / top face button", L"Left shoulder", L"Right shoulder",
        L"Left trigger", L"Right trigger", L"Start / Menu", L"Back / View",
        L"Left stick button", L"Right stick button"
    };
    if (control < SC_GAMEPAD_DPAD_UP || control > SC_GAMEPAD_CONTROL_LAST)
        return L"Unknown gamepad control";
    return names[control];
}

int simcity_gamepad_win32_capture_control(SimCityGamepadInputWin32 *input) {
    int control;
    if (!input || !input->initialized) return 0;
    SDL_UpdateGamepads();
    if (input->handle && !SDL_GamepadConnected(input->handle)) close_gamepad(input);
    if (!input->handle) (void)open_player_gamepad(input);
    if (!input->handle) return 0;
    for (control = SC_GAMEPAD_DPAD_UP;
         control <= SC_GAMEPAD_CONTROL_LAST; ++control)
        if (control_pressed(input, control,
                            GAMEPAD_DEFAULT_DEADZONE_PERCENT)) return control;
    return 0;
}

static const wchar_t *button_label_name(SDL_GamepadButtonLabel label) {
    switch (label) {
        case SDL_GAMEPAD_BUTTON_LABEL_A: return L"A";
        case SDL_GAMEPAD_BUTTON_LABEL_B: return L"B";
        case SDL_GAMEPAD_BUTTON_LABEL_X: return L"X";
        case SDL_GAMEPAD_BUTTON_LABEL_Y: return L"Y";
        case SDL_GAMEPAD_BUTTON_LABEL_CROSS: return L"Cross";
        case SDL_GAMEPAD_BUTTON_LABEL_CIRCLE: return L"Circle";
        case SDL_GAMEPAD_BUTTON_LABEL_SQUARE: return L"Square";
        case SDL_GAMEPAD_BUTTON_LABEL_TRIANGLE: return L"Triangle";
        default: return L"";
    }
}

void simcity_gamepad_win32_control_display_name(
    const SimCityGamepadInputWin32 *input, int control,
    wchar_t *text, size_t capacity) {
    SDL_GamepadButton button = SDL_GAMEPAD_BUTTON_INVALID;
    const wchar_t *label = L"";
    const wchar_t *base;
    if (!text || capacity == 0u) return;
    base = simcity_gamepad_win32_control_name(control);
    if (input && simcity_gamepad_win32_connected(input)) {
        switch (control) {
            case SC_GAMEPAD_FACE_SOUTH: button = SDL_GAMEPAD_BUTTON_SOUTH; break;
            case SC_GAMEPAD_FACE_EAST: button = SDL_GAMEPAD_BUTTON_EAST; break;
            case SC_GAMEPAD_FACE_WEST: button = SDL_GAMEPAD_BUTTON_WEST; break;
            case SC_GAMEPAD_FACE_NORTH: button = SDL_GAMEPAD_BUTTON_NORTH; break;
            default: break;
        }
        if (button != SDL_GAMEPAD_BUTTON_INVALID)
            label = button_label_name(SDL_GetGamepadButtonLabel(input->handle, button));
    }
    if (label[0])
        (void)_snwprintf(text, capacity, L"%s (%s)", base, label);
    else
        (void)_snwprintf(text, capacity, L"%s", base);
    text[capacity - 1u] = L'\0';
}
