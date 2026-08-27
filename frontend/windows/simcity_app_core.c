#include "simcity_app_core.h"

#include <stdio.h>
#include <string.h>

static uint64_t fnv1a64(const void *data, size_t size) {
    const unsigned char *bytes = (const unsigned char *)data;
    uint64_t value = UINT64_C(1469598103934665603);
    size_t index;
    for (index = 0u; index < size; ++index) {
        value ^= bytes[index];
        value *= UINT64_C(1099511628211);
    }
    return value;
}

int simcity_recomp_write_diagnostic_log(
    const SimCityRecomp *instance, const char *path,
    const char *screenshot_path, char *error, size_t error_capacity) {
    SimCityRecompAudioStaticStatus audio;
    SimCityRecompAudioTransportStatus transport;
    const uint32_t *pixels;
    FILE *file;
    int audio_available;
    int transport_available;
    if (error && error_capacity) error[0] = '\0';
    if (!instance || !path || !path[0]) {
        if (error && error_capacity)
            (void)snprintf(error, error_capacity,
                           "A loaded static core and diagnostic path are required.");
        return 0;
    }
    memset(&audio, 0, sizeof(audio));
    memset(&transport, 0, sizeof(transport));
    audio_available = simcity_recomp_audio_static_status(instance, &audio);
    transport_available = simcity_recomp_audio_transport_status(instance,
                                                                 &transport);
    pixels = simcity_recomp_frame_bgra(instance);
    file = fopen(path, "wb");
    if (!file) {
        if (error && error_capacity)
            (void)snprintf(error, error_capacity,
                           "The screenshot diagnostic log could not be opened.");
        return 0;
    }
    (void)fprintf(file,
        "SimCity Static Recomp 1.2.0 - Screenshot Static-Core Log\r\n"
        "format=simcity-screenshot-static-log-v1\r\n"
        "screenshot=%s\r\n"
        "authority=closed-static-PBR-PC-E-M-X\r\n"
        "runtime_decoder=0\r\n"
        "runtime_interpreter=0\r\n"
        "runtime_fallback=0\r\n"
        "frame=%u\r\n"
        "instructions=%llu\r\n"
        "framebuffer_fnv1a64=%016llX\r\n"
        "failed=%d\r\n"
        "last_error=%s\r\n"
        "audio_status_available=%d\r\n"
        "audio_epoch=%u\r\n"
        "audio_smp_pc=%04X\r\n"
        "audio_compiled_instructions=%u\r\n"
        "audio_observed_instructions=%u\r\n"
        "audio_validated_instructions=%llu\r\n"
        "audio_route_failed=%u\r\n"
        "transport_status_available=%d\r\n"
        "transport_upload_complete=%u\r\n"
        "transport_upload_verified=%u\r\n"
        "transport_unmanifested_accesses=%u\r\n",
        screenshot_path ? screenshot_path : "",
        simcity_recomp_current_frame(instance),
        (unsigned long long)simcity_recomp_instruction_count(instance),
        (unsigned long long)(pixels ? fnv1a64(
            pixels, SIMCITY_RECOMP_FRAME_PIXELS * sizeof(*pixels)) : 0u),
        simcity_recomp_failed(instance),
        simcity_recomp_last_error(instance),
        audio_available, (unsigned)audio.current_epoch,
        (unsigned)audio.current_smp_pc,
        audio.compiled_instruction_count,
        audio.observed_instruction_count,
        (unsigned long long)audio.validated_instructions,
        (unsigned)audio.route_failed,
        transport_available, (unsigned)transport.upload_complete,
        (unsigned)transport.upload_verified,
        transport.unmanifested_scpu_apu_accesses);
    if (fclose(file) != 0) {
        if (error && error_capacity)
            (void)snprintf(error, error_capacity,
                           "The screenshot diagnostic log could not be finalized.");
        return 0;
    }
    return 1;
}
