#include "sc_audio_scpu_access_manifest.h"

static const SCAudioScpuAccessSite sites[] = {
    {0x00987Bu, SC_AUDIO_SCPU_ACCESS_READ, 0x01u, 8u, 3u, {0xACu,0x40u,0x21u,0x00u}},
    {0x009882u, SC_AUDIO_SCPU_ACCESS_WRITE, 0x01u, 8u, 3u, {0x8Du,0x40u,0x21u,0x00u}},
    {0x00988Bu, SC_AUDIO_SCPU_ACCESS_WRITE, 0x02u, 8u, 3u, {0x8Du,0x41u,0x21u,0x00u}},
    {0x009892u, SC_AUDIO_SCPU_ACCESS_WRITE, 0x04u, 8u, 3u, {0x8Du,0x42u,0x21u,0x00u}},
    {0x009899u, SC_AUDIO_SCPU_ACCESS_WRITE, 0x08u, 8u, 3u, {0x8Du,0x43u,0x21u,0x00u}},
    {0x059357u, SC_AUDIO_SCPU_ACCESS_READ, 0x03u, 16u, 3u, {0xECu,0x40u,0x21u,0x00u}},
    {0x05936Du, SC_AUDIO_SCPU_ACCESS_READ, 0x01u, 8u, 3u, {0xCDu,0x40u,0x21u,0x00u}},
    {0x059375u, SC_AUDIO_SCPU_ACCESS_WRITE, 0x03u, 16u, 3u, {0x8Du,0x40u,0x21u,0x00u}},
    {0x05937Du, SC_AUDIO_SCPU_ACCESS_READ, 0x01u, 8u, 3u, {0xCDu,0x40u,0x21u,0x00u}},
    {0x059392u, SC_AUDIO_SCPU_ACCESS_WRITE, 0x0Cu, 16u, 3u, {0x8Du,0x42u,0x21u,0x00u}},
    {0x05939Du, SC_AUDIO_SCPU_ACCESS_WRITE, 0x02u, 8u, 3u, {0x8Du,0x41u,0x21u,0x00u}},
    {0x0593A3u, SC_AUDIO_SCPU_ACCESS_WRITE, 0x01u, 8u, 3u, {0x8Du,0x40u,0x21u,0x00u}},
    {0x0593A6u, SC_AUDIO_SCPU_ACCESS_READ, 0x01u, 8u, 3u, {0xCDu,0x40u,0x21u,0x00u}},
};

const SCAudioScpuAccessSite *sc_audio_scpu_access_lookup(uint32_t address, uint8_t direction, unsigned port) {
    unsigned i; uint8_t bit;
    if (port >= 4u) return 0;
    bit = (uint8_t)(1u << port);
    for (i = 0u; i < (unsigned)(sizeof(sites)/sizeof(sites[0])); ++i)
        if (sites[i].address == (address & 0x00FFFFFFu) && sites[i].direction == direction && (sites[i].port_mask & bit)) return &sites[i];
    return 0;
}
const SCAudioScpuAccessSite *sc_audio_scpu_access_sites(void) { return sites; }
unsigned sc_audio_scpu_access_site_count(void) { return (unsigned)(sizeof(sites)/sizeof(sites[0])); }
