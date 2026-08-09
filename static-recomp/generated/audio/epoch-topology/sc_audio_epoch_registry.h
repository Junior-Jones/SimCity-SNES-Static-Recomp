#ifndef SC_AUDIO_EPOCH_REGISTRY_H
#define SC_AUDIO_EPOCH_REGISTRY_H
#include <stdint.h>
#define SC_AUDIO_EPOCH_IPL 0u
#define SC_AUDIO_EPOCH_SIMCITY_INITIAL 1u
#define SC_AUDIO_EPOCH_REGISTRY_COUNT 1u
#define SC_AUDIO_EPOCH_INITIAL_ENTRY 0x0800u
#define SC_AUDIO_EPOCH_REGISTRY_SHA256 "7bebaf29ce818dd448dc8b2de962a83c8961155b86b5724a0948e2f2ef783b96"
typedef struct SCAudioEpochDescriptor {
    uint8_t id;
    uint16_t entry_pc;
    const char *name;
    const char *aram_sha256;
    const char *code_bitmap_sha256;
    const char *ownership_sha256;
} SCAudioEpochDescriptor;
const SCAudioEpochDescriptor *sc_audio_epoch_descriptor(uint8_t id);
int sc_audio_epoch_is_code_byte(uint8_t id,uint16_t address);
#endif
