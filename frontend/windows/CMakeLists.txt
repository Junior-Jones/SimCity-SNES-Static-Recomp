include(FetchContent)

set(SIMCITY_GAMEPAD_ADAPTER_DIR
    "${CMAKE_SOURCE_DIR}/third_party/simcity-gamepad")
set(SIMCITY_GAMEPAD_DATABASE
    "${CMAKE_SOURCE_DIR}/third_party/gamecontrollerdb.txt")

set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_INSTALL OFF CACHE BOOL "" FORCE)
FetchContent_Declare(simcity_sdl
    URL "https://github.com/libsdl-org/SDL/archive/refs/tags/release-3.4.10.zip"
    URL_HASH "SHA256=30DCE54890B17544A35E4521274762016AF6ED59C2183B896EF5E6693E97FB6C"
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(simcity_sdl)
FetchContent_GetProperties(simcity_sdl SOURCE_DIR SIMCITY_SDL_SOURCE_DIR)
if(MSVC)
    # SDL's __FILE__ strings use native separators, so give MSVC a matching
    # mapping in addition to the portable mapping configured at the root.
    file(TO_NATIVE_PATH "${CMAKE_BINARY_DIR}" SIMCITY_BUILD_PATH_NATIVE)
    target_compile_options(SDL3-static PRIVATE
        /experimental:deterministic
        "/pathmap:${SIMCITY_BUILD_PATH_NATIVE}=build")
endif()

add_executable(simcity-launcher WIN32
    simcity_launcher_win32.c
    simcity_app_core.c
    launcher_version.rc
    simcity_audio_output_winmm.c
    simcity_frontend_settings_win32.c
    ../common/simcity_input_latch.c
    "${SIMCITY_GAMEPAD_ADAPTER_DIR}/simcity_gamepad_input_win32.c"
)
target_include_directories(simcity-launcher PRIVATE
    "${CMAKE_SOURCE_DIR}/frontend/common"
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_SOURCE_DIR}/static-recomp/include"
    "${SIMCITY_GAMEPAD_ADAPTER_DIR}"
)
target_link_libraries(simcity-launcher PRIVATE
    simcity-static-recomp
    SDL3::SDL3-static
    winmm
    user32
    gdi32
    comdlg32
    comctl32
    shell32
)
target_compile_definitions(simcity-launcher PRIVATE
    UNICODE
    _UNICODE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    _CRT_SECURE_NO_WARNINGS
)
if(MSVC)
    target_compile_options(simcity-launcher PRIVATE /W4 /WX /experimental:deterministic)
else()
    target_compile_options(simcity-launcher PRIVATE -Wall -Wextra -Wpedantic)
endif()
set_target_properties(simcity-launcher PROPERTIES
    OUTPUT_NAME "Launcher"
    RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/release"
)
add_custom_command(TARGET simcity-launcher POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E make_directory
        "$<TARGET_FILE_DIR:simcity-launcher>/Saves"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${CMAKE_SOURCE_DIR}/Saves/Readme.txt"
        "$<TARGET_FILE_DIR:simcity-launcher>/Saves/Readme.txt"
    COMMAND "${CMAKE_COMMAND}" -E make_directory
        "$<TARGET_FILE_DIR:simcity-launcher>/Screenshots"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${CMAKE_SOURCE_DIR}/Screenshots/Readme.txt"
        "$<TARGET_FILE_DIR:simcity-launcher>/Screenshots/Readme.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${SIMCITY_GAMEPAD_DATABASE}"
        "$<TARGET_FILE_DIR:simcity-launcher>/gamecontrollerdb.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${SIMCITY_SDL_SOURCE_DIR}/LICENSE.txt"
        "$<TARGET_FILE_DIR:simcity-launcher>/SDL-LICENSE.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${CMAKE_SOURCE_DIR}/third_party/SDL_GameControllerDB-LICENSE.txt"
        "$<TARGET_FILE_DIR:simcity-launcher>/SDL_GameControllerDB-LICENSE.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different
        "${CMAKE_SOURCE_DIR}/THIRD-PARTY-NOTICES.txt"
        "$<TARGET_FILE_DIR:simcity-launcher>/THIRD-PARTY-NOTICES.txt"
    VERBATIM
)
install(TARGETS simcity-launcher RUNTIME DESTINATION . COMPONENT Runtime)
install(FILES "${SIMCITY_GAMEPAD_DATABASE}"
    DESTINATION . RENAME gamecontrollerdb.txt COMPONENT Runtime)
install(FILES "${SIMCITY_SDL_SOURCE_DIR}/LICENSE.txt"
    DESTINATION . RENAME SDL-LICENSE.txt COMPONENT Runtime)
install(FILES "${CMAKE_SOURCE_DIR}/third_party/SDL_GameControllerDB-LICENSE.txt"
    DESTINATION . COMPONENT Runtime)
install(FILES "${CMAKE_SOURCE_DIR}/THIRD-PARTY-NOTICES.txt"
    DESTINATION . COMPONENT Runtime)
install(FILES "${CMAKE_SOURCE_DIR}/Saves/Readme.txt"
    DESTINATION Saves COMPONENT Runtime)
install(FILES "${CMAKE_SOURCE_DIR}/Screenshots/Readme.txt"
    DESTINATION Screenshots COMPONENT Runtime)
