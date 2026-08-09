cmake_minimum_required(VERSION 3.20)
if(POLICY CMP0091)
    cmake_policy(SET CMP0091 NEW)
endif()
project(SimCitySNESStaticRecomp LANGUAGES C CXX)

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

if(WIN32)
    add_subdirectory(frontend/windows)
else()
    message(STATUS "Windows frontend omitted on this host; building the portable Full Static core.")
endif()

install(TARGETS simcity-static-recomp ARCHIVE DESTINATION lib
    COMPONENT Development)
install(FILES static-recomp/include/simcity_static_recomp.h DESTINATION include
    COMPONENT Development)
install(FILES README-FIRST.txt VERSION.txt ROM-REQUIREMENTS.txt DESTINATION .
    COMPONENT Runtime)
install(FILES Rom/readme.txt DESTINATION Rom
    COMPONENT Runtime)
