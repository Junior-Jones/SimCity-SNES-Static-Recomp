#if !defined(_WIN32)
#error This test requires Windows.
#endif

#include <windows.h>

#include <stdio.h>
#include <string.h>

#include "simcity_frontend_settings_win32.h"
#include "simcity_static_recomp.h"

#define CHECK(expression) do { \
    if (!(expression)) { \
        fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #expression); \
        return 1; \
    } \
} while (0)

int main(void)
{
    static const UINT accessible_keys[SIMCITY_WIN_BINDING_COUNT] = {
        VK_UP, VK_DOWN, VK_LEFT, VK_RIGHT,
        'D', 'F', 'A', 'S', 'E', 'R', 'G', 'T'
    };
    static const uint16_t masks[SIMCITY_WIN_BINDING_COUNT] = {
        SIMCITY_INPUT_UP, SIMCITY_INPUT_DOWN, SIMCITY_INPUT_LEFT,
        SIMCITY_INPUT_RIGHT, SIMCITY_INPUT_B, SIMCITY_INPUT_A,
        SIMCITY_INPUT_Y, SIMCITY_INPUT_X, SIMCITY_INPUT_L,
        SIMCITY_INPUT_R, SIMCITY_INPUT_START, SIMCITY_INPUT_SELECT
    };
    static const int gamepad[SIMCITY_WIN_BINDING_COUNT] = {
        SIMCITY_GAMEPAD_DPAD_UP, SIMCITY_GAMEPAD_DPAD_DOWN,
        SIMCITY_GAMEPAD_DPAD_LEFT, SIMCITY_GAMEPAD_DPAD_RIGHT,
        SIMCITY_GAMEPAD_FACE_SOUTH, SIMCITY_GAMEPAD_FACE_EAST,
        SIMCITY_GAMEPAD_FACE_WEST, SIMCITY_GAMEPAD_FACE_NORTH,
        SIMCITY_GAMEPAD_LEFT_SHOULDER, SIMCITY_GAMEPAD_RIGHT_SHOULDER,
        SIMCITY_GAMEPAD_START, SIMCITY_GAMEPAD_BACK
    };
    SimCityFrontendSettingsWin32 settings;
    SimCityFrontendSettingsWin32 loaded;
    wchar_t path[MAX_PATH];
    wchar_t reserved_value[16];
    static const UINT reserved_shortcuts[] = { VK_F2, VK_F3, '1', '2' };
    int index;

    CHECK(GetFullPathNameW(L"simcity-input-settings-contract.ini", MAX_PATH,
                           path, NULL) > 0u);
    (void)DeleteFileW(path);

    simcity_frontend_settings_win32_defaults(&settings);
    CHECK(settings.welcome_shown == 0);
    CHECK(settings.show_fps_counter == 0);
    CHECK(settings.ntsc_frame_lock == 1);
    CHECK(settings.widescreen == 1);
    for (index = 0; index < SIMCITY_WIN_BINDING_COUNT; ++index) {
        CHECK(settings.bindings[index] == accessible_keys[index]);
        CHECK(settings.gamepad_bindings[index] == gamepad[index]);
        CHECK(simcity_frontend_settings_win32_input(
                  &settings, settings.bindings[index]) == masks[index]);
    }
    CHECK(settings.bindings[10] == 'G');
    CHECK(settings.bindings[11] == 'T');

    memset(&loaded, 0xff, sizeof(loaded));
    simcity_frontend_settings_win32_load(&loaded, path);
    CHECK(loaded.welcome_shown == 0);

    for (index = 0;
         index < (int)(sizeof(reserved_shortcuts) /
                       sizeof(reserved_shortcuts[0]));
         ++index) {
        CHECK(_snwprintf_s(reserved_value,
                           sizeof(reserved_value) /
                           sizeof(reserved_value[0]),
                           _TRUNCATE, L"%u",
                           reserved_shortcuts[index]) > 0);
        CHECK(WritePrivateProfileStringW(
            L"Input", L"Action0", reserved_value, path));
        simcity_frontend_settings_win32_load(&loaded, path);
        CHECK(loaded.bindings[0] == VK_UP);
    }
    CHECK(WritePrivateProfileStringW(L"Input", L"Action0", L"38", path));

    settings.input_source = SIMCITY_INPUT_SOURCE_GAMEPAD;
    settings.integer_scale = 3;
    settings.pause_on_focus_loss = 1;
    settings.auto_run_on_load = 1;
    settings.fullscreen_on_play = 1;
    settings.welcome_shown = 1;
    settings.show_fps_counter = 1;
    settings.ntsc_frame_lock = 0;
    settings.widescreen = 0;
    settings.snapshot_slot = 4;
    CHECK(simcity_frontend_settings_win32_save(&settings, path));
    memset(&loaded, 0, sizeof(loaded));
    simcity_frontend_settings_win32_load(&loaded, path);
    CHECK(loaded.input_source == SIMCITY_INPUT_SOURCE_GAMEPAD);
    CHECK(loaded.integer_scale == 3);
    CHECK(loaded.pause_on_focus_loss == 1);
    CHECK(loaded.auto_run_on_load == 1);
    CHECK(loaded.fullscreen_on_play == 1);
    CHECK(loaded.input_source_saved == 1);
    CHECK(loaded.welcome_shown == 1);
    CHECK(loaded.show_fps_counter == 1);
    CHECK(loaded.ntsc_frame_lock == 0);
    CHECK(loaded.widescreen == 0);
    CHECK(loaded.snapshot_slot == 4);
    for (index = 0; index < SIMCITY_WIN_BINDING_COUNT; ++index) {
        CHECK(loaded.bindings[index] == accessible_keys[index]);
        CHECK(loaded.gamepad_bindings[index] == gamepad[index]);
        CHECK(simcity_frontend_settings_win32_input(
                  &loaded, loaded.bindings[index]) == masks[index]);
    }

    CHECK(WritePrivateProfileStringW(L"Input", L"Action10", L"84", path));
    CHECK(WritePrivateProfileStringW(L"Input", L"Action11", L"71", path));
    simcity_frontend_settings_win32_load(&loaded, path);
    CHECK(loaded.bindings[10] == 'T');
    CHECK(loaded.bindings[11] == 'G');
    CHECK(simcity_frontend_settings_win32_input(&loaded, 'T') ==
          SIMCITY_INPUT_START);
    CHECK(simcity_frontend_settings_win32_input(&loaded, 'G') ==
          SIMCITY_INPUT_SELECT);

    CHECK(WritePrivateProfileStringW(L"Input", L"Action11", L"84", path));
    simcity_frontend_settings_win32_load(&loaded, path);
    CHECK(loaded.bindings[10] == 'G');
    CHECK(loaded.bindings[11] == 'T');
    CHECK(simcity_frontend_settings_win32_input(&loaded, 'G') ==
          SIMCITY_INPUT_START);
    CHECK(simcity_frontend_settings_win32_input(&loaded, 'T') ==
          SIMCITY_INPUT_SELECT);

    CHECK(DeleteFileW(path));
    puts("PASS keyboard/gamepad action order, settings round-trip, and invalid-binding recovery");
    return 0;
}
