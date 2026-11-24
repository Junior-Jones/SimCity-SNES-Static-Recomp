#ifndef SC_STOCK_MAP_TRACE_H
#define SC_STOCK_MAP_TRACE_H

#include "sc_v11_runtime.h"
#include "simcity_static_recomp.h"

void sc_v11_set_stock_map_trace(SCV11Runtime *runtime,
                               SimCityRecompStockMapAccess access, void *context);

enum {
    SC_STOCK_TILE_WIDTH = 120, SC_STOCK_TILE_HEIGHT = 100,
    SC_STOCK_TILE_BASE = 0x10200,
    SC_STOCK_TILE_END = SC_STOCK_TILE_BASE + SC_STOCK_TILE_WIDTH * SC_STOCK_TILE_HEIGHT * 2,
    SC_STOCK_WORLD_WIDTH = 240, SC_STOCK_WORLD_HEIGHT = 200
};

typedef struct SCStockWorldWindow {
    const SCV11Runtime *runtime;
    uint16_t *tiles;
    unsigned x, y;
    int full_camera;
    uint32_t *extended_tile_reads;
    SimCityRecompStockWorldCensus *census;
    SimCityRecompStockWorldPower *power;
    int continuous;
} SCStockWorldWindow;

void sc_v11_set_stock_world_window(const SCStockWorldWindow *window);
int sc_v11_stock_world_camera_active(const SCV11Runtime *runtime);
int sc_v11_stock_world_census_active(const SCV11Runtime *runtime);
int sc_v11_stock_world_power_active(const SCV11Runtime *runtime);
int sc_v11_stock_world_traffic_active(const SCV11Runtime *runtime);
int sc_v11_stock_world_density_active(const SCV11Runtime *runtime);
int sc_v11_stock_world_environment_active(const SCV11Runtime *runtime);
void sc_v11_stock_world_census_instruction(SCV11Runtime *runtime, uint16_t pc);

#endif
