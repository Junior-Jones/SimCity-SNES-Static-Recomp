#ifndef SC_WORLD_MAP_H
#define SC_WORLD_MAP_H

#include "simcity_static_recomp.h"

typedef struct SCWorldMap SCWorldMap;
SCWorldMap *sc_world_map_create(void);
unsigned sc_world_map_step(SCWorldMap *world, uint16_t input);
void sc_world_map_render(const SCWorldMap *world, uint32_t *pixels,
                         unsigned width, unsigned height);
void sc_world_map_status(const SCWorldMap *world, SimCityWorldMapStatus *status);
int sc_world_map_tile(const SCWorldMap *world, int x, int y, uint16_t *tile);

#endif
