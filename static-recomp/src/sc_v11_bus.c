#include "sc_experiment_config.h"
#include "sc_v11_runtime.h"
#include "sc_v11_cpu_cycle.h"
#include "sc_core_internal.h"
#include "sc_stock_map_trace.h"

#include <stddef.h>
#include <stdint.h>
#include <string.h>


static const uint8_t sc_v11_dma_offsets[8][4] = {
    {0u, 0u, 0u, 0u},
    {0u, 1u, 0u, 1u},
    {0u, 0u, 0u, 0u},
    {0u, 0u, 1u, 1u},
    {0u, 1u, 2u, 3u},
    {0u, 1u, 0u, 1u},
    {0u, 0u, 0u, 0u},
    {0u, 0u, 1u, 1u}
};

static int sc_v11_low_bank(uint8_t bank) {
    return bank < 0x40u || (bank >= 0x80u && bank < 0xc0u);
}

/* Host-only observer, scoped to a single public advance call. Keep it
   outside the serialized runtime so existing snapshots stay compatible. */
#ifdef _MSC_VER
#define SC_MAP_THREAD_LOCAL __declspec(thread)
#else
#define SC_MAP_THREAD_LOCAL _Thread_local
#endif
static SC_MAP_THREAD_LOCAL SCV11Runtime *map_trace_runtime;
static SC_MAP_THREAD_LOCAL SimCityRecompStockMapAccess map_trace_access;
static SC_MAP_THREAD_LOCAL void *map_trace_context;
static SC_MAP_THREAD_LOCAL const SCStockWorldWindow *stock_world_window;

static unsigned stock_stack_word(const SCV11Runtime *runtime, unsigned depth) {
    const uint16_t sp = runtime->machine.cpu.sp;
    const uint8_t *wram = runtime->machine.wram;
    return wram[(uint16_t)(sp + depth)] |
           ((unsigned)wram[(uint16_t)(sp + depth + 1u)] << 8u);
}

void sc_v11_set_stock_world_window(const SCStockWorldWindow *window) {
    stock_world_window = window;
}

int sc_v11_stock_world_camera_active(const SCV11Runtime *runtime) {
    return stock_world_window && runtime == stock_world_window->runtime &&
           stock_world_window->full_camera;
}

int sc_v11_stock_world_census_active(const SCV11Runtime *runtime) {
    return stock_world_window && runtime == stock_world_window->runtime &&
           stock_world_window->census && stock_world_window->census->active;
}

int sc_v11_stock_world_power_active(const SCV11Runtime *runtime) {
    return stock_world_window && runtime == stock_world_window->runtime &&
           stock_world_window->power &&
           (stock_world_window->power->propagating || stock_world_window->power->materializing);
}

int sc_v11_stock_world_traffic_active(const SCV11Runtime *runtime) {
    return stock_world_window && runtime == stock_world_window->runtime &&
           stock_world_window->continuous && stock_world_window->power;
}

int sc_v11_stock_world_density_active(const SCV11Runtime *runtime) {
    return sc_v11_stock_world_traffic_active(runtime) && stock_world_window->power->density_active;
}

int sc_v11_stock_world_environment_active(const SCV11Runtime *runtime) {
    return sc_v11_stock_world_traffic_active(runtime) && stock_world_window->power->environment_active;
}

static int sc_v11_stock_density_bus(SCV11Runtime *runtime, uint32_t address,
                                    uint8_t *value, int write) {
    const uint32_t pc = runtime->current_instruction_address;
    unsigned plane, cell = UINT32_MAX;
    int dx = 0, dy = 0;
    switch (pc) {
        case 0x03a141u: plane = 0u; cell = address - 0x7fb600u; break;
        case 0x039b7au: plane = 1u; cell = address - 0x7fc1b8u; break;
        case 0x039b83u: plane = 2u; cell = address - 0x7f8e28u; break;
        case 0x03a053u: plane = 0u; dx = -1; break;
        case 0x03a05du: plane = 0u; dx = 1; break;
        case 0x03a06au: plane = 0u; dy = -1; break;
        case 0x03a078u: plane = 0u; dy = 1; break;
        case 0x03a081u: case 0x03a121u: case 0x039b3cu: plane = 0u; break;
        case 0x03a0d9u: plane = 1u; dx = -1; break;
        case 0x03a0e3u: plane = 1u; dx = 1; break;
        case 0x03a0f0u: plane = 1u; dy = -1; break;
        case 0x03a0feu: plane = 1u; dy = 1; break;
        case 0x03a107u: case 0x03a09bu: plane = 1u; break;
        default: return 0;
    }
    if (!sc_v11_stock_world_density_active(runtime) &&
        !sc_v11_stock_world_environment_active(runtime)) return 0;
    SimCityRecompStockWorldPower *state = stock_world_window->power;
    if (cell == UINT32_MAX) {
        const int x = (state->density_coordinates & 255u) + dx;
        const int y = (state->density_coordinates >> 8u) + dy;
        if (x >= 0 && x < SC_STOCK_WORLD_WIDTH / 2 &&
            y >= 0 && y < SC_STOCK_WORLD_HEIGHT / 2)
            cell = (unsigned)y * (SC_STOCK_WORLD_WIDTH / 2u) + (unsigned)x;
    }
    if (cell >= sizeof(state->population_density)) {
        if (!write) *value = 0u;
        return 1;
    }
    uint8_t *data = plane == 2u ? state->population_density : state->density_scratch[plane];
    if (write) {
        data[cell] = *value;
        if (plane == 2u) ++state->density_written;
    } else *value = data[cell];
    return 1;
}

static int sc_v11_stock_environment_bus(SCV11Runtime *runtime, uint32_t address,
                                        uint8_t *value, int write) {
    const uint32_t pc = runtime->current_instruction_address;
    unsigned plane, cell = UINT32_MAX, width, limit;
    int dx = 0, dy = 0, quarter = 0;
    switch (pc) {
        case 0x039c22u: plane = 3u; quarter = 1; cell = address - 0x7fcd70u; break;
        case 0x039c81u: case 0x039d48u: plane = 0u; break;
        case 0x039c85u: case 0x039d7du: plane = 1u; break;
        case 0x039dafu: case 0x039dc5u: plane = 2u; break;
        case 0x039d87u: plane = 5u; break;
        case 0x039d23u: case 0x039d2au: case 0x03a008u: plane = 3u; quarter = 1; break;
        case 0x039fcau: plane = 3u; quarter = 1; dx = -1; break;
        case 0x039fd8u: plane = 3u; quarter = 1; dx = 1; break;
        case 0x039fe5u: plane = 3u; quarter = 1; dy = -1; break;
        case 0x039ff3u: plane = 3u; quarter = 1; dy = 1; break;
        case 0x039d73u: case 0x03a019u: plane = 4u; quarter = 1; break;
        default: return 0;
    }
    if (!sc_v11_stock_world_environment_active(runtime)) return 0;
    SimCityRecompStockWorldPower *state = stock_world_window->power;
    const unsigned xy = quarter ? state->terrain_coordinates : state->density_coordinates;
    width = SC_STOCK_WORLD_WIDTH / (quarter ? 4u : 2u);
    limit = SC_STOCK_WORLD_HEIGHT / (quarter ? 4u : 2u);
    if (cell == UINT32_MAX) {
        const int x = (int)(xy & 255u) + dx;
        const int y = (int)(xy >> 8u) + dy;
        if (x >= 0 && (unsigned)x < width && y >= 0 && (unsigned)y < limit)
            cell = (unsigned)y * width + (unsigned)x;
    }
    if (cell < width * limit) {
        uint8_t *data = plane == 0u ? state->density_scratch[0] : plane == 1u ? state->pollution :
                        plane == 2u ? state->land_value : plane == 3u ? state->terrain_scratch :
                        plane == 4u ? state->terrain_value : state->crime;
        if (write) {
            data[cell] = *value;
            if (pc == 0x039c85u) ++state->pollution_written;
        } else *value = data[cell];
    } else if (!write) *value = 0u;
    return 1;
}

static int sc_v11_stock_service_bus(SCV11Runtime *runtime, uint32_t address,
                                    uint8_t *value, int write) {
    const uint32_t pc = runtime->current_instruction_address;
    enum { FIRE, POLICE, SCRATCH, FIRE_DISPLAY, POLICE_DISPLAY, LAND, DENSITY, CRIME };
    unsigned plane, index;
    int dx = 0, dy = 0;
    uint32_t base;
    /* Absolute scans keep the original index width. Source and neighbor
       accesses instead use the packed coordinates supplied to A2D7. */
    switch (pc) {
        case 0x038287u: case 0x039ab4u: case 0x03a1bfu:
            plane = FIRE; base = 0x7fb16eu; break;
        case 0x03828bu: case 0x039f7fu: case 0x03a23eu:
            plane = POLICE; base = 0x7fb2f4u; break;
        case 0x03a1bbu: case 0x03a23au: plane = SCRATCH; base = 0x7fd05eu; break;
        case 0x039ac4u: plane = FIRE_DISPLAY; base = 0x7fb0abu; break;
        case 0x039f8fu: plane = POLICE_DISPLAY; base = 0x7fafe8u; break;
        default: base = 0u; plane = FIRE; break;
    }
    if (base) index = address - base;
    else {
        switch (pc) {
            case 0x03a178u: plane = FIRE; dx = -1; break;
            case 0x03a182u: plane = FIRE; dx = 1; break;
            case 0x03a18bu: plane = FIRE; dy = -1; break;
            case 0x03a195u: plane = FIRE; dy = 1; break;
            case 0x03a19bu: case 0x03ab2du: case 0x03ab31u: plane = FIRE; break;
            case 0x03a86eu: plane = FIRE_DISPLAY; break;
            case 0x03a1f7u: plane = POLICE; dx = -1; break;
            case 0x03a201u: plane = POLICE; dx = 1; break;
            case 0x03a20au: plane = POLICE; dy = -1; break;
            case 0x03a214u: plane = POLICE; dy = 1; break;
            case 0x03a21au: case 0x03ab86u: case 0x03ab8au: case 0x039f14u: plane = POLICE; break;
            case 0x03a1a0u: case 0x03a21fu: plane = SCRATCH; break;
            case 0x039ebau: plane = LAND; break;
            case 0x039ed7u: plane = DENSITY; break;
            case 0x039f2eu: case 0x039f43u: plane = CRIME; break;
            default: return 0;
        }
        index = UINT32_MAX;
    }
    if (!sc_v11_stock_world_traffic_active(runtime)) return 0;
    SimCityRecompStockWorldPower *state = stock_world_window->power;
    if (index == UINT32_MAX && !base) {
        const unsigned scale = plane >= LAND ? 2u : 8u;
        const unsigned xy = plane >= LAND ? state->density_coordinates : state->service_coordinates;
        const int x = (int)(xy & 255u) + dx, y = (int)(xy >> 8u) + dy;
        const unsigned width = SC_STOCK_WORLD_WIDTH / scale, height = SC_STOCK_WORLD_HEIGHT / scale;
        if (x >= 0 && (unsigned)x < width && y >= 0 && (unsigned)y < height) {
            index = (unsigned)y * width + (unsigned)x;
            if (plane < FIRE_DISPLAY) index = index * 2u + (address & 1u);
        }
    }
    if (plane < FIRE_DISPLAY && index < sizeof(state->service_scratch)) {
        uint16_t *words = plane == SCRATCH ? state->service_scratch : state->services[plane];
        const unsigned shift = (index & 1u) * 8u;
        if (write) words[index / 2u] = (uint16_t)((words[index / 2u] & ~(0xffu << shift)) |
                                                  ((unsigned)*value << shift));
        else *value = (uint8_t)(words[index / 2u] >> shift);
    } else if (plane >= FIRE_DISPLAY && plane <= POLICE_DISPLAY &&
               index < sizeof(state->service_coverage[0])) {
        uint8_t *data = state->service_coverage[plane - FIRE_DISPLAY];
        if (write) data[index] = *value;
        else *value = data[index];
    } else if (plane >= LAND && index < sizeof(state->crime)) {
        uint8_t *data = plane == LAND ? state->land_value :
                        plane == DENSITY ? state->population_density : state->crime;
        if (write) {
            data[index] = *value;
            if (plane == CRIME) ++state->crime_written;
        } else *value = data[index];
    } else if (!write) *value = 0u;
    return 1;
}

static int sc_v11_stock_traffic_bus(SCV11Runtime *runtime, uint32_t address,
                                    uint8_t *value, int write) {
    const uint32_t pc = runtime->current_instruction_address;
    SimCityRecompStockWorldPower *state;
    unsigned cell, x = 0u;
    switch (pc) {
        case 0x0388fau: case 0x038914u:
            cell = address - 0x7f99e0u;
            break;
        case 0x03b22cu: case 0x03b23bu: case 0x03a514u: {
            const unsigned y = runtime->machine.wram[0x0b86u];
            const unsigned byte = address - 0x7f99e0u - runtime->machine.cpu.x;
            x = runtime->machine.wram[0x0b85u];
            cell = x < SC_STOCK_WORLD_WIDTH && y < SC_STOCK_WORLD_HEIGHT && byte <= 1u ?
                   (y / 2u) * (SC_STOCK_WORLD_WIDTH / 2u) + x / 2u + byte : UINT32_MAX;
            break;
        }
        default: return 0;
    }
    if (!sc_v11_stock_world_traffic_active(runtime)) return 0;
    state = stock_world_window->power;
    if (cell < sizeof(state->traffic)) {
        if (write) {
            state->traffic[cell] = *value;
            if (pc == 0x03b23bu) {
                ++state->traffic_writes;
                if (x < SC_STOCK_TILE_WIDTH) ++state->traffic_west;
                else ++state->traffic_east;
            }
        } else *value = state->traffic[cell];
    } else if (!write) *value = 0u;
    return 1;
}

/* The stock $03:A25A producer stores this score on a 15x13 grid.
   Recreate its exact 64 - 2 * min(32, Manhattan distance) value for the
   requested coarse cell, using the same half-tile city-center coordinates.
   A World Map lookup otherwise falls off that grid or aliases another row. */
static unsigned stock_commercial_score(const uint8_t *wram, unsigned x, unsigned y) {
    const unsigned px = (x / 8u) * 4u, py = (y / 8u) * 4u;
    const unsigned cx = wram[0x0babu], cy = wram[0x0bacu];
    const unsigned distance = (px >= cx ? px - cx : cx - px) +
                              (py >= cy ? py - cy : cy - py);
    return distance >= 32u ? 0u : 64u - 2u * distance;
}

/* Feed the native zone routines their world-coordinate inputs. */
static int sc_v11_stock_growth_bus(SCV11Runtime *runtime, uint32_t address,
                                   uint8_t *value, int write) {
    const uint32_t pc = runtime->current_instruction_address;
    uint32_t base;
    unsigned kind;
    switch (pc) {
        case 0x039479u: case 0x039575u: case 0x0399e8u: base = 0x7f6b00u; kind = 0u; break;
        case 0x03947eu: case 0x0394a3u: case 0x0399edu: base = 0x7f8270u; kind = 1u; break;
        case 0x0394ccu: base = 0x7f8e28u; kind = 2u; break;
        case 0x039648u: case 0x03964cu: base = 0x7fae62u; kind = 3u; break;
        case 0x039a2cu: base = 0x7fb47au; kind = 4u; break;
        default: return 0;
    }
    if (!sc_v11_stock_world_traffic_active(runtime) || !sc_v11_stock_world_census_active(runtime))
        return 0;
    SimCityRecompStockWorldPower *state = stock_world_window->power;
    const unsigned x = runtime->machine.wram[0x0b85u], y = runtime->machine.wram[0x0b86u];
    const unsigned byte = address - base - runtime->machine.cpu.x;
    if (x >= SC_STOCK_WORLD_WIDTH || y >= SC_STOCK_WORLD_HEIGHT || byte > 1u) {
        if (!write) *value = 0u;
        return 1;
    }
    if (kind == 4u) {
        if (!write) *value = byte ? 0u : (uint8_t)stock_commercial_score(runtime->machine.wram, x, y);
        return 1;
    }
    if (kind == 3u) {
        uint16_t *word = state->growth_rate + (y / 8u) * (SC_STOCK_WORLD_WIDTH / 8u) + x / 8u;
        const unsigned shift = byte * 8u;
        if (write) *word = (uint16_t)((*word & ~(0xffu << shift)) | ((unsigned)*value << shift));
        else *value = (uint8_t)(*word >> shift);
        return 1;
    }
    const unsigned cell = (y / 2u) * (SC_STOCK_WORLD_WIDTH / 2u) + x / 2u + byte;
    const uint8_t *plane = kind == 0u ? state->land_value :
                           kind == 1u ? state->pollution : state->population_density;
    if (!write) *value = cell < sizeof(state->land_value) ? plane[cell] : 0u;
    return 1;
}

void sc_v11_stock_world_census_instruction(SCV11Runtime *runtime, uint16_t pc) {
    SimCityRecompStockWorldCensus *census;
    SimCityRecompStockWorldPower *power;
    if (!stock_world_window || runtime != stock_world_window->runtime ||
        !(census = stock_world_window->census))
        return;
    power = stock_world_window->power;
    if (stock_world_window->continuous &&
        (pc == 0xb9e5u || pc == 0xb9f2u || pc == 0xb9ffu || pc == 0xba0cu ||
         pc == 0xba51u || pc == 0xba61u)) {
        /* Tornado endpoints and monster spawn: keep the stock
           margins and random calls while extending their usable range. */
        const unsigned extra = pc == 0xb9e5u || pc == 0xb9ffu || pc == 0xba51u ?
            SC_STOCK_WORLD_WIDTH - SC_STOCK_TILE_WIDTH : SC_STOCK_WORLD_HEIGHT - SC_STOCK_TILE_HEIGHT;
        runtime->machine.cpu.a = (uint16_t)(runtime->machine.cpu.a + extra);
    }
    if (stock_world_window->continuous && (pc == 0xbca2u || pc == 0xbcaau)) {
        const unsigned caller = stock_stack_word(runtime, 1u);
        if (caller == 0xbbc2u || caller == 0xbc14u || caller == 0xbb32u) {
            /* Fire, flooding, and earthquake damage call the same picker.
               Keep the stock RNG, call, result format, and guest cycles. */
            runtime->machine.cpu.a = (uint16_t)((pc == 0xbca2u ?
                SC_STOCK_WORLD_WIDTH : SC_STOCK_WORLD_HEIGHT) - 1u);
        }
    }
    if (power && stock_world_window->continuous) {
        if (pc == 0xa2d7u) power->service_coordinates = runtime->machine.cpu.a;
        if (pc == 0x9e8eu) {
            power->crime_active = 1u;
            power->crime_written = 0u;
        } else if (pc == 0x9fa5u && power->crime_active) {
            power->crime_active = 0u;
            ++power->crime_cycles;
        } else if (pc == 0xa29au && power->crime_active) {
            power->density_coordinates = runtime->machine.cpu.a;
        }
        if (pc == 0x9aa3u) power->fire_active = 1u;
        else if (pc == 0x9ad6u && power->fire_active) {
            power->fire_active = 0u;
            ++power->fire_cycles;
        }
        if (pc == 0x9c11u) {
            power->environment_active = 1u;
            power->pollution_written = 0u;
        } else if (power->environment_active) {
            if (pc == 0xa2b9u) power->terrain_coordinates = runtime->machine.cpu.a;
            else if (pc == 0xa29au) power->density_coordinates = runtime->machine.cpu.a;
            else if (pc == 0x9cdeu) {
                power->environment_active = 0u;
                ++power->environment_cycles;
            }
        }
        if (pc == 0x9ad7u) {
            power->density_active = 1u;
            power->density_visits = power->density_written = 0u;
        } else if (power->density_active) {
            if (pc == 0x9af7u) ++power->density_visits;
            else if (pc == 0xa29au) power->density_coordinates = runtime->machine.cpu.a;
            else if (pc == 0x9bd4u) {
                power->density_active = 0u;
                ++power->density_cycles;
            }
        }
    }
    if (stock_world_window->continuous &&
        (pc == 0xb37eu || pc == 0xb39au)) {
        /* The preceding DEX/DEY wraps to $FF only at the zero edge.
           Tiles 128..239 would incorrectly look negative to stock BMI. */
        const uint8_t coord = (uint8_t)(pc == 0xb37eu ? runtime->machine.cpu.y :
                                                      runtime->machine.cpu.x);
        if (coord == 255u) runtime->machine.cpu.p |= SC_FLAG_N;
        else runtime->machine.cpu.p = (uint8_t)(runtime->machine.cpu.p & ~SC_FLAG_N);
    }
    if (power && power->complete && stock_world_window->continuous && pc == 0x8297u) {
        power->complete = 0u;
        power->written_cells = power->powered_cells = power->order_errors = 0u;
    }
    if (power && !power->complete) {
        if (pc == 0xafb0u && census->complete) power->propagating = 1u;
        else if (pc == 0xb152u && power->propagating) {
            power->propagating = 0u;
            power->materializing = 1u;
        } else if (pc == 0xb19cu && power->materializing) {
            /* Two original INX instructions stepped a byte offset by two.
               Keep their guest timing but advance one full-world cell. */
            --runtime->machine.cpu.x;
        } else if (pc == 0xb1a4u && power->materializing) {
            power->materializing = 0u;
            power->complete = 1u;
            ++power->completed_cycles;
        }
    }
    if (census->complete && (!power || (power->complete && !power->density_active && !power->environment_active)))
        return;
    if (pc == 0x8297u) {
        census->visited = census->order_errors = census->extended_centers = 0u;
        census->active = 1u;
        census->complete = 0u;
    } else if ((census->active || (power && (power->propagating || power->density_active ||
                                             power->environment_active))) &&
               (pc == 0x849eu || pc == 0x84c4u)) {
        census->lookup_coordinates = runtime->machine.cpu.a;
    } else if (census->active && pc == 0x83f8u) {
        census->active = 0u;
        census->complete = 1u;
    }
}

static int sc_v11_stock_power_bus(SCV11Runtime *runtime, uint32_t address,
                                  uint8_t *value, int write) {
    const uint32_t pc = runtime->current_instruction_address;
    SimCityRecompStockWorldPower *power;
    if ((pc >> 16u) != 3u || !sc_v11_stock_world_power_active(runtime)) return 0;
    power = stock_world_window->power;
    switch (pc) {
        case 0x03afc1u: case 0x03b0eau: case 0x03b0f1u:
        case 0x03b112u: case 0x03b172u: {
            const size_t byte = address - 0x7fa598u;
            if (byte >= sizeof(power->bitmap)) {
                if (!write) *value = 0u;
            } else if (write) power->bitmap[byte] = *value;
            else *value = power->bitmap[byte];
            return 1;
        }
        case 0x03b181u: case 0x03b18eu: {
            const unsigned cell = runtime->machine.cpu.x;
            const unsigned byte = address - (0x7f0200u + cell);
            if (cell >= SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT || byte > 1u) {
                if (!write) *value = 0u;
                return 1;
            }
            if (write) {
                /* Native routine clears/sets only bit 15. Preserve all other
                   bits and count on the high-byte transfer. */
                if (byte) {
                    uint16_t *tile = stock_world_window->tiles + cell;
                    const unsigned on = (*value & 0x80u) != 0u;
                    if (cell == power->written_cells) {
                        ++power->written_cells;
                        power->powered_cells += on;
                    } else if (power->written_cells && cell == power->written_cells - 1u) {
                        /* The stock $B197/$B199 retry redoes the same cell
                           after an interrupt. Keep the latest value while
                           counting unique cells, not bus transactions. */
                        const unsigned was_on = (*tile & 0x8000u) != 0u;
                        power->powered_cells = power->powered_cells - was_on + on;
                    } else {
                        ++power->order_errors;
                    }
                    *tile = (uint16_t)((*tile & 0x7fffu) | ((unsigned)(*value & 0x80u) << 8u));
                }
            } else {
                *value = (uint8_t)(stock_world_window->tiles[cell] >> (byte * 8u));
            }
            return 1;
        }
        default: return 0;
    }
}

/* Only bank-03 simulation instructions use these auxiliary planes.
   Group their address ranges so normal WRAM traffic and each simulation
   subroutine do not walk every World Map adapter on every memory access. */
static int sc_v11_stock_aux_bus(SCV11Runtime *runtime, uint32_t address,
                                uint8_t *value, int write) {
    const uint32_t instruction = runtime->current_instruction_address;
    if (instruction < 0x038287u || instruction > 0x03b23bu ||
        !stock_world_window || runtime != stock_world_window->runtime) return 0;
    const unsigned pc = (uint16_t)instruction;
    if ((pc >= 0x9c22u && pc <= 0x9dc5u) || (pc >= 0x9fcau && pc <= 0xa019u))
        return sc_v11_stock_environment_bus(runtime, address, value, write);
    if ((pc >= 0xa053u && pc <= 0xa147u) || (pc >= 0x9b3cu && pc <= 0x9b83u))
        return sc_v11_stock_density_bus(runtime, address, value, write);
    if (pc >= 0xafc1u && pc <= 0xb18eu)
        return sc_v11_stock_power_bus(runtime, address, value, write);
    if (pc == 0x8287u || pc == 0x828bu || pc == 0x9ab4u || pc == 0x9ac4u || pc == 0xa86eu ||
        (pc >= 0x9ebau && pc <= 0x9f8fu) || (pc >= 0xa178u && pc <= 0xa23eu) ||
        (pc >= 0xab2du && pc <= 0xab8au))
        return sc_v11_stock_service_bus(runtime, address, value, write);
    if (pc == 0x88fau || pc == 0x8914u || pc == 0xa514u || pc == 0xb22cu || pc == 0xb23bu)
        return sc_v11_stock_traffic_bus(runtime, address, value, write);
    if ((pc >= 0x9479u && pc <= 0x99edu) || pc == 0x9a2cu)
        return sc_v11_stock_growth_bus(runtime, address, value, write);
    return 0;
}

static uint16_t *sc_v11_stock_world_word(const SCV11Runtime *runtime, size_t offset) {
    size_t cell;
    if (!stock_world_window || runtime != stock_world_window->runtime ||
        offset < SC_STOCK_TILE_BASE || offset >= SC_STOCK_TILE_END)
        return NULL;
    cell = (offset - SC_STOCK_TILE_BASE) / 2u;
    return stock_world_window->tiles +
        (stock_world_window->y + cell / SC_STOCK_TILE_WIDTH) * SC_STOCK_WORLD_WIDTH +
        stock_world_window->x + cell % SC_STOCK_TILE_WIDTH;
}

static unsigned stock_coord(const uint8_t *wram, unsigned address) {
    return wram[address] | ((unsigned)wram[address + 1u] << 8u);
}

static int stock_ship_tile(const SCV11Runtime *runtime, uint32_t pc, uint16_t *tile) {
    switch (pc) {
        case 0x03ac7bu: case 0x03aca7u: case 0x03acdau: case 0x03ad09u:
        case 0x00b8fcu: case 0x00b971u: case 0x00b9b4u: break;
        default: return 0;
    }
    if (!sc_v11_stock_world_traffic_active(runtime)) return 0;
    const uint8_t *wram = runtime->machine.wram;
    int x, y;
    if (pc >= 0x030000u) {
        /* The four original entry scans maintain tile coordinates in DP;
           their X register still contains the old linear tile address. */
        const uint16_t dp = runtime->machine.cpu.d;
        x = stock_coord(wram, dp);
        y = stock_coord(wram, (uint16_t)(dp + 4u));
    } else {
        /* Decode the ROM's one- and two-tile compass offsets before the
           stock linear address can wrap from the end of a row to the next. */
        static const int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
        static const int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        const unsigned direction = (runtime->machine.cpu.y >> 1u) & 7u;
        const int distance = pc == 0x00b971u ? 2 : 1;
        x = (int)stock_coord(wram, 0x0a65u) + dx[direction] * distance;
        y = (int)stock_coord(wram, 0x0a63u) + dy[direction] * distance;
    }
    *tile = x >= 0 && x < SC_STOCK_WORLD_WIDTH && y >= 0 && y < SC_STOCK_WORLD_HEIGHT ?
        stock_world_window->tiles[(size_t)y * SC_STOCK_WORLD_WIDTH + x] : 0u;
    return 1;
}

static int stock_disaster_lot_access(const SCV11Runtime *runtime) {
    const uint32_t pc = runtime->current_instruction_address;
    if (pc == 0x0384bfu) {
        if (!sc_v11_stock_world_traffic_active(runtime)) return 0;
        const unsigned caller = stock_stack_word(runtime, 1u);
        return caller == 0xa9f5u || caller == 0xa8aeu;
    }
    return (pc == 0x03aa56u || pc == 0x03a8b0u || pc == 0x03a8b7u ||
            pc == 0x03a9a9u || pc == 0x03a9bcu) && sc_v11_stock_world_traffic_active(runtime);
}

static uint16_t *stock_disaster_start_tile(const SCV11Runtime *runtime, int write) {
    const uint32_t pc = runtime->current_instruction_address;
    if ((write ? pc != 0x03bbd7u && pc != 0x03bc53u && pc != 0x0384e6u : pc != 0x0384bfu) ||
        !stock_world_window || runtime != stock_world_window->runtime ||
        !stock_world_window->continuous) return NULL;
    /* The lookup has restored its temporary push at $84BF. Match the
       actual callers so other users of the stock helper remain unchanged. */
    unsigned dp = pc == 0x03bc53u ? 0x0cu : 4u;
    if (pc == 0x0384e6u && stock_stack_word(runtime, 1u) != 0xbb49u) return NULL;
    if (!write) {
        const unsigned caller = stock_stack_word(runtime, 1u);
        if (caller == 0xbc41u) dp = 0x0cu;  /* Flood's coastal land neighbor. */
        else if (caller == 0xbcb3u) {
            const unsigned parent = stock_stack_word(runtime, 3u);
            if (parent != 0xbbc2u && parent != 0xbc14u && parent != 0xbb32u) return NULL;
        } else return NULL;
    }
    const unsigned xy = stock_coord(runtime->machine.wram,
        (uint16_t)(runtime->machine.cpu.d + dp));
    const unsigned x = xy & 255u, y = xy >> 8u;
    if (x >= SC_STOCK_WORLD_WIDTH || y >= SC_STOCK_WORLD_HEIGHT) return NULL;
    return &stock_world_window->tiles[(size_t)y * SC_STOCK_WORLD_WIDTH + x];
}

static uint16_t *sc_v11_census_tile(const SCV11Runtime *runtime, int write,
                                   size_t offset, int *handled) {
    SimCityRecompStockWorldCensus *census = stock_world_window->census;
    int x = runtime->machine.wram[0x0b85u], y = runtime->machine.wram[0x0b86u];
    int primary = 0;
    const uint32_t pc = runtime->current_instruction_address;
    switch (pc) {
        case 0x0382beu: if (write) return NULL; primary = 1; break;
        /* The stock traffic pass recolors the road it just scanned (or
           replaces a deteriorated road). Its old linear index can wrap or
           fall back into the original 120-wide window. Use the same world
           coordinate as the census read rather than writing a second tile. */
        case 0x03a4dcu: case 0x03a536u: case 0x03a786u:
            if (!write) return NULL;
            break;
        case 0x0382e8u: case 0x0382efu: ++x; ++y; break;
        case 0x0384bfu:
            if (stock_disaster_lot_access(runtime)) break;
            /* fall through */
        case 0x0384e6u: case 0x0399b1u:
            x = census->lookup_coordinates & 255u;
            y = census->lookup_coordinates >> 8u;
            break;
        case 0x03a848u: case 0x03adb3u: {
            /* Spread uses the neighboring tile already checked by $849E.
               X contains the old row-stride index, not a world index. */
            if (!write) return NULL;
            const unsigned xy = stock_coord(runtime->machine.wram,
                (uint16_t)(runtime->machine.cpu.d + 4u));
            x = xy & 255u;
            y = xy >> 8u;
            break;
        }
        /* Stock burn-lot routine strips the diagonal tile's flags before
           iterating the 3x3, 4x4 or 6x6 footprint. */
        case 0x03a8b0u: if (write) return NULL; ++x; ++y; break;
        case 0x03a8b7u: if (!write) return NULL; ++x; ++y; break;
        case 0x03aa56u: if (!write) return NULL; break;
        case 0x03a9a9u: case 0x03a9bcu: {
            if (write != (pc == 0x03a9bcu)) return NULL;
            /* Decode the stock loop's signed displacement from the lot
               center. Use its actual table entries, including irregular
               offsets, without wrapping across a world row or edge. */
            const int stride = (int)SC_STOCK_TILE_WIDTH;
            /* $84A0 doubles X in an 8-bit accumulator before the stock
               routine adds its 16-bit row offset. Undo that same wrap. */
            const uint16_t center = (uint16_t)(2 * y * stride + ((2 * x) & 255));
            const int delta = (int16_t)(uint16_t)(runtime->machine.cpu.x - center) / 2;
            const int dy = (delta + (delta < 0 ? -stride / 2 : stride / 2)) / stride;
            y += dy;
            x += delta - dy * stride;
            break;
        }
        case 0x039cf6u: case 0x039cfdu: case 0x039d04u:
            x = (census->lookup_coordinates & 255u) + (pc != 0x039cfdu);
            y = (census->lookup_coordinates >> 8u) + (pc != 0x039cf6u);
            break;
        case 0x039a5eu: --y; break;
        case 0x039a65u: ++x; --y; break;
        case 0x039a6cu: --x; break;
        case 0x039a73u: ++x; break;
        case 0x039a7au: --x; ++y; break;
        case 0x039a81u: ++y; break;
        case 0x039a88u: ++x; ++y; break;
        case 0x039712u: case 0x039725u: {
            const unsigned slot = runtime->machine.cpu.y / 2u;
            if (slot >= 9u) { *handled = 1; return NULL; }
            x += (int)(slot % 3u) - 1;
            y += (int)(slot / 3u) - 1;
            break;
        }
        case 0x03aec4u: case 0x03aed7u:
        case 0x03aeecu: case 0x03aeffu:
        case 0x03af14u: case 0x03af27u: {
            /* Stock periodic footprint repair uses the census's next
               16-bit byte index plus a 120-wide offset table. At y >=137
               that index can alias a completely different city block. */
            const unsigned width = pc == 0x03aec4u || pc == 0x03aed7u ? 6u :
                                   pc == 0x03aeecu || pc == 0x03aeffu ? 4u : 3u;
            const unsigned slot = runtime->machine.cpu.y / 2u;
            const int before = width == 6u ? 2 : 1;
            if (slot >= width * width) { *handled = 1; return NULL; }
            x += (int)(slot % width) - before;
            y += (int)(slot / width) - before;
            break;
        }
        default: return NULL;
    }
    *handled = 1;
    if (x < 0 || x >= SC_STOCK_WORLD_WIDTH || y < 0 || y >= SC_STOCK_WORLD_HEIGHT)
        return NULL;
    const size_t index = (size_t)y * SC_STOCK_WORLD_WIDTH + (unsigned)x;
    uint16_t *tile = stock_world_window->tiles + index;
    if (primary && !(offset & 1u)) {
        if (index != census->visited) ++census->order_errors;
        ++census->visited;
        if (x >= SC_STOCK_TILE_WIDTH || y >= SC_STOCK_TILE_HEIGHT) {
            const unsigned code = *tile & 0x03ffu;
            if (code == 0x84u || code == 0x28cu || code == 0x27cu)
                ++census->extended_centers;
        }
    }
    return tile;
}

static uint16_t *sc_v11_full_world_word(const SCV11Runtime *runtime, int write, int *handled) {
    const uint8_t *wram = runtime->machine.wram;
    unsigned x, y, pair;
    const uint32_t pc = runtime->current_instruction_address;
    if (write && (pc == 0x01be02u || pc == 0x01be3bu)) {
        x = stock_coord(wram, 0x0219u);
        y = stock_coord(wram, 0x021bu);
    } else if ((!write && pc == 0x01be71u) || (write && pc == 0x01be82u)) {
        x = stock_coord(wram, 0x0233u);
        y = stock_coord(wram, 0x0235u);
    } else if (!write && pc == 0x01ba78u) {
        /* BA3F still leaves y*120 in DP:$79 and the full even byte index
           in A. X can be 8-bit here; don't recover coordinates from X. */
        pair = stock_coord(wram, (runtime->machine.cpu.d + 0x79u) & 0xffffu);
        x = (runtime->machine.cpu.a >> 1u) - pair;
        y = pair / SC_STOCK_TILE_WIDTH;
    } else {
        return NULL;
    }
    *handled = 1;
    if (x >= SC_STOCK_WORLD_WIDTH || y >= SC_STOCK_WORLD_HEIGHT) return NULL;
    return stock_world_window->tiles + (size_t)y * SC_STOCK_WORLD_WIDTH + x;
}

/* The native overview has 120 by 100 pixels. Each pixel summarizes a
   two-by-two patch of the expanded city, using an actual stock tile so the
   original palette lookup still classifies it. Prefer constructed objects
   over transport, then any majority terrain among the four cells. */
static unsigned stock_overview_tile_priority(uint16_t word) {
    const unsigned code = word & 0x03ffu;
    if (code >= 0x80u) return 4u;
    if (code >= 0x30u) return 3u;
    if (code >= 0x26u) return 2u;
    return 0u;
}

static unsigned stock_overview_terrain(uint16_t word) {
    const unsigned code = word & 0x03ffu;
    return code >= 0x14u ? 2u : code != 0u ? 1u : 0u;
}

static int stock_overview_transport(uint16_t word) {
    const unsigned code = word & 0x03ffu;
    return (code >= 0x30u && code <= 0x5eu && code != 0x3fu && code != 0x4fu) ||
           (code >= 0x70u && code <= 0x7eu) || code == 0x6du || code == 0x6eu ||
           (code >= 0x34bu && code <= 0x353u);
}

/* The overview's stock classifier also recognizes the late-game
   residential and commercial top-zone tile families. */
static unsigned stock_overview_zone(uint16_t word) {
    const unsigned code = word & 0x03ffu;
    if ((code >= 0x080u && code < 0x137u) || (code >= 0x376u && code < 0x39au)) return 1u;
    if ((code >= 0x137u && code < 0x1f4u) || (code >= 0x39au && code < 0x3beu)) return 2u;
    if (code >= 0x1f4u && code < 0x245u) return 3u;
    return 0u;
}

static unsigned stock_overview_layer_priority(uint16_t word, unsigned layer) {
    const unsigned code = word & 0x03ffu;
    const unsigned priority = stock_overview_tile_priority(word);
    if (layer >= 1u && layer <= 3u && stock_overview_zone(word) == layer)
        return 6u;
    if (layer == 5u && stock_overview_transport(word))
        return 6u;
    if (layer == 4u) {
        /* Show an unpowered building even when a neighboring cell of the
           same overview pixel contains an energized wire or building. */
        if (priority == 4u) return (word & 0x8000u) ? 6u : 7u;
        if (code == 0x3du || code == 0x3eu || (code >= 0x60u && code < 0x70u))
            return 5u;
    }
    return priority;
}

static uint16_t stock_overview_project_tile(const uint16_t *tiles, size_t pixel,
                                             unsigned layer) {
    const size_t x = (pixel % SC_STOCK_TILE_WIDTH) * 2u;
    const size_t y = (pixel / SC_STOCK_TILE_WIDTH) * 2u;
    const uint16_t *top = tiles + y * SC_STOCK_WORLD_WIDTH + x;
    const uint16_t *bottom = top + SC_STOCK_WORLD_WIDTH;
    const uint16_t patch[] = {top[0], top[1], bottom[0], bottom[1]};
    unsigned priority = 0u, best = 0u, majority = 0u;
    for (unsigned i = 0u; i < 4u; ++i) {
        const unsigned rank = stock_overview_layer_priority(patch[i], layer);
        if (rank > priority) {
            priority = rank;
            best = i;
        }
    }
    if (priority) return patch[best];
    for (unsigned i = 0u; i < 4u; ++i) {
        unsigned count = 0u;
        for (unsigned j = 0u; j < 4u; ++j)
            count += stock_overview_terrain(patch[i]) == stock_overview_terrain(patch[j]);
        if (count > majority) {
            majority = count;
            best = i;
        }
    }
    return patch[best];
}

/* The stock Information Map still draws at its original resolution.
   Its half-resolution metrics and eighth-resolution service grids each
   summarize a 2x2 group from the corresponding expanded simulation plane.
   Keep the ROM's palette and thresholds, and never redirect simulation reads. */
static int stock_overview_metric(const SCV11Runtime *runtime, size_t offset, uint8_t *value) {
    const uint8_t *plane = NULL;
    size_t base;
    unsigned width = 120u, height = 100u;
    int growth = 0;
    if (!sc_v11_stock_world_traffic_active(runtime)) return 0;
    const SimCityRecompStockWorldPower *world = stock_world_window->power;
    switch (runtime->current_instruction_address) {
        case 0x0291b0u: base = 0x18e28u; plane = world->population_density; break;
        case 0x0291b7u: base = 0x199e0u; plane = world->traffic; break;
        case 0x0291beu: base = 0x18270u; plane = world->pollution; break;
        case 0x0291c5u: base = 0x176b8u; plane = world->crime; break;
        case 0x0291ccu: base = 0x16b00u; plane = world->land_value; break;
        case 0x02920eu: base = 0x1ae62u; growth = 1; width = 30u; height = 25u; break;
        case 0x029215u: base = 0x1b0abu; plane = world->service_coverage[0]; width = 30u; height = 25u; break;
        case 0x02921cu: base = 0x1afe8u; plane = world->service_coverage[1]; width = 30u; height = 25u; break;
        default: return 0;
    }
    if (offset < base) return 0;
    size_t index = offset - base;
    if (growth) {
        if (index & 1u) return 0;
        index /= 2u;
    }
    const unsigned stock_width = width / 2u;
    if (index >= (size_t)stock_width * ((height + 1u) / 2u)) return 0;
    const unsigned x = (unsigned)(index % stock_width) * 2u;
    const unsigned y = (unsigned)(index / stock_width) * 2u;
    const unsigned rows = y + 1u < height ? 2u : 1u;
    int sum = 0;
    for (unsigned dy = 0u; dy < rows; ++dy)
        for (unsigned dx = 0u; dx < 2u; ++dx) {
            const size_t cell = (size_t)(y + dy) * width + x + dx;
            sum += growth ? (int)(int16_t)world->growth_rate[cell] : (int)plane[cell];
        }
    *value = (uint8_t)(sum / (int)(rows * 2u));
    return 1;
}

static uint8_t sc_v11_read_wram(const SCV11Runtime *runtime, size_t offset) {
    /* No extended tile, camera or overview hook covers lower WRAM.
       Avoid loading the guest PC and World Map state for those reads. */
    if (offset < SC_STOCK_TILE_BASE && offset < 0x16b00u)
        return runtime->machine.wram[offset];
    /* These are the overview renderer's tile/metric fetches, not gameplay
       lookups. Leave the stock loop, colors and timing in place. */
    uint8_t metric;
    if (offset >= 0x16b00u && runtime->current_instruction_address >= 0x0291b0u &&
        runtime->current_instruction_address <= 0x02921cu &&
        stock_overview_metric(runtime, offset, &metric)) return metric;
    if ((runtime->current_instruction_address == 0x028b39u ||
         runtime->current_instruction_address == 0x028f16u ||
         runtime->current_instruction_address == 0x028cf3u) &&
        offset >= SC_STOCK_TILE_BASE && offset < SC_STOCK_TILE_END &&
        sc_v11_stock_world_traffic_active(runtime)) {
        /* The power palette reads this same tile again for its power bit.
           It must never use a different representative from the first read. */
        const uint16_t word = stock_overview_project_tile(stock_world_window->tiles,
            (offset - SC_STOCK_TILE_BASE) / 2u, runtime->machine.wram[0x0d49u]);
        return (uint8_t)(word >> ((offset & 1u) * 8u));
    }
    /* The stock PPU builder still executes its original address calculation
       and bus cycles. Its data comes from the full-world tile coordinates. */
    if (runtime->current_instruction_address == 0x01c7b4u &&
        sc_v11_stock_world_camera_active(runtime) && offset >= SC_STOCK_TILE_BASE) {
        const uint8_t *wram = runtime->machine.wram;
        const unsigned x = wram[0x1d3] | ((unsigned)wram[0x1d4] << 8u);
        const unsigned y = wram[0x1d5] | ((unsigned)wram[0x1d6] << 8u);
        if (x < SC_STOCK_WORLD_WIDTH && y < SC_STOCK_WORLD_HEIGHT) {
            const uint16_t word = stock_world_window->tiles[(size_t)y * SC_STOCK_WORLD_WIDTH + x];
            if (stock_world_window->extended_tile_reads && !(offset & 1u) &&
                (x >= SC_STOCK_TILE_WIDTH || y >= SC_STOCK_TILE_HEIGHT))
                ++*stock_world_window->extended_tile_reads;
            return (uint8_t)(word >> ((offset & 1u) * 8u));
        }
    }
    if (offset >= SC_STOCK_TILE_BASE &&
        (runtime->current_instruction_address == 0x01ba78u ||
         runtime->current_instruction_address == 0x01be71u) &&
        sc_v11_stock_world_camera_active(runtime)) {
        int handled = 0;
        const uint16_t *word = sc_v11_full_world_word(runtime, 0, &handled);
        if (handled) return word ? (uint8_t)(*word >> ((offset & 1u) * 8u)) : 0xffu;
    }
    const uint16_t *word = sc_v11_stock_world_word(runtime, offset);
    return word ? (uint8_t)(*word >> ((offset & 1u) * 8u)) : runtime->machine.wram[offset];
}

static void sc_v11_write_wram(SCV11Runtime *runtime, size_t offset, uint8_t value) {
    if (offset < SC_STOCK_TILE_BASE) {
        runtime->machine.wram[offset] = value;
        return;
    }
    int handled = 0;
    uint16_t *word = NULL;
    const uint32_t pc = runtime->current_instruction_address;
    if (offset >= SC_STOCK_TILE_BASE &&
        (pc == 0x01be02u || pc == 0x01be3bu || pc == 0x01be82u) &&
        sc_v11_stock_world_camera_active(runtime))
        word = sc_v11_full_world_word(runtime, 1, &handled);
    if (!handled) word = sc_v11_stock_world_word(runtime, offset);
    if (word) {
        const unsigned shift = (offset & 1u) * 8u;
        *word = (uint16_t)((*word & ~(0xffu << shift)) | ((unsigned)value << shift));
    } else if (!handled) {
        runtime->machine.wram[offset] = value;
    }
}

void sc_v11_set_stock_map_trace(SCV11Runtime *runtime,
                               SimCityRecompStockMapAccess access, void *context) {
    map_trace_runtime = runtime;
    map_trace_access = access;
    map_trace_context = context;
}

static void sc_v11_trace_upper_wram(SCV11Runtime *runtime, uint8_t bank,
                                    uint16_t local, int write, int dma) {
    if (bank == 0x7fu) {
        map_trace_access(map_trace_context, runtime->current_instruction_address,
                         local, write, dma);
    } else if (local == 0x2180u && sc_v11_low_bank(bank) &&
               (runtime->wram_port & 0x10000u)) {
        map_trace_access(map_trace_context, runtime->current_instruction_address,
                         (uint16_t)runtime->wram_port, write, dma);
    }
}

static size_t sc_v11_lorom_offset(uint8_t bank, uint16_t address) {
    return ((((size_t)bank & 0x7fu) << 15) | (address & 0x7fffu)) & (SC_V11_ROM_SIZE - 1u);
}

static size_t sc_v11_sram_offset(uint8_t bank, uint16_t address) {
    return ((((size_t)bank & 0x0fu) << 15) | (address & 0x7fffu)) & (SC_V11_SRAM_SIZE - 1u);
}

uint8_t sc_v11_bus_speed(uint32_t address, uint8_t fast_rom_enabled) {
    uint8_t bank = (uint8_t)(address >> 16);
    uint16_t local = (uint16_t)address;

    if (sc_v11_low_bank(bank)) {
        if (local < 0x2000u) return 8u;
        if (local < 0x4000u) return 6u;
        if (local < 0x4200u) return 12u;
        if (local < 0x6000u) return 6u;
        if (local < 0x8000u) return 8u;
        return (uint8_t)((fast_rom_enabled && bank >= 0x80u) ? 6u : 8u);
    }
    return 8u;
}

static void sc_v11_access_cycle(SCV11Runtime *runtime, uint32_t address) {
    uint8_t speed = sc_v11_bus_speed(address, runtime->machine.fast_rom_enabled);
    if (!sc_v11_cpu_cycle_begin(runtime, speed)) return;
    sc_v11_scheduler_advance(runtime, speed);
}

static void sc_v11_compact_event_ledger(SCMachine *machine) {
    const uint32_t retain = SC_EVENT_CAPACITY / 2u;
    const uint32_t drop = SC_EVENT_CAPACITY - retain;
    uint32_t i;
    if (!machine || machine->hardware_event_count < SC_EVENT_CAPACITY) return;
    for (i = 0u; i < drop; ++i) {
        if (machine->hardware_events[i].kind == SC_EVENT_DMA_END) {
            machine->compacted_dma_transfers++;
        }
    }
    memmove(machine->hardware_events,
            machine->hardware_events + drop,
            (size_t)retain * sizeof(machine->hardware_events[0]));
    memset(machine->hardware_events + retain, 0,
           (size_t)drop * sizeof(machine->hardware_events[0]));
    machine->hardware_event_count = retain;
    machine->functional_event_ledger_compacted = 1u;
}

static void sc_v11_record_event(SCV11Runtime *runtime, uint8_t kind, uint8_t channel,
                                uint32_t address_a, uint16_t address_b, uint8_t value) {
    SCMachine *machine;
    SCHardwareEvent *event;

    if (!runtime || runtime->route_failed) return;
    machine = &runtime->machine;
    machine->hardware_event_sequence++;
    if (machine->hardware_event_count >= SC_EVENT_CAPACITY) {
        sc_v11_compact_event_ledger(machine);
    }
    event = &machine->hardware_events[machine->hardware_event_count++];
    event->sequence = machine->hardware_event_sequence;
    event->address_a = address_a & 0x00ffffffu;
    event->address_b = address_b;
    event->value = value;
    event->channel = channel;
    event->kind = kind;
}


static uint16_t sc_v11_vram_effective_address(const SCMachine *machine) {
    uint16_t address = machine->vram_address;
    switch (machine->vram_remap_mode & 3u) {
        default:
        case 0: return address;
        case 1: return (uint16_t)((address & 0xff00u) | ((address & 0x00e0u) >> 5) |
                                  ((address & 0x001fu) << 3));
        case 2: return (uint16_t)((address & 0xfe00u) | ((address & 0x01c0u) >> 6) |
                                  ((address & 0x003fu) << 3));
        case 3: return (uint16_t)((address & 0xfc00u) | ((address & 0x0380u) >> 7) |
                                  ((address & 0x007fu) << 3));
    }
}

static void sc_v11_record_ppu_write(SCV11Runtime *runtime, uint16_t address) {
    unsigned index;
    if (!runtime || address < 0x2100u || address > 0x213fu) return;
    index = (unsigned)(address - 0x2100u);
    runtime->ppu_register_write_count[index]++;
    runtime->ppu_register_last_frame[index] = runtime->scheduler.frame;
    runtime->ppu_register_last_scanline[index] = runtime->scheduler.scanline;
    runtime->ppu_register_last_hclock[index] = runtime->scheduler.hclock;
    if (runtime->machine.ppu_forced_blank) {
        runtime->ppu_forced_blank_write_count[index]++;
    } else if (runtime->scheduler.scanline >= 1u &&
               runtime->scheduler.scanline <= SC_V11_PPU_VISIBLE_LINES) {
        if (runtime->scheduler.hclock < 1096u) {
            runtime->ppu_active_display_writes++;
            runtime->ppu_active_nonblank_write_count[index]++;
        } else {
            runtime->ppu_hblank_writes++;
            runtime->ppu_hblank_write_count[index]++;
        }
    } else {
        runtime->ppu_vblank_writes++;
        runtime->ppu_vblank_write_count[index]++;
    }
}

static void sc_v11_record_ppu_read(SCV11Runtime *runtime, uint16_t address) {
    if (!runtime || address < 0x2100u || address > 0x213fu) return;
    runtime->ppu_register_read_count[address - 0x2100u]++;
}

static void sc_v11_update_fixed_color(SCMachine *machine, uint8_t value) {
    uint16_t component = (uint16_t)(value & 0x1fu);
    if (value & 0x20u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x001fu) | component);
    if (value & 0x40u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x03e0u) | (component << 5));
    if (value & 0x80u)
        machine->ppu_fixed_color = (uint16_t)((machine->ppu_fixed_color & ~0x7c00u) | (component << 10));
}

static void sc_v11_ppu_write_raw(SCV11Runtime *runtime, uint16_t address, uint8_t value) {
    SCMachine *machine = &runtime->machine;
    size_t index = (size_t)(address - SC_MMIO_BASE);

    machine->mmio[index] = value;
    machine->mmio_touched[index] = 1u;
    switch (address) {
        case 0x2100u:
            machine->ppu_forced_blank = (uint8_t)((value & 0x80u) != 0u);
            machine->ppu_brightness = (uint8_t)(value & 0x0fu);
            break;
        case 0x2102u:
            machine->oam_word_address = (uint16_t)((machine->oam_word_address & 0x0100u) | value);
            machine->oam_internal_address = (uint16_t)((machine->oam_word_address << 1) & 0x03ffu);
            break;
        case 0x2103u:
            machine->oam_word_address = (uint16_t)((machine->oam_word_address & 0x00ffu) |
                                        ((uint16_t)(value & 1u) << 8));
            machine->oam_priority_rotation = (uint8_t)((value & 0x80u) != 0u);
            machine->oam_internal_address = (uint16_t)((machine->oam_word_address << 1) & 0x03ffu);
            break;
        case 0x2104u: {
            uint16_t oam_address = machine->oam_internal_address;
            if (oam_address < 512u) {
                if ((oam_address & 1u) != 0u) {
                    machine->oam[oam_address - 1u] = machine->oam_write_buffer;
                    machine->oam[oam_address] = value;
                } else {
                    machine->oam_write_buffer = value;
                }
            } else {
                uint16_t physical = (uint16_t)(0x0200u | (oam_address & 0x001fu));
                if ((oam_address & 1u) == 0u) machine->oam_write_buffer = value;
                machine->oam[physical] = value;
            }
            machine->oam_internal_address = (uint16_t)((oam_address + 1u) & 0x03ffu);
            break;
        }
        case 0x2115u:
            switch (value & 3u) {
                case 0u: machine->vram_increment = 1u; break;
                case 1u: machine->vram_increment = 32u; break;
                default: machine->vram_increment = 128u; break;
            }
            machine->vram_remap_mode = (uint8_t)((value >> 2) & 3u);
            machine->vram_increment_on_high = (uint8_t)((value & 0x80u) != 0u);
            break;
        case 0x2116u:
            machine->vram_address = (uint16_t)((machine->vram_address & 0x7f00u) | value);
            break;
        case 0x2117u:
            machine->vram_address = (uint16_t)((machine->vram_address & 0x00ffu) |
                                    ((uint16_t)(value & 0x7fu) << 8));
            break;
        case 0x2118u: {
            uint16_t word = sc_v11_vram_effective_address(machine);
            machine->vram[(size_t)word * 2u] = value;
            if (!machine->vram_increment_on_high) {
                machine->vram_address = (uint16_t)((machine->vram_address +
                                        machine->vram_increment) & 0x7fffu);
            }
            break;
        }
        case 0x2119u: {
            uint16_t word = sc_v11_vram_effective_address(machine);
            machine->vram[(size_t)word * 2u + 1u] = value;
            if (machine->vram_increment_on_high) {
                machine->vram_address = (uint16_t)((machine->vram_address +
                                        machine->vram_increment) & 0x7fffu);
            }
            break;
        }
        case 0x2121u:
            machine->cgram_address = value;
            machine->cgram_second_write = 0u;
            break;
        case 0x2122u: {
            size_t byte_address = (size_t)machine->cgram_address * 2u;
            if (!machine->cgram_second_write) {
                machine->cgram_write_latch = value;
                machine->cgram_second_write = 1u;
            } else {
                machine->cgram[byte_address] = machine->cgram_write_latch;
                machine->cgram[byte_address + 1u] = (uint8_t)(value & 0x7fu);
                machine->cgram_address = (uint8_t)(machine->cgram_address + 1u);
                machine->cgram_second_write = 0u;
            }
            break;
        }
        case 0x2132u:
            sc_v11_update_fixed_color(machine, value);
            break;
        default:
            break;
    }
}

static void sc_v11_dma_hash_byte(SCV11Runtime *runtime, unsigned channel,
                                 uint32_t address_a, uint16_t address_b, uint8_t value) {
    uint64_t hash = runtime->dma_event_hash ? runtime->dma_event_hash : UINT64_C(1469598103934665603);
    uint64_t fields[4];
    unsigned i;
    fields[0] = channel;
    fields[1] = address_a & 0x00ffffffu;
    fields[2] = address_b;
    fields[3] = value;
    for (i = 0u; i < 4u; ++i) {
        unsigned byte;
        for (byte = 0u; byte < 8u; ++byte) {
            hash ^= (fields[i] >> (byte * 8u)) & 0xffu;
            hash *= UINT64_C(1099511628211);
        }
    }
    runtime->dma_event_hash = hash;
    runtime->dma_event_count++;
}

static uint8_t sc_v11_read_raw(SCV11Runtime *runtime, uint32_t address, int dma_access) {
    uint8_t bank;
    uint16_t local;
    uint8_t value;

    address &= 0x00ffffffu;
    bank = (uint8_t)(address >> 16);
    local = (uint16_t)address;
    value = runtime->open_bus;
    /* The native overview initializes its marker from the live tile
       camera at these two loads. Do not scale any other camera reads. */
    const uint32_t pc = runtime->current_instruction_address;
    if ((pc == 0x02958bu || pc == 0x029595u) &&
        !dma_access && (bank == 0x7eu || sc_v11_low_bank(bank)) &&
        sc_v11_stock_world_traffic_active(runtime)) {
        const unsigned base = pc == 0x02958bu ? 0x01bdu : 0x01bfu;
        if (local == base || local == base + 1u) {
            const uint16_t projected = (uint16_t)((int16_t)stock_coord(runtime->machine.wram, base) / 2);
            value = (uint8_t)(projected >> ((local - base) * 8u));
            runtime->open_bus = value;
            return value;
        }
    }
    if (bank == 0x7fu && sc_v11_stock_aux_bus(runtime, address, &value, 0)) {
        runtime->open_bus = value;
        return value;
    }
    if (!dma_access && (bank == 0x7fu || bank == 0x80u)) {
        uint16_t tile;
        if (stock_ship_tile(runtime, pc, &tile)) {
            value = (uint8_t)(tile >> ((address & 1u) * 8u));
            runtime->open_bus = value;
            return value;
        }
    }
    if ((bank == 0x7fu || bank == 0x80u) && runtime->current_instruction_address == 0x00b719u &&
        sc_v11_stock_world_traffic_active(runtime)) {
        /* The returning plane checks the full runway word under its tile.
           $B71D compares the raw word: preserve the stock flag behavior
           as well as the tile ID. */
        const unsigned x = stock_coord(runtime->machine.wram, 0x0a61u);
        const unsigned y = stock_coord(runtime->machine.wram, 0x0a5fu);
        const uint16_t tile = x < SC_STOCK_WORLD_WIDTH && y < SC_STOCK_WORLD_HEIGHT ?
            stock_world_window->tiles[(size_t)y * SC_STOCK_WORLD_WIDTH + x] : 0u;
        value = (uint8_t)(tile >> ((address & 1u) * 8u));
        runtime->open_bus = value;
        return value;
    }
    if (bank == 0x7fu || bank == 0x80u) {
        const uint16_t *disaster_tile = stock_disaster_start_tile(runtime, 0);
        if (disaster_tile) {
            value = (uint8_t)(*disaster_tile >> ((address & 1u) * 8u));
            runtime->open_bus = value;
            return value;
        }
    }
    /* A stock long LDA may carry from bank $7F into $80 at the end of
       its 16-bit byte index. Resolve census coordinates before WRAM/ROM
       decoding so those cells never alias the low WRAM mirror. */
    if ((bank == 0x7fu || bank == 0x80u) &&
        (runtime->current_instruction_address >> 16u) == 3u &&
        (sc_v11_stock_world_census_active(runtime) || sc_v11_stock_world_power_active(runtime) ||
         sc_v11_stock_world_density_active(runtime) || sc_v11_stock_world_environment_active(runtime) ||
         stock_disaster_lot_access(runtime))) {
        int handled = 0;
        const uint16_t *word = sc_v11_census_tile(runtime, 0, address, &handled);
        if (handled) {
            value = word ? (uint8_t)(*word >> ((address & 1u) * 8u)) : 0u;
            runtime->open_bus = value;
            return value;
        }
    }
    if (map_trace_access && runtime == map_trace_runtime)
        sc_v11_trace_upper_wram(runtime, bank, local, 0, dma_access);

    if (bank == 0x7eu || bank == 0x7fu) {
        value = sc_v11_read_wram(runtime, ((size_t)(bank - 0x7eu) << 16) | local);
    } else if (sc_v11_low_bank(bank) && local < 0x2000u) {
        value = runtime->machine.wram[local];
    } else if (sc_v11_low_bank(bank) && local == 0x2180u) {
        value = sc_v11_read_wram(runtime, runtime->wram_port & 0x1ffffu);
        runtime->wram_port = (runtime->wram_port + 1u) & 0x1ffffu;
    } else if (sc_v11_low_bank(bank) && local >= 0x2140u && local <= 0x2143u) {
        unsigned port = (unsigned)(local - 0x2140u);
        value = sc_v11_smp_cpu_read_port(runtime, port);
    } else if (sc_v11_low_bank(bank) && local >= 0x2100u && local <= 0x213fu) {
        sc_v11_record_ppu_read(runtime, local);
        switch (local) {
            case 0x2138u: {
                uint16_t oam_address = runtime->machine.oam_internal_address;
                uint16_t physical = oam_address < 512u
                    ? oam_address : (uint16_t)(0x0200u | (oam_address & 0x001fu));
                value = runtime->machine.oam[physical];
                runtime->machine.oam_internal_address = (uint16_t)((oam_address + 1u) & 0x03ffu);
                break;
            }
            case 0x2139u: {
                uint16_t word = sc_v11_vram_effective_address(&runtime->machine);
                value = runtime->machine.vram[(size_t)word * 2u];
                if (!runtime->machine.vram_increment_on_high)
                    runtime->machine.vram_address = (uint16_t)((runtime->machine.vram_address +
                        runtime->machine.vram_increment) & 0x7fffu);
                break;
            }
            case 0x213au: {
                uint16_t word = sc_v11_vram_effective_address(&runtime->machine);
                value = runtime->machine.vram[(size_t)word * 2u + 1u];
                if (runtime->machine.vram_increment_on_high)
                    runtime->machine.vram_address = (uint16_t)((runtime->machine.vram_address +
                        runtime->machine.vram_increment) & 0x7fffu);
                break;
            }
            case 0x213bu: {
                size_t byte_address = (size_t)runtime->machine.cgram_address * 2u;
                if (!runtime->machine.cgram_read_second) {
                    value = runtime->machine.cgram[byte_address];
                    runtime->machine.cgram_read_second = 1u;
                } else {
                    value = (uint8_t)((runtime->machine.cgram[byte_address + 1u] & 0x7fu) |
                                      (runtime->open_bus & 0x80u));
                    runtime->machine.cgram_address = (uint8_t)(runtime->machine.cgram_address + 1u);
                    runtime->machine.cgram_read_second = 0u;
                }
                break;
            }
            case 0x213eu:
                value = (uint8_t)((runtime->open_bus & 0x10u) | 0x01u);
                break;
            case 0x213fu:
                value = (uint8_t)((runtime->open_bus & 0x20u) |
                                  (runtime->scheduler.field ? 0x80u : 0u) | 0x03u);
                break;
            default:
                value = sc_machine_mmio_read8(&runtime->machine, local);
                break;
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x4200u && local <= 0x421fu) {
        if (local == 0x4210u) {
            value = (uint8_t)((runtime->open_bus & 0x70u) | 0x02u |
                              (runtime->scheduler.nmi_flag ? 0x80u : 0u));
            runtime->scheduler.nmi_flag = 0u;
        } else if (local == 0x4211u) {
            value = runtime->scheduler.irq_pending ? 0x80u : 0u;
            runtime->scheduler.irq_pending = 0u;
        } else if (local == 0x4212u) {
            value = (uint8_t)((runtime->open_bus & 0x3eu) |
                (runtime->scheduler.scanline >= 225u ? 0x80u : 0u) |
                ((runtime->scheduler.hclock >= 1096u && runtime->scheduler.hclock < 1364u) ? 0x40u : 0u) |
                (runtime->scheduler.auto_joypad_active ? 1u : 0u));
        } else if (local >= 0x4214u && local <= 0x4217u) {
            uint16_t result = local < 0x4216u ? runtime->quotient : runtime->remainder;
            value = (uint8_t)(result >> ((local & 1u) * 8u));
        } else if (local >= 0x4218u && local <= 0x421fu) {
            unsigned port = (unsigned)((local - 0x4218u) >> 1);
            value = (uint8_t)(runtime->auto_joypad_result[port] >>
                              ((local & 1u) * 8u));
        } else {
            value = sc_machine_mmio_read8(&runtime->machine, local);
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x4300u && local < 0x4380u) {
        value = sc_machine_mmio_read8(&runtime->machine, local);
    } else if ((bank >= 0x70u && bank <= 0x7du) || bank >= 0xf0u) {
        if (local < 0x8000u) value = runtime->sram[sc_v11_sram_offset(bank, local)];
        else value = runtime->rom[sc_v11_lorom_offset(bank, local)];
    } else if (local >= 0x8000u ||
               (bank >= 0x40u && bank <= 0x6fu) || bank >= 0xc0u) {
        value = runtime->rom[sc_v11_lorom_offset(bank, local)];
    }

    runtime->open_bus = value;
    return value;
}

static int sc_v11_write_raw(SCV11Runtime *runtime, uint32_t address, uint8_t value,
                            int dma_access, int permit_dma_start);

static int sc_v11_run_dma_mask(SCV11Runtime *runtime, uint8_t mask, uint8_t cpu_speed) {
    unsigned channel_index;
    uint32_t dma_clocks;
    uint32_t start_sync;

    if (!runtime || runtime->route_failed || cpu_speed == 0u) return 0;

    /* Manual DMA starts on the CPU cycle after the one-cycle start delay.
     * Synchronize by 2-8 master clocks to the next multiple of eight, then
     * account for global and per-channel overhead.  End synchronization is
     * relative to the speed of the CPU cycle that DMA interrupted. */
    start_sync = (uint32_t)(8u - (runtime->scheduler.master_clock & 7u));
    sc_v11_scheduler_advance(runtime, start_sync);
    dma_clocks = start_sync;
    sc_v11_scheduler_advance(runtime, 8u);
    dma_clocks += 8u;
    sc_v11_record_event(runtime, SC_EVENT_DMA_BEGIN, 0xffu, 0u, 0x420bu, mask);

    for (channel_index = 0u; channel_index < SC_DMA_CHANNEL_COUNT; ++channel_index) {
        SCDmaChannel *channel;
        uint32_t remaining;
        uint32_t byte_index;
        uint8_t mode;
        int direction_b_to_a;
        int fixed;
        int decrement;

        if ((mask & (uint8_t)(1u << channel_index)) == 0u) continue;
        channel = &runtime->machine.dma[channel_index];
        channel->active = 1u;
        mode = (uint8_t)(channel->control & 7u);
        direction_b_to_a = (channel->control & 0x80u) != 0u;
        fixed = (channel->control & 0x08u) != 0u;
        decrement = (channel->control & 0x10u) != 0u;
        remaining = channel->transfer_size ? channel->transfer_size : 65536u;

        sc_v11_scheduler_advance(runtime, 8u);
        dma_clocks += 8u;

        for (byte_index = 0u; byte_index < remaining; ++byte_index) {
            uint32_t address_a = ((uint32_t)channel->source_bank << 16) |
                                 channel->source_address;
            uint16_t address_b = (uint16_t)(0x2100u |
                (uint16_t)(channel->destination +
                sc_v11_dma_offsets[mode][byte_index & 3u]));
            uint8_t transferred;

            if (direction_b_to_a) {
                transferred = sc_v11_read_raw(runtime, address_b, 1);
                if (!sc_v11_write_raw(runtime, address_a, transferred, 1, 0)) return 0;
            } else {
                transferred = sc_v11_read_raw(runtime, address_a, 1);
                if (!sc_v11_write_raw(runtime, address_b, transferred, 1, 0)) return 0;
            }
            if (runtime->route_failed) return 0;

            sc_v11_scheduler_advance(runtime, 8u);
            dma_clocks += 8u;
            sc_v11_dma_hash_byte(runtime, channel_index, address_a, address_b, transferred);
            runtime->machine.functional_dma_bytes++;

            if (!fixed) {
                channel->source_address = decrement
                    ? (uint16_t)(channel->source_address - 1u)
                    : (uint16_t)(channel->source_address + 1u);
            }
            channel->transfer_size = (uint16_t)(channel->transfer_size - 1u);
        }

        channel->active = 0u;
        runtime->machine.mmio[(0x4302u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)channel->source_address;
        runtime->machine.mmio[(0x4303u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)(channel->source_address >> 8);
        runtime->machine.mmio[(0x4305u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)channel->transfer_size;
        runtime->machine.mmio[(0x4306u + channel_index * 0x10u) - SC_MMIO_BASE] =
            (uint8_t)(channel->transfer_size >> 8);
    }

    sc_v11_scheduler_advance(runtime,
        (uint32_t)(cpu_speed - (uint8_t)(dma_clocks % cpu_speed)));
    runtime->machine.dma_pending_mask = 0u;
    runtime->machine.mmio[0x420bu - SC_MMIO_BASE] = 0u;
    sc_v11_record_event(runtime, SC_EVENT_DMA_END, 0xffu, 0u, 0x420bu, 0u);
    return runtime->route_failed == 0u;
}

int sc_v11_process_pending_dma(SCV11Runtime *runtime, uint8_t cpu_speed) {
    uint8_t mask;
    if (!runtime || runtime->route_failed) return 0;
    mask = runtime->machine.dma_pending_mask;
    if (mask == 0u) return 1;
    if (runtime->machine.dma_start_delay_pending) {
        runtime->machine.dma_start_delay_pending = 0u;
        return 1;
    }
    return sc_v11_run_dma_mask(runtime, mask, cpu_speed);
}

static int sc_v11_write_raw(SCV11Runtime *runtime, uint32_t address, uint8_t value,
                            int dma_access, int permit_dma_start) {
    uint8_t bank;
    uint16_t local;

    address &= 0x00ffffffu;
    bank = (uint8_t)(address >> 16);
    local = (uint16_t)address;
    runtime->open_bus = value;
    if (map_trace_access && runtime == map_trace_runtime)
        sc_v11_trace_upper_wram(runtime, bank, local, 1, dma_access);
    if (bank == 0x7fu && sc_v11_stock_aux_bus(runtime, address, &value, 1))
        return 1;
    if (bank == 0x7fu || bank == 0x80u) {
        uint16_t *disaster_tile = stock_disaster_start_tile(runtime, 1);
        if (disaster_tile) {
            const unsigned shift = (address & 1u) * 8u;
            *disaster_tile = (uint16_t)((*disaster_tile & ~(0xffu << shift)) | ((unsigned)value << shift));
            return 1;
        }
    }
    if ((bank == 0x7fu || bank == 0x80u) &&
        (runtime->current_instruction_address >> 16u) == 3u &&
        (sc_v11_stock_world_census_active(runtime) || stock_disaster_lot_access(runtime))) {
        int handled = 0;
        uint16_t *word = sc_v11_census_tile(runtime, 1, address, &handled);
        if (handled) {
            if (word) {
                const unsigned shift = (address & 1u) * 8u;
                *word = (uint16_t)((*word & ~(0xffu << shift)) | ((unsigned)value << shift));
            }
            return 1;
        }
    }

    if (bank == 0x7eu || bank == 0x7fu) {
        sc_v11_write_wram(runtime, ((size_t)(bank - 0x7eu) << 16) | local, value);
    } else if (sc_v11_low_bank(bank) && local < 0x2000u) {
        runtime->machine.wram[local] = value;
    } else if (sc_v11_low_bank(bank) && local >= 0x2180u && local <= 0x2183u) {
        if (local == 0x2180u) {
            sc_v11_write_wram(runtime, runtime->wram_port & 0x1ffffu, value);
            runtime->wram_port = (runtime->wram_port + 1u) & 0x1ffffu;
        } else if (local == 0x2181u) {
            runtime->wram_port = (runtime->wram_port & 0x1ff00u) | value;
        } else if (local == 0x2182u) {
            runtime->wram_port = (runtime->wram_port & 0x100ffu) | ((uint32_t)value << 8);
        } else {
            runtime->wram_port = (runtime->wram_port & 0x0ffffu) |
                                 ((uint32_t)(value & 1u) << 16);
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x2140u && local <= 0x2143u) {
        if (!sc_v11_smp_cpu_write_port(runtime,
                                       (unsigned)(local - 0x2140u), value)) {
            return sc_v11_fail(runtime, address, "CPU-to-S-SMP port write failed");
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x2100u && local <= 0x213fu) {
        if (dma_access) {
            sc_v11_ppu_write_raw(runtime, local, value);
        } else if (!sc_machine_mmio_write8(&runtime->machine, local, value)) {
            return sc_v11_fail(runtime, address, "PPU register write failed");
        }
        if (local == 0x210du) {
            uint16_t combined = (uint16_t)(((uint16_t)value << 8) |
                                (runtime->bgofs_latch & 0xf8u) |
                                (runtime->bghofs_latch & 7u));
            runtime->bgofs_latch = value;
            runtime->bghofs_latch = value;
            runtime->bg_scroll[0] = combined & 0x03ffu;
        } else if (local == 0x210eu) {
            runtime->bg_scroll[1] = (uint16_t)(((uint16_t)value << 8) |
                                    runtime->bgofs_latch) & 0x03ffu;
            runtime->bgofs_latch = value;
        } else if (local == 0x210fu || local == 0x2111u) {
            unsigned index = local == 0x210fu ? 2u : 4u;
            runtime->bg_scroll[index] = (uint16_t)(((uint16_t)value << 8) |
                                        (runtime->bgofs_latch & 0xf8u) |
                                        (runtime->bghofs_latch & 7u)) & 0x03ffu;
            runtime->bgofs_latch = value;
            runtime->bghofs_latch = value;
        } else if (local == 0x2110u || local == 0x2112u ||
                   local == 0x2113u || local == 0x2114u) {
            unsigned index;
            if (local == 0x2110u) index = 3u;
            else if (local == 0x2112u) index = 5u;
            else index = local == 0x2113u ? 6u : 7u;
            runtime->bg_scroll[index] = (uint16_t)(((uint16_t)value << 8) |
                                        runtime->bgofs_latch) & 0x03ffu;
            runtime->bgofs_latch = value;
        }
        sc_v11_record_ppu_write(runtime, local);
    } else if (sc_v11_low_bank(bank) && local >= 0x4200u && local <= 0x421fu) {
        if (local == 0x4202u) {
            runtime->mul_a = value;
        } else if (local == 0x4203u) {
            runtime->mul_b = value;
            runtime->remainder = (uint16_t)(runtime->mul_a * runtime->mul_b);
        } else if (local == 0x4204u) {
            runtime->dividend = (uint16_t)((runtime->dividend & 0xff00u) | value);
        } else if (local == 0x4205u) {
            runtime->dividend = (uint16_t)((runtime->dividend & 0x00ffu) |
                                ((uint16_t)value << 8));
        } else if (local == 0x4206u) {
            runtime->divisor = value;
            if (value) {
                runtime->quotient = (uint16_t)(runtime->dividend / value);
                runtime->remainder = (uint16_t)(runtime->dividend % value);
            } else {
                runtime->quotient = 0xffffu;
                runtime->remainder = runtime->dividend;
            }
        }
        if (!sc_machine_mmio_write8(&runtime->machine, local, value)) {
            return sc_v11_fail(runtime, address, "CPU I/O register write failed");
        }
        if (local == 0x420bu && permit_dma_start && value != 0u) {
            runtime->machine.dma_pending_mask = value;
            runtime->machine.dma_start_delay_pending = 1u;
            sc_v11_record_event(runtime, SC_EVENT_DMA_QUEUED, 0xffu,
                                address, local, value);
        }
    } else if (sc_v11_low_bank(bank) && local >= 0x4300u && local < 0x4380u) {
        if (!sc_machine_mmio_write8(&runtime->machine, local, value)) {
            return sc_v11_fail(runtime, address, "DMA register write failed");
        }
    } else if (((bank >= 0x70u && bank <= 0x7du) || bank >= 0xf0u) &&
               local < 0x8000u) {
        {
            size_t offset = sc_v11_sram_offset(bank, local);
            if (runtime->sram[offset] != value) {
                runtime->sram[offset] = value;
                runtime->sram_dirty = 1u;
            }
        }
    } else if (local >= 0x8000u ||
               (bank >= 0x40u && bank <= 0x6fu) || bank >= 0xc0u) {
        return sc_v11_fail(runtime, address, "attempted write to immutable cartridge ROM");
    } else {
        return sc_v11_fail(runtime, address, "unsupported A-bus write");
    }
    return runtime->route_failed == 0u;
}

uint8_t sc_v11_bus_peek8(const SCV11Runtime *runtime, uint32_t address) {
    uint8_t bank;
    uint16_t local;
    if (!runtime || !runtime->rom || runtime->rom_size != SC_V11_ROM_SIZE) return 0u;
    address &= 0x00ffffffu;
    bank = (uint8_t)(address >> 16);
    local = (uint16_t)address;
    if (bank == 0x7eu || bank == 0x7fu)
        return sc_v11_read_wram(runtime, ((size_t)(bank - 0x7eu) << 16) | local);
    if (sc_v11_low_bank(bank) && local < 0x2000u)
        return runtime->machine.wram[local];
    if (((bank >= 0x70u && bank <= 0x7du) || bank >= 0xf0u) && local < 0x8000u)
        return runtime->sram[sc_v11_sram_offset(bank, local)];
    if (local >= 0x8000u || (bank >= 0x40u && bank <= 0x6fu) || bank >= 0xc0u)
        return runtime->rom[sc_v11_lorom_offset(bank, local)];
    if (sc_v11_low_bank(bank) && local >= SC_MMIO_BASE && local < SC_MMIO_LIMIT)
        return runtime->machine.mmio[local - SC_MMIO_BASE];
    return runtime->open_bus;
}

uint16_t sc_v11_bus_peek16(const SCV11Runtime *runtime, uint32_t address) {
    uint8_t low = sc_v11_bus_peek8(runtime, address);
    uint8_t high = sc_v11_bus_peek8(runtime, (address + 1u) & 0x00ffffffu);
    return (uint16_t)(low | ((uint16_t)high << 8));
}

uint8_t sc_v11_bus_read8(SCV11Runtime *runtime, uint32_t address) {
    uint8_t bank; uint16_t local; uint8_t value;
    if (!runtime || runtime->route_failed) return 0u;
    address &= 0x00ffffffu; bank=(uint8_t)(address>>16); local=(uint16_t)address;
    if (sc_v11_low_bank(bank) && local>=0x2140u && local<=0x2143u) {
        if (!sc_v11_cpu_cycle_begin(runtime, 6u)) return 0u;
        sc_v11_scheduler_advance(runtime,2u);
        value=sc_v11_read_raw(runtime,address,0);
        sc_v11_scheduler_advance(runtime,4u);
        return value;
    }
    sc_v11_access_cycle(runtime, address);
    return sc_v11_read_raw(runtime, address, 0);
}

uint16_t sc_v11_bus_read16(SCV11Runtime *runtime, uint32_t address) {
    uint8_t low = sc_v11_bus_read8(runtime, address);
    uint8_t high = sc_v11_bus_read8(runtime, (address + 1u) & 0x00ffffffu);
    return (uint16_t)(low | ((uint16_t)high << 8));
}

void sc_v11_bus_write8(SCV11Runtime *runtime, uint32_t address, uint8_t value) {
    if (!runtime || runtime->route_failed) return;
    sc_v11_access_cycle(runtime, address & 0x00ffffffu);
    (void)sc_v11_write_raw(runtime, address, value, 0, 1);
}

void sc_v11_bus_write16(SCV11Runtime *runtime, uint32_t address, uint16_t value) {
    sc_v11_bus_write8(runtime, address, (uint8_t)value);
    sc_v11_bus_write8(runtime, (address + 1u) & 0x00ffffffu, (uint8_t)(value >> 8));
}
