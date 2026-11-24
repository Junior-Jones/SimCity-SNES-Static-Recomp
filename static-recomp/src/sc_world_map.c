#include "sc_world_map.h"

#include <stdlib.h>
#include <string.h>

enum {
    WORLD_W = 240, WORLD_H = 200, WORLD_CELLS = WORLD_W * WORLD_H,
    TILE_PX = 8, STEP_FRAMES = 4, TILE_KIND = 0xff, TILE_ANCHOR = 0x100,
    DENSITY_SHIFT = 9, ZONE_SIZE = 3, ZONE_LIMIT = WORLD_CELLS / 9,
    GROWTH_FRAMES = 120, MAX_RESIDENTS = 64, ROAD_CAPACITY = 64,
    NO_TILE = UINT16_MAX
};
_Static_assert(WORLD_CELLS <= UINT16_MAX, "Utility queue needs a wider index");

typedef struct SCWorldZone {
    uint16_t anchor, entrance;
    uint8_t residents;
} SCWorldZone;

struct SCWorldMap {
    uint16_t tiles[WORLD_CELLS];
    uint16_t queue[WORLD_CELLS];
    uint16_t next_road[WORLD_CELLS], distance[WORLD_CELLS];
    uint32_t road_load[WORLD_CELLS];
    uint8_t powered[WORLD_CELLS], congested_route[WORLD_CELLS];
    SCWorldZone zone_list[ZONE_LIMIT];
    unsigned x, y, edits, rejected, held_frames;
    unsigned visual_x, visual_y;
    unsigned tool, funds, roads, plants, zones, powered_roads, served_zones;
    unsigned population, commuters, congested_roads, peak_road_load, growth_ticks;
    unsigned growth_frames, animation_frame;
    uint16_t previous_input, direction;
};

static const unsigned tool_sizes[] = {2u, 1u, 4u, 3u};
static const unsigned tool_costs[] = {0u, 20u, 4000u, 120u};

SCWorldMap *sc_world_map_create(void) {
    SCWorldMap *world = calloc(1u, sizeof(*world));
    if (world) {
        world->x = 116u;
        world->y = 96u;
        world->visual_x = world->x * TILE_PX;
        world->visual_y = world->y * TILE_PX;
        world->funds = 20000u;
    }
    return world;
}

int sc_world_map_tile(const SCWorldMap *world, int x, int y, uint16_t *tile) {
    if (!world || !tile || x < 0 || x >= WORLD_W || y < 0 || y >= WORLD_H)
        return 0;
    *tile = world->tiles[(size_t)y * WORLD_W + (size_t)x] & TILE_KIND;
    return 1;
}

void sc_world_map_status(const SCWorldMap *world, SimCityWorldMapStatus *status) {
    *status = (SimCityWorldMapStatus){
        WORLD_W, WORLD_H, world->x, world->y, world->edits, world->rejected,
        world->tool, world->funds, world->roads, world->plants, world->zones,
        world->powered_roads, world->served_zones, world->population,
        world->commuters, world->congested_roads, world->peak_road_load,
        world->growth_ticks
    };
}

static unsigned neighbors(unsigned index, unsigned cells[4]) {
    const unsigned x = index % WORLD_W, y = index / WORLD_W;
    unsigned count = 0;
    if (x > 0u) cells[count++] = index - 1u;
    if (x + 1u < WORLD_W) cells[count++] = index + 1u;
    if (y > 0u) cells[count++] = index - WORLD_W;
    if (y + 1u < WORLD_H) cells[count++] = index + WORLD_W;
    return count;
}

static uint16_t zone_entrance(const SCWorldMap *world, unsigned anchor) {
    uint16_t best = NO_TILE;
    for (unsigned y = 0; y < ZONE_SIZE; ++y)
        for (unsigned x = 0; x < ZONE_SIZE; ++x) {
            unsigned cells[4];
            unsigned count = neighbors(anchor + y * WORLD_W + x, cells);
            for (unsigned n = 0; n < count; ++n) {
                unsigned cell = cells[n];
                if (world->powered[cell] && (world->tiles[cell] & TILE_KIND) == SIMCITY_WORLD_ROAD &&
                    (best == NO_TILE || world->distance[cell] < world->distance[best]))
                    best = (uint16_t)cell;
            }
        }
    return best;
}

/* Routes share the same shortest-path tree as utility service. Summing once
   in reverse BFS order counts trips through each road without walking every
   commuter's route individually. */
static void update_traffic(SCWorldMap *world) {
    world->commuters = world->congested_roads = world->peak_road_load = 0u;
    for (unsigned i = 0; i < world->powered_roads; ++i)
        world->road_load[world->queue[i]] = 0u;
    for (unsigned i = 0; i < world->zones; ++i) {
        const SCWorldZone *zone = &world->zone_list[i];
        if (zone->entrance != NO_TILE) {
            const unsigned trips = (zone->residents + 3u) / 4u;
            world->road_load[zone->entrance] += trips;
            world->commuters += trips;
        }
    }
    for (unsigned i = world->powered_roads; i > 0u; --i) {
        const unsigned cell = world->queue[i - 1u];
        const unsigned load = world->road_load[cell];
        if (load > world->peak_road_load) world->peak_road_load = load;
        if (load > ROAD_CAPACITY) ++world->congested_roads;
        if (world->next_road[cell] != NO_TILE)
            world->road_load[world->next_road[cell]] += load;
    }
    for (unsigned i = 0; i < world->powered_roads; ++i) {
        const unsigned cell = world->queue[i], next = world->next_road[cell];
        world->congested_route[cell] = (uint8_t)(world->road_load[cell] > ROAD_CAPACITY ||
            (next != NO_TILE && world->congested_route[next]));
    }
}

static void update_utilities(SCWorldMap *world) {
    unsigned tail = 0u;
    world->served_zones = 0u;
    memset(world->powered, 0, sizeof(world->powered));
    for (unsigned i = 0; i < WORLD_CELLS; ++i) {
        unsigned cells[4], count;
        if ((world->tiles[i] & TILE_KIND) != SIMCITY_WORLD_ROAD) continue;
        count = neighbors(i, cells);
        for (unsigned n = 0; n < count; ++n) {
            if ((world->tiles[cells[n]] & TILE_KIND) == SIMCITY_WORLD_PLANT) {
                world->powered[i] = 1u;
                world->next_road[i] = NO_TILE;
                world->distance[i] = 0u;
                world->queue[tail++] = (uint16_t)i;
                break;
            }
        }
    }
    for (unsigned head = 0; head < tail; ++head) {
        unsigned cells[4];
        unsigned count = neighbors(world->queue[head], cells);
        for (unsigned n = 0; n < count; ++n) {
            unsigned cell = cells[n];
            if (!world->powered[cell] && (world->tiles[cell] & TILE_KIND) == SIMCITY_WORLD_ROAD) {
                world->powered[cell] = 1u;
                world->next_road[cell] = world->queue[head];
                world->distance[cell] = (uint16_t)(world->distance[world->queue[head]] + 1u);
                world->queue[tail++] = (uint16_t)cell;
            }
        }
    }
    world->powered_roads = tail;
    for (unsigned i = 0; i < world->zones; ++i) {
        SCWorldZone *zone = &world->zone_list[i];
        zone->entrance = zone_entrance(world, zone->anchor);
        if (zone->entrance == NO_TILE) continue;
        ++world->served_zones;
        for (unsigned y = 0; y < ZONE_SIZE; ++y)
            for (unsigned x = 0; x < ZONE_SIZE; ++x)
                world->powered[zone->anchor + y * WORLD_W + x] = 1u;
    }
    update_traffic(world);
}

static int grow_city(SCWorldMap *world) {
    const unsigned previous_population = world->population;
    world->population = 0u;
    ++world->growth_ticks;
    for (unsigned i = 0; i < world->zones; ++i) {
        SCWorldZone *zone = &world->zone_list[i];
        unsigned count = zone->residents;
        if (zone->entrance == NO_TILE) {
            count = count > 4u ? count - 4u : 0u;
        } else if (count < MAX_RESIDENTS) {
            count += world->congested_route[zone->entrance] ? 1u : 4u;
            if (count > MAX_RESIDENTS) count = MAX_RESIDENTS;
        }
        if (count != zone->residents) {
            zone->residents = (uint8_t)count;
            for (unsigned y = 0; y < ZONE_SIZE; ++y) {
                for (unsigned x = 0; x < ZONE_SIZE; ++x) {
                    uint16_t *tile = &world->tiles[zone->anchor + y * WORLD_W + x];
                    *tile = (uint16_t)((*tile & (TILE_KIND | TILE_ANCHOR)) | (count << DENSITY_SHIFT));
                }
            }
        }
        world->population += count;
    }
    update_traffic(world);
    return world->population != previous_population;
}

static int apply_tool(SCWorldMap *world) {
    const unsigned tool = world->tool, size = tool_sizes[tool], cost = tool_costs[tool];
    const unsigned anchor = world->y * WORLD_W + world->x;
    const unsigned kind = tool + SIMCITY_WORLD_MARKER;
    const int removing = (tool == SIMCITY_WORLD_TOOL_ROAD || tool == SIMCITY_WORLD_TOOL_MARKER) &&
                         (unsigned)(world->tiles[anchor] & (TILE_KIND | TILE_ANCHOR)) ==
                         (kind | TILE_ANCHOR);
    if (world->x + size > WORLD_W || world->y + size > WORLD_H ||
        (!removing && world->funds < cost) ||
        (tool == SIMCITY_WORLD_TOOL_ZONE && world->zones >= ZONE_LIMIT)) return 0;
    for (unsigned y = 0; y < size; ++y)
        for (unsigned x = 0; x < size; ++x)
            if ((unsigned)(world->tiles[anchor + y * WORLD_W + x] & TILE_KIND) !=
                (removing ? kind : 0u))
                return 0;
    for (unsigned y = 0; y < size; ++y)
        for (unsigned x = 0; x < size; ++x)
            world->tiles[anchor + y * WORLD_W + x] =
                (uint16_t)(removing ? 0u : kind | ((x == 0u && y == 0u) ? TILE_ANCHOR : 0u));
    if (!removing) world->funds -= cost;
    if (tool == SIMCITY_WORLD_TOOL_ROAD) {
        if (removing) --world->roads;
        else ++world->roads;
    } else if (tool == SIMCITY_WORLD_TOOL_PLANT) {
        ++world->plants;
    } else if (tool == SIMCITY_WORLD_TOOL_ZONE) {
        world->zone_list[world->zones++] = (SCWorldZone){(uint16_t)anchor, NO_TILE, 0u};
    }
    if (tool != SIMCITY_WORLD_TOOL_MARKER) update_utilities(world);
    return 1;
}

static unsigned move_visual_axis(unsigned current, unsigned target) {
    const unsigned step = TILE_PX / STEP_FRAMES;
    if (target > current) return current + (target - current < step ? target - current : step);
    return current - (current - target < step ? current - target : step);
}

unsigned sc_world_map_step(SCWorldMap *world, uint16_t input) {
    const uint16_t direction = input &
        (SIMCITY_INPUT_LEFT | SIMCITY_INPUT_RIGHT | SIMCITY_INPUT_UP | SIMCITY_INPUT_DOWN);
    const unsigned old_x = world->x, old_y = world->y;
    unsigned event = 0u;
    if (direction != world->direction) {
        world->held_frames = 0u;
        world->direction = direction;
    }
    if (direction && world->held_frames++ == 0u) {
        if ((direction & SIMCITY_INPUT_LEFT) && !(direction & SIMCITY_INPUT_RIGHT) && world->x > 0u)
            --world->x;
        if ((direction & SIMCITY_INPUT_RIGHT) && !(direction & SIMCITY_INPUT_LEFT) && world->x + 1u < WORLD_W)
            ++world->x;
        if ((direction & SIMCITY_INPUT_UP) && !(direction & SIMCITY_INPUT_DOWN) && world->y > 0u)
            --world->y;
        if ((direction & SIMCITY_INPUT_DOWN) && !(direction & SIMCITY_INPUT_UP) && world->y + 1u < WORLD_H)
            ++world->y;
        if ((old_x < 120u) != (world->x < 120u) ||
            (old_y < 100u) != (world->y < 100u))
            event |= 1u;
    }
    if (world->held_frames == STEP_FRAMES) world->held_frames = 0u;
    world->visual_x = move_visual_axis(world->visual_x, world->x * TILE_PX);
    world->visual_y = move_visual_axis(world->visual_y, world->y * TILE_PX);
    const uint16_t pressed = input & (uint16_t)~world->previous_input;
    if ((pressed & (SIMCITY_INPUT_L | SIMCITY_INPUT_R)) == SIMCITY_INPUT_R) {
        world->tool = (world->tool + 1u) % SIMCITY_WORLD_TOOL_COUNT;
        event |= 8u;
    } else if ((pressed & (SIMCITY_INPUT_L | SIMCITY_INPUT_R)) == SIMCITY_INPUT_L) {
        world->tool = (world->tool + SIMCITY_WORLD_TOOL_COUNT - 1u) % SIMCITY_WORLD_TOOL_COUNT;
        event |= 8u;
    }
    if (pressed & SIMCITY_INPUT_B) {
        if (apply_tool(world)) {
            ++world->edits;
            event |= 2u;
        } else {
            ++world->rejected;
            event |= 4u;
        }
    }
    ++world->animation_frame;
    if (world->zones && ++world->growth_frames == GROWTH_FRAMES) {
        world->growth_frames = 0u;
        if (grow_city(world)) event |= 16u;
    }
    world->previous_input = input;
    return event;
}

static unsigned camera(unsigned pixel, unsigned span, unsigned extent) {
    const unsigned center = pixel + TILE_PX / 2u;
    const unsigned start = center > span / 2u ? center - span / 2u : 0u;
    return start < extent - span ? start : extent - span;
}

void sc_world_map_render(const SCWorldMap *world, uint32_t *pixels,
                         unsigned width, unsigned height) {
    const unsigned left = camera(world->visual_x, width, WORLD_W * TILE_PX);
    const unsigned top = camera(world->visual_y, height, WORLD_H * TILE_PX);
    unsigned y, x;
    for (y = 0u; y < height; ++y) {
        const unsigned wy = y + top, ty = wy / TILE_PX;
        const uint16_t *row = world->tiles + (size_t)ty * WORLD_W;
        for (x = 0u; x < width; ++x) {
            const unsigned wx = x + left, tx = wx / TILE_PX;
            uint32_t color = (tx + ty) % 2u ? UINT32_C(0xff345f55) : UINT32_C(0xff386657);
            if (wx == 120u * TILE_PX || wy == 100u * TILE_PX)
                color = UINT32_C(0xff83a799);
            const unsigned tile = row[tx] & TILE_KIND;
            const unsigned powered = world->powered[ty * WORLD_W + tx];
            if (tile == SIMCITY_WORLD_MARKER) color = UINT32_C(0xffe4a35e);
            else if (tile == SIMCITY_WORLD_ROAD) {
                color = powered ? UINT32_C(0xff7fced9) : UINT32_C(0xff8b918f);
                if (powered) {
                    const unsigned index = ty * WORLD_W + tx;
                    const unsigned load = world->road_load[index];
                    const unsigned next = world->next_road[index];
                    const int horizontal = next != NO_TILE && next / WORLD_W == ty;
                    const unsigned along = horizontal ? wx % TILE_PX : wy % TILE_PX;
                    const unsigned across = horizontal ? wy % TILE_PX : wx % TILE_PX;
                    const unsigned phase = (world->animation_frame / 4u) % TILE_PX;
                    const unsigned subphase = world->animation_frame % 4u;
                    const unsigned offset = next != NO_TILE && next > index ? TILE_PX - 1u - phase : phase;
                    const unsigned offset_next = next != NO_TILE && next > index ?
                        (offset + TILE_PX - 1u) % TILE_PX : (offset + 1u) % TILE_PX;
                    if (load > ROAD_CAPACITY) color = UINT32_C(0xffd18b65);
                    if (load && across == 3u) {
                        const uint32_t dot = UINT32_C(0xff263a43);
                        const unsigned coverage =
                            ((along + offset) % TILE_PX < 2u ? 4u - subphase : 0u) +
                            ((along + offset_next) % TILE_PX < 2u ? subphase : 0u);
                        uint32_t blend = UINT32_C(0xff000000);
                        for (unsigned shift = 0u; shift < 24u; shift += 8u)
                            blend |= (((((color >> shift) & 255u) * (4u - coverage) +
                                       ((dot >> shift) & 255u) * coverage) / 4u) << shift);
                        color = blend;
                    }
                }
            }
            else if (tile == SIMCITY_WORLD_PLANT)
                color = (tx + ty) % 2u ? UINT32_C(0xffb083d4) : UINT32_C(0xff785b9d);
            else if (tile == SIMCITY_WORLD_ZONE) {
                const unsigned density = row[tx] >> DENSITY_SHIFT;
                color = powered ? UINT32_C(0xffc1dc79) : UINT32_C(0xffab8a60);
                if (density && wx % TILE_PX >= 2u && wx % TILE_PX <= 5u &&
                    wy % TILE_PX >= 7u - density / 11u)
                    color = powered ? UINT32_C(0xff52632d) : UINT32_C(0xff715c42);
            }
            /* Mark the actual build tile while the visual cursor catches up. */
            if (tx == world->x && ty == world->y &&
                (wx % TILE_PX == 0u || wx % TILE_PX == TILE_PX - 1u ||
                 wy % TILE_PX == 0u || wy % TILE_PX == TILE_PX - 1u))
                color = UINT32_C(0xffb2ac88);
            if (wx - world->visual_x < TILE_PX && wy - world->visual_y < TILE_PX &&
                (wx == world->visual_x || wx == world->visual_x + TILE_PX - 1u ||
                 wy == world->visual_y || wy == world->visual_y + TILE_PX - 1u))
                color = UINT32_C(0xfff9f3d7);
            pixels[(size_t)y * width + x] = color;
        }
    }
}
