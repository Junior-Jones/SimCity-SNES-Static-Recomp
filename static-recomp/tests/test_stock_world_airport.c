#include "sc_stock_map_trace.h"
#include "sc_static_apu.h"

#include <stdio.h>

static SCV11Runtime runtime;
static SimCityRecompStockWorldPower work;
static uint16_t tiles[SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT];
static uint8_t rom[512u * 1024u];

static void put(unsigned a, unsigned value) {
    runtime.machine.wram[a] = (uint8_t)value;
    runtime.machine.wram[a + 1u] = (uint8_t)(value >> 8u);
}

static unsigned get(unsigned a) {
    return runtime.machine.wram[a] | ((unsigned)runtime.machine.wram[a + 1u] << 8u);
}

static int approach(int expanded, unsigned x, unsigned y, uint16_t runway,
                    unsigned heading, int expected) {
    const SCStockWorldWindow window = {&runtime, tiles, 0u, 0u, 1, NULL,
        &work.census, &work, 1};
    sc_v11_runtime_init(&runtime, rom, sizeof(rom));
    runtime.machine.cpu.emulation = 0u;
    runtime.machine.cpu.p = SC_FLAG_I;
    runtime.machine.cpu.pc = 0xb6fcu;
    put(0x0a8du, 1u);
    put(0x0a61u, x);
    put(0x0a5fu, y);
    put(0x0a9fu, heading);
    if (expanded) {
        tiles[y * SC_STOCK_WORLD_WIDTH + x] = runway;
        sc_v11_set_stock_world_window(&window);
    } else {
        put(SC_STOCK_TILE_BASE + 2u * (y * SC_STOCK_TILE_WIDTH + x), runway);
    }
    /* Run the original runway-detection instructions ($B6FC through
       $B742), starting on the approach tile with no forced disaster. */
    unsigned steps = 0u;
    while (runtime.machine.cpu.pc != 0xb742u && steps++ < 40u)
        if (!sc_v11_cpu_step(&runtime)) break;
    sc_v11_set_stock_world_window(NULL);
    const int landed = get(0x0acbu) == 1u && get(0x0a9fu) == 2u &&
                       get(0x0aadu) == x + 1u && get(0x0aabu) == y;
    printf("airport approach world=%d tile=(%u,%u) runway=%04X heading=%u landed=%d expected=%d pc=%04X %s\n",
           expanded, x, y, runway, heading, landed, expected, runtime.machine.cpu.pc, runtime.route_error);
    return !runtime.route_failed && runtime.machine.cpu.pc == 0xb742u && landed == expected;
}

int main(int argc, char **argv) {
    if (argc != 2) return 1;
    FILE *file = fopen(argv[1], "rb");
    if (!file) return 1;
    const size_t bytes = fread(rom, 1u, sizeof(rom), file);
    const int extra = fgetc(file);
    fclose(file);
    if (bytes != sizeof(rom) || extra != EOF) return 1;
    char error[256] = {0};
    if (!sc_static_apu_acquire(error, sizeof(error))) {
        fprintf(stderr, "Audio setup for timed CPU failed: %s\n", error);
        return 1;
    }
    int ok = approach(0, 38, 38, 0x0297u, 3, 1);
    ok &= approach(1, 148, 148, 0x0297u, 3, 1);
    ok &= approach(0, 38, 38, 0x8297u, 3, 0);
    ok &= approach(1, 148, 148, 0x8297u, 3, 0);
    ok &= approach(1, 148, 148, 0x0297u, 7, 0);
    ok &= approach(1, 148, 148, 0x0014u, 3, 0);
    sc_static_apu_release();
    return !ok;
}
