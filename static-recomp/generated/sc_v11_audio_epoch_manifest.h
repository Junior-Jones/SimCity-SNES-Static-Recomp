#ifndef SC_V11_AUDIO_EPOCH_MANIFEST_H
#define SC_V11_AUDIO_EPOCH_MANIFEST_H
#include <stdint.h>

#define SC_V11_AUDIO_EPOCH_IPL 0u
#define SC_V11_AUDIO_EPOCH_SIMCITY_BOOT_TITLE 1u
#define SC_V11_AUDIO_STATIC_INSTRUCTION_COUNT 1052u
#define SC_V11_AUDIO_STATIC_IPL_INSTRUCTION_COUNT 32u
#define SC_V11_AUDIO_STATIC_DRIVER_INSTRUCTION_COUNT 1020u
#define SC_V11_AUDIO_STATIC_MANIFEST_SHA256 "40482c98b3a3f7dc687133d4403378d80e39313a8124132bb68bd39fb5e0010a"

typedef struct SCV11AudioStaticInstruction {
    uint16_t pc;
    uint8_t opcode;
    uint8_t length;
    uint8_t epoch;
} SCV11AudioStaticInstruction;

const SCV11AudioStaticInstruction *sc_v11_audio_epoch_lookup(uint16_t pc, uint8_t epoch);
int sc_v11_audio_epoch_is_code_byte(uint16_t address, uint8_t epoch);

#endif
