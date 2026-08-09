# Use non-system dependency files on GCC/Clang. The inherited 5.4 MB
# generated dispatcher otherwise spends most of a clean build enumerating
# irrelevant system-header dependencies. This changes only dependency
# metadata, not generated code or semantics.
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    set(CMAKE_DEPFILE_FLAGS_C "-MMD -MT <DEP_TARGET> -MF <DEP_FILE>")
endif()


file(GLOB SIMCITY_V11_SHARD_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/v11-shards/*.c")
file(GLOB SIMCITY_V34_SHARD_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/v34-shards/*.c")
file(GLOB SIMCITY_V35_SHARD_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/v35-shards/*.c")
list(LENGTH SIMCITY_V11_SHARD_SOURCES SIMCITY_V11_SHARD_COUNT)
list(LENGTH SIMCITY_V34_SHARD_SOURCES SIMCITY_V34_SHARD_COUNT)
list(LENGTH SIMCITY_V35_SHARD_SOURCES SIMCITY_V35_SHARD_COUNT)
if(NOT SIMCITY_V11_SHARD_COUNT EQUAL 18 OR
   NOT SIMCITY_V34_SHARD_COUNT EQUAL 64 OR
   NOT SIMCITY_V35_SHARD_COUNT EQUAL 98)
    message(FATAL_ERROR
        "Generated dispatch shard count mismatch: "
        "v11=${SIMCITY_V11_SHARD_COUNT}, "
        "v34=${SIMCITY_V34_SHARD_COUNT}, "
        "v35=${SIMCITY_V35_SHARD_COUNT}")
endif()

set(SIMCITY_STATIC_RECOMP_SOURCES
    src/simcity_static_recomp.c
    src/sc_v11_support.c
    src/sc_machine.c
    src/sc_v11_scheduler.c
    src/sc_v11_bus.c
    src/sc_v11_cpu.c
    src/sc_v11_smp.c
    src/sc_audio_transport.c
    src/sc_v28_video.c
    generated/sc_v11_audio_epoch_manifest.c
    generated/sc_audio_scpu_access_manifest.c
    generated/audio/epoch-topology/sc_audio_epoch_registry.c
    generated/sc_v11_bootstrap_dispatch.c
    generated/sc_v11_cpu_dispatch_index.c
    ${SIMCITY_V11_SHARD_SOURCES}
    generated/sc_v23_static_dispatch.c
    generated/sc_v24_static_dispatch.c
    generated/sc_v25_static_dispatch.c
    generated/sc_v26_static_dispatch.c
    generated/sc_v34_static_dispatch_index.c
    ${SIMCITY_V34_SHARD_SOURCES}
    generated/sc_v35_town_route_index.c
    ${SIMCITY_V35_SHARD_SOURCES}
    static-audio/snes9x-bapu-aot/smp/smp.cpp
    static-audio/snes9x-bapu-aot/dsp/sdsp.cpp
    static-audio/snes9x-bapu-aot/sc_static_apu.cpp
 )

# Version 34 is compiled from the generated sharded source. The retired
# monolithic prebuilt object is intentionally not accepted: it used a linear
# O0 switch and made normal ROM execution appear to hang.

add_library(simcity-static-recomp STATIC ${SIMCITY_STATIC_RECOMP_SOURCES})

target_include_directories(simcity-static-recomp
    PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/internal/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/generated"
        "${CMAKE_CURRENT_SOURCE_DIR}/static-audio/snes9x-bapu-aot"
        "${CMAKE_CURRENT_SOURCE_DIR}/static-audio/snes9x-bapu-aot/smp"
        "${CMAKE_CURRENT_SOURCE_DIR}/static-audio/snes9x-bapu-aot/dsp"
)

if(MSVC)
    target_compile_options(simcity-static-recomp PRIVATE /W4)
    target_compile_definitions(simcity-static-recomp PRIVATE _CRT_SECURE_NO_WARNINGS)
    set_source_files_properties(
        generated/sc_v11_audio_epoch_manifest.c
        generated/sc_audio_scpu_access_manifest.c
        generated/audio/epoch-topology/sc_audio_epoch_registry.c
        generated/sc_v11_bootstrap_dispatch.c
        generated/sc_v11_cpu_dispatch_index.c
    ${SIMCITY_V11_SHARD_SOURCES}
        generated/sc_v23_static_dispatch.c
        generated/sc_v24_static_dispatch.c
        generated/sc_v25_static_dispatch.c
        generated/sc_v26_static_dispatch.c
        generated/sc_v34_static_dispatch_index.c
    ${SIMCITY_V34_SHARD_SOURCES}
        generated/sc_v35_town_route_index.c
    ${SIMCITY_V35_SHARD_SOURCES}
        PROPERTIES COMPILE_OPTIONS "/W0"
    )
else()
    # Generated dispatcher scale makes global warning analysis prohibitively expensive.
    # Handwritten frontends and tools retain their own warning flags.
    set_source_files_properties(
        generated/sc_v11_audio_epoch_manifest.c
        generated/sc_audio_scpu_access_manifest.c
        generated/audio/epoch-topology/sc_audio_epoch_registry.c
        generated/sc_v11_bootstrap_dispatch.c
        generated/sc_v11_cpu_dispatch_index.c
    ${SIMCITY_V11_SHARD_SOURCES}
        generated/sc_v23_static_dispatch.c
        generated/sc_v24_static_dispatch.c
        generated/sc_v25_static_dispatch.c
        generated/sc_v26_static_dispatch.c
        generated/sc_v34_static_dispatch_index.c
    ${SIMCITY_V34_SHARD_SOURCES}
        generated/sc_v35_town_route_index.c
    ${SIMCITY_V35_SHARD_SOURCES}
        PROPERTIES COMPILE_OPTIONS "-w"
    )
endif()

target_compile_definitions(simcity-static-recomp PRIVATE SC_SMP_AOT)

set_source_files_properties(
    static-audio/snes9x-bapu-aot/smp/smp.cpp
    static-audio/snes9x-bapu-aot/dsp/sdsp.cpp
    static-audio/snes9x-bapu-aot/sc_static_apu.cpp
    PROPERTIES COMPILE_DEFINITIONS "SC_STATIC_SDSP_PRIMITIVES;SCStaticSPC_DSP_CUSTOM_RUN=1"
)

set_source_files_properties(
    static-audio/snes9x-bapu-aot/smp/smp.cpp
    static-audio/snes9x-bapu-aot/dsp/sdsp.cpp
    PROPERTIES COMPILE_OPTIONS "$<$<CXX_COMPILER_ID:MSVC>:/W0>$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-w>"
)

set_target_properties(simcity-static-recomp PROPERTIES
    OUTPUT_NAME "simcity-static-recomp"
)

# The large exact-PC dispatchers are split into independently compiled 1 KiB
# address shards. O1 produces bounded lookup code while keeping clean builds
# practical on both Clang/GCC and MSVC.
if(MSVC)
    set_source_files_properties(
        generated/sc_v11_cpu_dispatch_index.c
        ${SIMCITY_V11_SHARD_SOURCES}
        generated/sc_v34_static_dispatch_index.c
        ${SIMCITY_V34_SHARD_SOURCES}
        generated/sc_v35_town_route_index.c
        ${SIMCITY_V35_SHARD_SOURCES}
        PROPERTIES COMPILE_OPTIONS "/W0;/O1"
    )
else()
    set_source_files_properties(
        generated/sc_v11_cpu_dispatch_index.c
        ${SIMCITY_V11_SHARD_SOURCES}
        generated/sc_v34_static_dispatch_index.c
        ${SIMCITY_V34_SHARD_SOURCES}
        generated/sc_v35_town_route_index.c
        ${SIMCITY_V35_SHARD_SOURCES}
        PROPERTIES COMPILE_OPTIONS "-w;-O1"
    )
endif()
