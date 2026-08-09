#ifndef SC_AUDIO_SCPU_ACCESS_MANIFEST_H
#define SC_AUDIO_SCPU_ACCESS_MANIFEST_H
#include <stdint.h>

#define SC_AUDIO_SCPU_ACCESS_READ 1u
#define SC_AUDIO_SCPU_ACCESS_WRITE 2u
#define SC_AUDIO_SCPU_ACCESS_SITE_COUNT 13u
#define SC_AUDIO_SCPU_ACCESS_MANIFEST_SHA256 "2be25daa6ac5eddd56b08e5f69a15ca2c6295f244b0fd6183a2aa02a718b9f93"

typedef struct SCAudioScpuAccessSite {
    uint32_t address;
    uint8_t direction;
    uint8_t port_mask;
    uint8_t width;
    uint8_t opcode_length;
    uint8_t opcode[4];
} SCAudioScpuAccessSite;

const SCAudioScpuAccessSite *sc_audio_scpu_access_lookup(uint32_t address, uint8_t direction, unsigned port);
const SCAudioScpuAccessSite *sc_audio_scpu_access_sites(void);
unsigned sc_audio_scpu_access_site_count(void);
#endif
