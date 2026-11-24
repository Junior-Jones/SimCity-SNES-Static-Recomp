#include "sc_world_map.h"

#include <stdio.h>
#include <stdlib.h>

static void press(SCWorldMap *world, uint16_t button) {
    sc_world_map_step(world, button);
    sc_world_map_step(world, 0u);
}

static void walk(SCWorldMap *world, uint16_t direction, unsigned cells) {
    for (unsigned i = 0u; i < cells * 4u; ++i)
        sc_world_map_step(world, direction);
    sc_world_map_step(world, 0u);
}

static int expect(SCWorldMap *world, unsigned roads, unsigned powered,
                  unsigned served, unsigned funds) {
    SimCityWorldMapStatus status;
    sc_world_map_status(world, &status);
    if (status.plants == 1u && status.zones == 1u && !status.rejected &&
        status.roads == roads && status.powered_roads == powered &&
        status.served_zones == served && status.funds == funds) return 1;
    fprintf(stderr, "utility mismatch at (%u,%u): plants=%u zones=%u roads=%u powered=%u served=%u funds=%u rejected=%u\n",
            status.cursor_x, status.cursor_y, status.plants, status.zones, status.roads,
            status.powered_roads, status.served_zones, status.funds, status.rejected);
    return 0;
}

static int settle_population(SCWorldMap *world, unsigned expected,
                             unsigned expected_commuters) {
    SimCityWorldMapStatus status;
    for (unsigned frame = 0u; frame < 240u; ++frame)
        sc_world_map_step(world, 0u);
    sc_world_map_status(world, &status);
    if (status.population == expected && status.commuters == expected_commuters &&
        status.peak_road_load == expected_commuters && !status.congested_roads) return 1;
    fprintf(stderr, "growth/traffic mismatch: population=%u commuters=%u peak=%u congested=%u\n",
            status.population, status.commuters, status.peak_road_load, status.congested_roads);
    return 0;
}

int main(void) {
    SCWorldMap *world = sc_world_map_create();
    int built, disconnected, restored;
    if (!world) return 1;
    press(world, SIMCITY_INPUT_R);
    press(world, SIMCITY_INPUT_R);
    /* The only plant fits exactly inside the northwest quadrant. */
    press(world, SIMCITY_INPUT_B);
    press(world, SIMCITY_INPUT_L);
    walk(world, SIMCITY_INPUT_RIGHT, 3u);
    walk(world, SIMCITY_INPUT_DOWN, 4u);
    for (unsigned i = 0u; i < 5u; ++i) {
        press(world, SIMCITY_INPUT_B);
        if (i < 4u) walk(world, SIMCITY_INPUT_RIGHT, 1u);
    }
    press(world, SIMCITY_INPUT_R);
    press(world, SIMCITY_INPUT_R);
    walk(world, SIMCITY_INPUT_DOWN, 1u);
    press(world, SIMCITY_INPUT_B);
    built = expect(world, 5u, 5u, 1u, 15780u) && settle_population(world, 8u, 2u);
    press(world, SIMCITY_INPUT_L);
    press(world, SIMCITY_INPUT_L);
    walk(world, SIMCITY_INPUT_UP, 1u);
    walk(world, SIMCITY_INPUT_LEFT, 3u);
    press(world, SIMCITY_INPUT_B);
    disconnected = expect(world, 4u, 1u, 0u, 15780u) && settle_population(world, 0u, 0u);
    press(world, SIMCITY_INPUT_B);
    restored = expect(world, 5u, 5u, 1u, 15760u) && settle_population(world, 8u, 2u);
    free(world);
    return !(built && disconnected && restored);
}
