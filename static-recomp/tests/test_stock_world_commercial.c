#include "sc_stock_map_trace.h"
#include "sc_static_apu.h"

#include <stdio.h>

static SCV11Runtime runtime;
static SimCityRecompStockWorldPower work;
static uint16_t tiles[SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT];

static int check(unsigned x, unsigned y, unsigned cx, unsigned cy, uint16_t expected) {
    const uint32_t original_table = 0x7fb47au;
    const uint32_t original_index = (y / 8u) * 15u + (x / 8u);
    const uint32_t address = original_table + original_index * 2u;
    runtime.current_instruction_address = 0x039a2cu;
    runtime.machine.cpu.x = (uint16_t)(original_index * 2u);
    runtime.machine.wram[0x0b85u] = (uint8_t)x;
    runtime.machine.wram[0x0b86u] = (uint8_t)y;
    runtime.machine.wram[0x0babu] = (uint8_t)cx;
    runtime.machine.wram[0x0bacu] = (uint8_t)cy;
    const uint16_t actual = sc_v11_bus_read16(&runtime, address);
    if (actual == expected && !runtime.route_failed) return 1;
    fprintf(stderr, "Commercial lookup at (%u,%u), center (%u,%u): got %u, expected %u\n",
            x, y, cx, cy, actual, expected);
    return 0;
}

int main(void) {
    const SCStockWorldWindow window = {&runtime, tiles, 0u, 0u, 1, NULL,
        &work.census, &work, 1};
    char error[256] = {0};
    if (!sc_static_apu_acquire(error, sizeof(error))) {
        fprintf(stderr, "Audio setup for the timed bus failed: %s\n", error);
        return 1;
    }
    sc_v11_smp_power_on(&runtime);
    int ok = 1;
    work.census.active = 1;
    sc_v11_set_stock_world_window(&window);
    ok &= check(248, 201, 0, 0, 0); /* invalid tile, no aliased read */
    ok &= check(71, 140, 57, 48, 0); /* original mixed district */
    ok &= check(144, 144, 72, 72, 64); /* beyond both old boundaries */
    ok &= check(151, 151, 72, 72, 64); /* same native 8x8 cell */
    ok &= check(152, 151, 72, 72, 56);
    ok &= check(239, 199, 110, 90, 40);
    sc_v11_set_stock_world_window(NULL);
    runtime.machine.wram[0x1b47au] = 0x34u;
    runtime.machine.wram[0x1b47bu] = 0x12u;
    ok &= check(0, 0, 0, 0, 0x1234u); /* ordinary map still uses ROM-produced WRAM */
    sc_static_apu_release();
    return !ok;
}
