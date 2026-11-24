#ifndef SC_WORLD_CATALOG_DRAW_H
#define SC_WORLD_CATALOG_DRAW_H

#include "simcity_static_recomp.h"

void sc_world_catalog_draw(enum SimCityWorldCatalogScreen screen, unsigned id,
    int has_resume, unsigned width, unsigned margin, uint16_t *bgr555, uint32_t *bgra);

#endif
