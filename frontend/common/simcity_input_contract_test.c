#include <stdio.h>

#include "simcity_input_latch.h"
#include "simcity_static_recomp.h"

#define CHECK(expression) do { \
    if (!(expression)) { \
        fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #expression); \
        return 1; \
    } \
} while (0)

int main(void)
{
    static const uint16_t frontend[] = {
        SIMCITY_INPUT_B, SIMCITY_INPUT_Y, SIMCITY_INPUT_SELECT,
        SIMCITY_INPUT_START, SIMCITY_INPUT_UP, SIMCITY_INPUT_DOWN,
        SIMCITY_INPUT_LEFT, SIMCITY_INPUT_RIGHT, SIMCITY_INPUT_A,
        SIMCITY_INPUT_X, SIMCITY_INPUT_L, SIMCITY_INPUT_R
    };
    static const uint16_t snes_serial_order[] = {
        0x8000u, 0x4000u, 0x2000u, 0x1000u,
        0x0800u, 0x0400u, 0x0200u, 0x0100u,
        0x0080u, 0x0040u, 0x0020u, 0x0010u
    };
    SimCityInputLatch latch = { 0u, 0u };
    size_t index;

    for (index = 0u; index < sizeof(frontend) / sizeof(frontend[0]); ++index) {
        CHECK(frontend[index] == snes_serial_order[index]);
        simcity_input_latch_reset(&latch);
        simcity_input_latch_press(&latch, frontend[index], 0u, 0);
        CHECK(simcity_input_latch_sample(&latch) == frontend[index]);
        simcity_input_latch_release(&latch, frontend[index]);
        CHECK(simcity_input_latch_sample(&latch) == frontend[index]);
        simcity_input_latch_consume(&latch, frontend[index]);
        CHECK(simcity_input_latch_sample(&latch) == 0u);
    }

    simcity_input_latch_press(&latch, SIMCITY_INPUT_LEFT,
                             SIMCITY_INPUT_RIGHT, 0);
    simcity_input_latch_press(&latch, SIMCITY_INPUT_RIGHT,
                             SIMCITY_INPUT_LEFT, 0);
    CHECK((latch.held & (SIMCITY_INPUT_LEFT | SIMCITY_INPUT_RIGHT)) ==
          (SIMCITY_INPUT_LEFT | SIMCITY_INPUT_RIGHT));
    CHECK(latch.pending_press == SIMCITY_INPUT_RIGHT);
    simcity_input_latch_reset(&latch);
    CHECK(simcity_input_latch_sample(&latch) == 0u);

    puts("PASS all frontend/core button constants and keyboard press/release latch routes");
    return 0;
}
