#include "sc_stock_map_trace.h"
#include "sc_static_apu.h"

#include <stdio.h>

static SCV11Runtime runtime;
static SimCityRecompStockWorldPower work;
static uint16_t tiles[SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT];

static void set_word(unsigned offset, unsigned value) {
    runtime.machine.wram[offset] = (uint8_t)value;
    runtime.machine.wram[offset + 1u] = (uint8_t)(value >> 8u);
}

static int check(uint32_t pc, unsigned actual, unsigned expected) {
    if (actual == expected && !runtime.route_failed) return 1;
    fprintf(stderr, "Ship $%06lX: got %04X, expected %04X\n", (unsigned long)pc, actual, expected);
    return 0;
}

static int entry(uint32_t pc, unsigned x, unsigned y, unsigned expected) {
    runtime.current_instruction_address = pc;
    runtime.machine.cpu.d = 0x1000u;
    set_word(0x1000u, x);
    set_word(0x1004u, y);
    return check(pc, sc_v11_bus_read16(&runtime, 0x7f0208u), expected);
}

static int movement(uint32_t pc, unsigned x, unsigned y, unsigned direction,
                    uint32_t stock_address, unsigned expected) {
    runtime.current_instruction_address = pc;
    runtime.machine.cpu.y = (uint16_t)(direction * 2u);
    set_word(0x0a65u, x);
    set_word(0x0a63u, y);
    return check(pc, sc_v11_bus_read16(&runtime, stock_address), expected);
}

static int compare(uint32_t pc, unsigned value, unsigned old_limit, unsigned expected_flags) {
    runtime.current_instruction_address = pc;
    sc_v11_op_compare(&runtime, (uint16_t)value, (uint16_t)old_limit, 16u);
    return check(pc, runtime.machine.cpu.p & (SC_FLAG_C | SC_FLAG_Z), expected_flags);
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
    sc_v11_set_stock_world_window(&window);
    tiles[220] = 2u;
    tiles[144 * SC_STOCK_WORLD_WIDTH] = 2u;
    tiles[199 * SC_STOCK_WORLD_WIDTH + 205] = 2u;
    tiles[143 * SC_STOCK_WORLD_WIDTH + 239] = 2u;
    tiles[143 * SC_STOCK_WORLD_WIDTH + 238] = 0x354u;
    tiles[143 * SC_STOCK_WORLD_WIDTH + 237] = 2u;
    tiles[144 * SC_STOCK_WORLD_WIDTH + 237] = 3u;
    int ok = 1;
    ok &= entry(0x03ac7bu, 220, 0, 2);
    ok &= entry(0x03aca7u, 0, 144, 2);
    ok &= entry(0x03acdau, 205, 199, 2);
    ok &= entry(0x03ad09u, 239, 143, 2);
    ok &= entry(0x03ad09u, 240, 143, 0);
    ok &= movement(0x00b8fcu, 239, 143, 6, 0x7f0208u, 0x354u);
    ok &= movement(0x00b971u, 239, 143, 6, 0x800008u, 2);
    ok &= movement(0x00b9b4u, 238, 143, 5, 0x7f0208u, 3);
    ok &= movement(0x00b8fcu, 239, 143, 2, 0x7f0208u, 0); /* no row wrap */
    ok &= movement(0x00b971u, 239, 143, 2, 0x800008u, 0);
    ok &= compare(0x03ac8du, 238, 118, SC_FLAG_C | SC_FLAG_Z);
    ok &= compare(0x03acbdu, 198, 98, SC_FLAG_C | SC_FLAG_Z);
    ok &= compare(0x00b7edu, 199, 100, 0);
    ok &= compare(0x00b806u, 240, 120, SC_FLAG_C | SC_FLAG_Z);
    sc_v11_set_stock_world_window(NULL);
    set_word(0x10208u, 0x1234u);
    ok &= entry(0x03ad09u, 239, 143, 0x1234u);
    ok &= movement(0x00b8fcu, 239, 143, 6, 0x7f0208u, 0x1234u);
    ok &= compare(0x00b806u, 120, 120, SC_FLAG_C | SC_FLAG_Z);
    sc_static_apu_release();
    return !ok;
}
