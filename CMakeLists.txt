cmake_minimum_required(VERSION 3.20)
if(POLICY CMP0091)
    cmake_policy(SET CMP0091 NEW)
endif()
project(SimCitySNESStaticRecomp VERSION 2.0.0 LANGUAGES C CXX)

include(CTest)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
    # Keep source/build-machine directory names out of diagnostics embedded in
    # portable release binaries. These mappings do not affect runtime paths.
    add_compile_options(
        "/experimental:deterministic"
        "/pathmap:${CMAKE_SOURCE_DIR}=source"
        "/pathmap:${CMAKE_BINARY_DIR}=build"
    )
    # Keep release binaries byte-for-byte stable when the source and MSVC
    # toolchain are unchanged. Antivirus reputation is hash-based, so changing
    # the PE timestamp on every clean build needlessly creates a new unknown
    # executable even when no code changed.
    add_compile_options($<$<CONFIG:Release>:/Brepro>)
    add_link_options($<$<CONFIG:Release>:/Brepro>)
endif()

add_subdirectory(static-recomp)

if(BUILD_TESTING)
    add_executable(simcity-stock-controller-tape-test tools/widescreen/test_stock_controller_tape.c)
    add_test(NAME simcity-stock-controller-tape COMMAND simcity-stock-controller-tape-test)
    add_executable(simcity-presentation-clock-test
        frontend/windows/test_simcity_presentation_clock.c)
    target_link_libraries(simcity-presentation-clock-test PRIVATE simcity-static-recomp)
    add_test(NAME simcity-60hz-before-headed COMMAND simcity-presentation-clock-test)
    if(WIN32)
        target_link_libraries(simcity-presentation-clock-test PRIVATE user32)
    endif()
    if(WIN32)
        add_executable(simcity-win32-frame-blit-test frontend/windows/test_simcity_win32_frame_blit.c)
        target_include_directories(simcity-win32-frame-blit-test PRIVATE static-recomp/include)
        target_link_libraries(simcity-win32-frame-blit-test PRIVATE gdi32 user32)
        add_test(NAME simcity-win32-frame-blit COMMAND simcity-win32-frame-blit-test)
    endif()
endif()

add_executable(simcity-widescreen-probe
    tools/widescreen/widescreen_probe.c)
set(SIMCITY_PROBE_OUTPUT_DIRECTORY "" CACHE PATH
    "Optional output directory for a separate headless diagnostic build")
if(SIMCITY_PROBE_OUTPUT_DIRECTORY)
    set_target_properties(simcity-widescreen-probe PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${SIMCITY_PROBE_OUTPUT_DIRECTORY}")
endif()
if(WIN32)
    target_sources(simcity-widescreen-probe PRIVATE frontend/windows/simcity_prepared_video.c)
    target_link_libraries(simcity-widescreen-probe PRIVATE gdi32 user32 avrt)
endif()
if(MSVC)
    # Only the headless diagnostic executable gets a map for local CPU profiling.
    target_link_options(simcity-widescreen-probe PRIVATE
        "/MAP:$<TARGET_FILE_DIR:simcity-widescreen-probe>/simcity-widescreen-probe.map")
endif()
target_link_libraries(simcity-widescreen-probe PRIVATE simcity-static-recomp)
target_include_directories(simcity-widescreen-probe PRIVATE
    "${CMAKE_SOURCE_DIR}/static-recomp/include"
    "${CMAKE_SOURCE_DIR}/frontend/windows")
target_compile_definitions(simcity-widescreen-probe PRIVATE
    _CRT_SECURE_NO_WARNINGS)
set(SIMCITY_STOCK_WORLD_FIXTURE_DIR "" CACHE PATH
    "Directory containing the stock Freeland headless gameplay snapshots")
if(BUILD_TESTING AND SIMCITY_TEST_ROM)
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/world-map-menu-evidence")
    add_test(NAME simcity-world-map-menu
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" world-map-menu
            "${CMAKE_BINARY_DIR}/world-map-menu-evidence")
    add_test(NAME simcity-stock-world-new-city
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-new-city
            "${CMAKE_BINARY_DIR}/world-map-menu-evidence")
    add_test(NAME simcity-stock-world-menu-isolation
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-menu-branch-audit
            "${CMAKE_BINARY_DIR}/world-map-menu-evidence")
    set_tests_properties(simcity-stock-world-menu-isolation PROPERTIES TIMEOUT 90)
    add_test(NAME simcity-stock-world-template-catalog
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-catalog
            "${CMAKE_BINARY_DIR}/world-map-menu-evidence")
    set_tests_properties(simcity-stock-world-template-catalog PROPERTIES TIMEOUT 60)
    set(_simcity_catalog_district_dir "${CMAKE_BINARY_DIR}/world-map-catalog-district-evidence")
    file(MAKE_DIRECTORY "${_simcity_catalog_district_dir}")
    add_test(NAME simcity-stock-world-catalog-boot-matrix
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-catalog-boot-matrix
            "${_simcity_catalog_district_dir}")
    set_tests_properties(simcity-stock-world-catalog-boot-matrix PROPERTIES
        TIMEOUT 180 FIXTURES_SETUP catalog-started-cities LABELS world-map-catalog)
    foreach(_catalog_id RANGE 1 9)
        add_test(NAME simcity-stock-world-catalog-district-${_catalog_id}
            COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-catalog-district-${_catalog_id}
                "${_simcity_catalog_district_dir}")
        set_tests_properties(simcity-stock-world-catalog-district-${_catalog_id} PROPERTIES
            TIMEOUT 90 FIXTURES_REQUIRED catalog-started-cities LABELS world-map-catalog)
    endforeach()
    unset(_simcity_catalog_district_dir)
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    add_test(NAME simcity-stock-world-template-all-land
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-all-land
            "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    set_tests_properties(simcity-stock-world-template-all-land PROPERTIES
        TIMEOUT 60 FIXTURES_SETUP inland-plain-menu-city)
    add_test(NAME simcity-stock-world-inland-plain-district
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-inland-plain-district
            "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    set_tests_properties(simcity-stock-world-inland-plain-district PROPERTIES
        TIMEOUT 90 FIXTURES_REQUIRED inland-plain-menu-city FIXTURES_SETUP inland-plain-built-city)
    add_test(NAME simcity-stock-world-inland-battery-save
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-inland-battery-save1
            "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    set_tests_properties(simcity-stock-world-inland-battery-save PROPERTIES
        TIMEOUT 90 FIXTURES_REQUIRED inland-plain-built-city FIXTURES_SETUP inland-plain-battery-file)
    add_test(NAME simcity-stock-world-inland-battery-cold
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-inland-battery-cold1
            "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    set_tests_properties(simcity-stock-world-inland-battery-cold PROPERTIES
        TIMEOUT 90 FIXTURES_REQUIRED inland-plain-battery-file)
    add_test(NAME simcity-stock-world-catalog-saved-menu
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-catalog-saved-menu
            "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    set_tests_properties(simcity-stock-world-catalog-saved-menu PROPERTIES
        TIMEOUT 60 FIXTURES_REQUIRED inland-plain-battery-file)
    add_test(NAME simcity-stock-world-catalog-normal-city-parity
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-catalog-native-passthrough
            "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    set_tests_properties(simcity-stock-world-catalog-normal-city-parity PROPERTIES
        TIMEOUT 60 FIXTURES_REQUIRED inland-plain-menu-city)
    add_test(NAME simcity-stock-world-catalog-menu-cues
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-catalog-menu-cues
            "${CMAKE_BINARY_DIR}/world-map-all-land-evidence")
    set_tests_properties(simcity-stock-world-catalog-menu-cues PROPERTIES
        TIMEOUT 60 FIXTURES_REQUIRED inland-plain-menu-city)
    add_test(NAME simcity-stock-world-template-topology
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-topology
            "${CMAKE_BINARY_DIR}/world-map-menu-evidence")
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/world-map-twin-shores-evidence")
    add_test(NAME simcity-stock-world-twin-shores-bridge
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-twin-shores-bridge
            "${CMAKE_BINARY_DIR}/world-map-twin-shores-evidence")
    set_tests_properties(simcity-stock-world-twin-shores-bridge PROPERTIES TIMEOUT 60)
    add_test(NAME simcity-stock-world-template-catalog-input
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-catalog-input
            "${CMAKE_BINARY_DIR}/world-map-menu-evidence")
    set_tests_properties(simcity-stock-world-template-catalog-input PROPERTIES TIMEOUT 60)
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/production-menu-flicker")
    add_test(NAME simcity-stock-world-catalog-flicker
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-template-catalog-flicker
            "${CMAKE_BINARY_DIR}/production-menu-flicker")
    set_tests_properties(simcity-stock-world-catalog-flicker PROPERTIES TIMEOUT 120)
    add_test(NAME simcity-stock-world-original-menu-flicker
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-original-menu-flicker
            "${CMAKE_BINARY_DIR}/production-menu-flicker")
    add_test(NAME simcity-stock-world-original-menu-flicker-wide
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-original-menu-flicker-wide
            "${CMAKE_BINARY_DIR}/production-menu-flicker")
    set_tests_properties(simcity-stock-world-original-menu-flicker simcity-stock-world-original-menu-flicker-wide
        PROPERTIES TIMEOUT 240 LABELS world-map-menu)
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/world-map-archipelago-evidence")
    add_test(NAME simcity-stock-world-archipelago-start
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-archipelago-start
            "${CMAKE_BINARY_DIR}/world-map-archipelago-evidence")
    set_tests_properties(simcity-stock-world-archipelago-start PROPERTIES
        TIMEOUT 90 FIXTURES_SETUP archipelago-start-district)
    add_test(NAME simcity-stock-world-archipelago-bridge
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-archipelago-bridge
            "${CMAKE_BINARY_DIR}/world-map-archipelago-evidence")
    set_tests_properties(simcity-stock-world-archipelago-bridge PROPERTIES
        TIMEOUT 90 FIXTURES_REQUIRED archipelago-start-district FIXTURES_SETUP archipelago-road-bridge)
    add_test(NAME simcity-stock-world-archipelago-rail-port
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-archipelago-rail-port
            "${CMAKE_BINARY_DIR}/world-map-archipelago-evidence")
    set_tests_properties(simcity-stock-world-archipelago-rail-port PROPERTIES
        TIMEOUT 120 FIXTURES_REQUIRED archipelago-road-bridge)
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/stock-world-tour-evidence")
    add_test(NAME simcity-stock-world-tour
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-tour
            "${CMAKE_BINARY_DIR}/stock-world-tour-evidence")
    set_tests_properties(simcity-stock-world-tour PROPERTIES TIMEOUT 180)
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    add_test(NAME simcity-stock-world-network
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-network
            "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    set_tests_properties(simcity-stock-world-network PROPERTIES
        TIMEOUT 240 FIXTURES_SETUP stock_world_road_city)
    add_test(NAME simcity-stock-world-utilities-tour
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-utilities-tour
            "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    set_tests_properties(simcity-stock-world-utilities-tour PROPERTIES
        TIMEOUT 300 FIXTURES_REQUIRED stock_world_road_city
        FIXTURES_SETUP stock_world_utility_city)
    add_test(NAME simcity-stock-world-buildings
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-buildings
            "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    set_tests_properties(simcity-stock-world-buildings PROPERTIES
        TIMEOUT 240 FIXTURES_REQUIRED stock_world_utility_city
        FIXTURES_SETUP stock_world_built_city)
    add_test(NAME simcity-stock-world-age-built
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-age-built
            "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    set_tests_properties(simcity-stock-world-age-built PROPERTIES
        TIMEOUT 240 FIXTURES_REQUIRED stock_world_built_city
        FIXTURES_SETUP stock_world_aged_city)
    add_test(NAME simcity-stock-world-mixed-district
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-mixed-district
            "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    set_tests_properties(simcity-stock-world-mixed-district PROPERTIES
        TIMEOUT 300 FIXTURES_REQUIRED stock_world_aged_city
        FIXTURES_SETUP stock_world_mixed_city)
    add_test(NAME simcity-stock-world-mixed-development
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-mixed-development
            "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    set_tests_properties(simcity-stock-world-mixed-development PROPERTIES
        TIMEOUT 420 FIXTURES_REQUIRED stock_world_mixed_city
        FIXTURES_SETUP stock_world_developed_city)
    add_test(NAME simcity-stock-world-developed-render-parity
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-mixed-render-parity
            "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
    set_tests_properties(simcity-stock-world-developed-render-parity PROPERTIES
        TIMEOUT 120 FIXTURES_REQUIRED stock_world_developed_city)
    if(WIN32)
        add_test(NAME simcity-stock-video-pixel-parity
            COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-video-pixel-parity
                "${CMAKE_BINARY_DIR}/stock-world-network-evidence")
        set_tests_properties(simcity-stock-video-pixel-parity PROPERTIES
            TIMEOUT 120 FIXTURES_REQUIRED stock_world_built_city)
    endif()
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/stock-world-ram-evidence")
    add_test(NAME simcity-stock-world-ram-navigation
        COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" stock-world-ram-navigation
            "${CMAKE_BINARY_DIR}/stock-world-ram-evidence")
    set_tests_properties(simcity-stock-world-ram-navigation PROPERTIES TIMEOUT 120)
    add_test(NAME simcity-world-map-sandbox
        COMMAND "${CMAKE_COMMAND}"
            "-DPROBE=$<TARGET_FILE:simcity-widescreen-probe>"
            "-DROM=${SIMCITY_TEST_ROM}"
            "-DEVIDENCE=${CMAKE_BINARY_DIR}/world-map-evidence"
            -P "${CMAKE_CURRENT_SOURCE_DIR}/tools/widescreen/verify_world_map.cmake")
    if(SIMCITY_STOCK_WORLD_FIXTURE_DIR)
        set(stock_world_evidence "${CMAKE_BINARY_DIR}/stock-world-evidence")
        file(MAKE_DIRECTORY "${stock_world_evidence}")
        foreach(snapshot IN ITEMS four-plants-roads four-plants-roads-zones)
            configure_file("${SIMCITY_STOCK_WORLD_FIXTURE_DIR}/${snapshot}.scsnap"
                           "${stock_world_evidence}/${snapshot}.scsnap" COPYONLY)
        endforeach()
        foreach(check IN ITEMS stock-world-camera stock-world-road-seam stock-world-census
                               stock-world-power stock-world-power-gap stock-world-session
                               stock-world-traffic stock-world-growth stock-world-density
                               stock-world-environment stock-world-services stock-world-performance
                               stock-commercial-matched)
            add_test(NAME simcity-${check}
                COMMAND simcity-widescreen-probe "${SIMCITY_TEST_ROM}" "${check}"
                    "${stock_world_evidence}")
            set_tests_properties(simcity-${check} PROPERTIES TIMEOUT 120)
        endforeach()
    endif()
endif()
if(MSVC)
    target_compile_options(simcity-widescreen-probe PRIVATE /W4 /WX)
else()
    target_compile_options(simcity-widescreen-probe PRIVATE
        -Wall -Wextra -Wpedantic -Werror)
endif()

if(WIN32)
    add_subdirectory(frontend/windows)
else()
    message(STATUS "Windows frontend omitted on this host; building the portable Full Static core.")
endif()

install(TARGETS simcity-static-recomp ARCHIVE DESTINATION lib
    COMPONENT Development)
install(FILES static-recomp/include/simcity_static_recomp.h DESTINATION include
    COMPONENT Development)
install(FILES README.txt VERSION.txt DESTINATION . COMPONENT Runtime)
install(FILES Rom/readme.txt DESTINATION Rom
    COMPONENT Runtime)
