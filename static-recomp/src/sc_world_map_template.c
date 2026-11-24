#include "simcity_static_recomp.h"
#include <stdlib.h>
#include <string.h>

enum { W = 240, H = 200, CELLS = W * H, RANGE = 1024, SPAWN = 48 };

static const SimCityWorldMapTemplateInfo maps[] = {
    {"Inland Plain", 100}, {"Forest Basin", 85}, {"River Junction", 75},
    {"Great Lakes", 65}, {"Delta Coast", 60}, {"Twin Shores", 55},
    {"Inner Sea", 45}, {"Island Chain", 35}, {"Outer Archipelago", 25}
};

const SimCityWorldMapTemplateInfo *simcity_recomp_world_map_template_info(unsigned id) {
    return id && id <= sizeof(maps) / sizeof(maps[0]) ? &maps[id - 1u] : NULL;
}

static int terrain_min(int a, int b) { return a < b ? a : b; }
static int terrain_max(int a, int b) { return a > b ? a : b; }
static int wave(int x, int period) {
    const int phase = x % period;
    return terrain_min(phase, period - phase) - period / 4;
}
static int island(int x, int y, int cx, int cy, int rx, int ry) {
    const int dx = x - cx, dy = y - cy;
    return 144 - dx * dx * 128 / (rx * rx) - dy * dy * 128 / (ry * ry);
}

static int land_score(unsigned id, int x, int y) {
    const int bends = wave(y, 91), ripple = wave(x + 7, 53);
    switch (id) {
        case 2: return -terrain_max(island(x, y, 137, 105, 24, 62), island(x, y, 83, 154, 22, 17));
        case 3: {
            const int horizontal = abs(y - 99 - ripple / 2);
            const int vertical = abs(x - 121 - bends / 3);
            const int approach_x = terrain_min(abs(x - 62), abs(x - 181));
            const int approach_y = terrain_min(abs(y - 49), abs(y - 152));
            /* Keep one short bridge opportunity on each arm. Narrowing
               the approach leaves a river between the two dry banks. */
            if (approach_x < 4 && horizontal < 32) return horizontal <= 4 ? -100 : 90 - approach_x * 7;
            if (approach_y < 4 && vertical < 32) return vertical <= 4 ? -100 : 90 - approach_y * 7;
            return terrain_min(vertical, horizontal);
        }
        case 4: return -terrain_max(terrain_max(island(x, y, 91, 75, 29, 37), island(x, y, 181, 72, 34, 25)),
                            island(x, y, 141, 151, 47, 25));
        case 5: return terrain_min(131 - y + ripple, 2 * abs(x - 109 - bends / 2) + 106 - y);
        case 6: {
            const int strait = abs(x - 120 - bends / 2);
            const int narrows = abs(y - 74);
            if (narrows < 12 && strait < 62)
                return strait <= 5 + narrows * 2 ? -100 : 100 - narrows * 4;
            return strait + ripple / 4;
        }
        case 7: return -island(x, y, 123, 159, 100, 109) + ripple / 2;
        case 8: return terrain_max(terrain_max(island(x, y, 39, 37, 60, 51), island(x, y, 134, 66, 43, 30)),
                            terrain_max(island(x, y, 86, 151, 40, 32), island(x, y, 202, 153, 31, 35)));
        /* Keep the first satellite close enough for an early straight
           bridge without changing the catalog's total land allocation. */
        default: return terrain_max(terrain_max(terrain_max(island(x, y, 37, 37, 50, 42), island(x, y, 103, 59, 26, 20)),
                                terrain_max(island(x, y, 163, 97, 29, 25), island(x, y, 208, 131, 24, 20))),
                            terrain_max(island(x, y, 56, 127, 29, 28), island(x, y, 126, 167, 31, 26)));
    }
}

int simcity_recomp_world_map_template_tiles(unsigned id, uint16_t *tiles, size_t cells) {
    const SimCityWorldMapTemplateInfo *map = simcity_recomp_world_map_template_info(id);
    if (!map || !tiles || cells != CELLS) return 0;
    /* Flat, clear land from edge to edge: no lakes, trees, or shore tiles. */
    if (map->land_percent == 100u) {
        memset(tiles, 0, cells * sizeof(*tiles));
        return 1;
    }
    unsigned histogram[RANGE] = {0};
    for (int y = 0; y < H; ++y) for (int x = 0; x < W; ++x) {
        const int score = x < SPAWN && y < SPAWN ? RANGE - 1 :
            terrain_min(RANGE - 2, terrain_max(0, RANGE / 2 + land_score(id, x, y)));
        tiles[y * W + x] = (uint16_t)score;
        ++histogram[score];
    }
    unsigned ties = CELLS * map->land_percent / 100u;
    unsigned cutoff = RANGE - 1u;
    while (ties > histogram[cutoff]) ties -= histogram[cutoff--];
    for (int y = 0; y < H; ++y) for (int x = 0; x < W; ++x) {
        uint16_t *tile = &tiles[y * W + x];
        const int dry = *tile > cutoff || (*tile == cutoff && ties && ties--);
        const int trees = id == 2 && (x >= SPAWN || y >= SPAWN) &&
            (x < 20 || y < 19 || x > W - 24 || y > H - 25) && wave(x + y, 37) > -4;
        *tile = !dry ? 0x0001u : trees ? 0x0014u : 0x0000u;
    }
    /* These shoreline variants are read from the original map's
       north/east/south/west dry-neighbor combinations. The generated
       geometry is ours; the original game still interprets each tile. */
    static const uint8_t shore[16] = {1,5,8,6,10,1,11,1,7,4,1,1,9,1,1,1};
    static const int dx[] = {0,1,0,-1}, dy[] = {-1,0,1,0};
    for (int y = 0; y < H; ++y) for (int x = 0; x < W; ++x) {
        uint16_t *tile = &tiles[y * W + x];
        if (*tile != 1u) continue;
        unsigned mask = 0u;
        for (unsigned d = 0u; d < 4u; ++d) {
            const int xx = x + dx[d], yy = y + dy[d];
            if (xx < 0 || xx >= W || yy < 0 || yy >= H) continue;
            const uint16_t neighbor = tiles[yy * W + xx];
            if (!neighbor || neighbor >= 0x14u) mask |= 1u << d;
        }
        /* The native seaport searches for tile 2 at the edge, and the
           ship's movement code distinguishes it from generic water. */
        *tile = mask ? shore[mask] : 2u;
    }
    return 1;
}
