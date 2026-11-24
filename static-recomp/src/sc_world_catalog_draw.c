#include "sc_world_catalog_draw.h"
#include "sc_stock_map_trace.h"
#include <stdio.h>
#include <string.h>

/* Compact original 5x7 menu font. Columns are ordered left to right. */
static const uint8_t letters[26][5] = {
    {0x7e,0x09,0x09,0x09,0x7e}, {0x7f,0x49,0x49,0x49,0x36}, {0x3e,0x41,0x41,0x41,0x22},
    {0x7f,0x41,0x41,0x22,0x1c}, {0x7f,0x49,0x49,0x49,0x41}, {0x7f,0x09,0x09,0x09,0x01},
    {0x3e,0x41,0x49,0x49,0x7a}, {0x7f,0x08,0x08,0x08,0x7f}, {0x00,0x41,0x7f,0x41,0x00},
    {0x20,0x40,0x41,0x3f,0x01}, {0x7f,0x08,0x14,0x22,0x41}, {0x7f,0x40,0x40,0x40,0x40},
    {0x7f,0x02,0x0c,0x02,0x7f}, {0x7f,0x04,0x08,0x10,0x7f}, {0x3e,0x41,0x41,0x41,0x3e},
    {0x7f,0x09,0x09,0x09,0x06}, {0x3e,0x41,0x51,0x21,0x5e}, {0x7f,0x09,0x19,0x29,0x46},
    {0x46,0x49,0x49,0x49,0x31}, {0x01,0x01,0x7f,0x01,0x01}, {0x3f,0x40,0x40,0x40,0x3f},
    {0x1f,0x20,0x40,0x20,0x1f}, {0x7f,0x20,0x18,0x20,0x7f}, {0x63,0x14,0x08,0x14,0x63},
    {0x07,0x08,0x70,0x08,0x07}, {0x61,0x51,0x49,0x45,0x43}
};
static const uint8_t digits[10][5] = {
    {0x3e,0x51,0x49,0x45,0x3e}, {0x00,0x42,0x7f,0x40,0x00}, {0x62,0x51,0x49,0x49,0x46},
    {0x22,0x41,0x49,0x49,0x36}, {0x18,0x14,0x12,0x7f,0x10}, {0x2f,0x49,0x49,0x49,0x31},
    {0x3e,0x49,0x49,0x49,0x32}, {0x01,0x71,0x09,0x05,0x03}, {0x36,0x49,0x49,0x49,0x36},
    {0x26,0x49,0x49,0x49,0x3e}
};

typedef struct { unsigned width, margin; uint16_t *raw; uint32_t *pixels; } Canvas;

static void pixel(const Canvas *c, unsigned x, unsigned y, uint16_t color) {
    const unsigned i = y * c->width + c->margin + x;
    const unsigned r = (color & 31u) * 255u / 31u, g = ((color >> 5) & 31u) * 255u / 31u;
    const unsigned b = ((color >> 10) & 31u) * 255u / 31u;
    c->raw[i] = color;
    c->pixels[i] = b | g << 8u | r << 16u;
}

static void rect(const Canvas *c, unsigned x, unsigned y, unsigned w, unsigned h, uint16_t color) {
    for (unsigned j = y; j < y + h; ++j)
        for (unsigned i = x; i < x + w; ++i) pixel(c, i, j, color);
}

static uint8_t glyph(int ch, unsigned column) {
    static const uint8_t slash[5] = {0x20,0x10,0x08,0x04,0x02};
    static const uint8_t percent[5] = {0x63,0x13,0x08,0x64,0x63};
    static const uint8_t arrow[5] = {0x41,0x22,0x14,0x08,0};
    if (ch >= 'a' && ch <= 'z') ch += 'A' - 'a';
    if (ch >= 'A' && ch <= 'Z') return letters[ch - 'A'][column];
    if (ch >= '0' && ch <= '9') return digits[ch - '0'][column];
    if (ch == '/') return slash[column];
    if (ch == '%') return percent[column];
    if (ch == '>') return arrow[column];
    if (ch == ':') return column == 2u ? 0x24u : 0u;
    return 0u;
}

static void text(const Canvas *c, unsigned x, unsigned y, const char *s, uint16_t color) {
    for (; *s && x + 5u <= 256u; ++s, x += 6u)
        for (unsigned i = 0u; i < 5u; ++i) {
            const uint8_t bits = glyph(*s, i);
            for (unsigned j = 0u; j < 7u; ++j)
                if (bits & (1u << j)) pixel(c, x + i, y + j, color);
        }
}

static void main_menu_world_maps(const Canvas *c, int focused, int has_resume, uint16_t color) {
    /* With a save, the native cursor table is 100/124/148/172 rather
       than 112/136/160 (plus seven framebuffer scanlines). Raise all
       four native rows together so Scenario and World Maps don't overlap.
       The sign border and the native menu/controller state are unchanged. */
    if (has_resume) {
        enum { LEFT = 48, SPAN = 170, FIRST = 105, END = 195, SHIFT = 12 };
        for (unsigned y = FIRST; y < END; ++y) {
            const unsigned src = y * c->width + c->margin + LEFT;
            const unsigned dest = src - SHIFT * c->width;
            memcpy(c->raw + dest, c->raw + src, SPAN * sizeof(*c->raw));
            memcpy(c->pixels + dest, c->pixels + src, SPAN * sizeof(*c->pixels));
        }
        rect(c, LEFT, END - SHIFT, SPAN, SHIFT, 0u);
    }
    const char *label = "WORLD MAPS";
    for (unsigned i = 0u; label[i]; ++i)
        for (unsigned x = 0u; x < 5u; ++x) {
            const uint8_t bits = glyph(label[i], x);
            for (unsigned y = 0u; y < 7u; ++y)
                if (bits & (1u << y))
                    rect(c, 74u + 8u * i + x, 191u + 2u * y, 1u, 2u, color);
        }
    if (focused) {
        /* Replace the stock cursor while the extra row has focus. */
        rect(c, 54u, 93u, 17u, 112u, 0u);
        for (unsigned y = 0u; y < 14u; ++y) {
            const unsigned span = y < 7u ? y + 1u : 14u - y;
            rect(c, 57u, 191u + y, span, 1u, color);
        }
    }
}

enum { PREVIEW_W = SC_STOCK_WORLD_WIDTH / 2, PREVIEW_H = SC_STOCK_WORLD_HEIGHT / 2 };

#if defined(_MSC_VER)
#define CATALOG_LOCAL __declspec(thread)
#else
#define CATALOG_LOCAL _Thread_local
#endif

typedef struct {
    uint16_t pixels[PREVIEW_H][PREVIEW_W];
} TerrainPreview;

static uint16_t terrain_color(uint16_t tile) {
    /* The template writer uses the original map's clear, tree, deep-water
       and shore tiles. Keep those distinctions in the overview. */
    if (tile == 0u) return 0x26abu;
    if (tile >= 0x14u) return 0x19e5u;
    if (tile == 2u) return 0x6605u;
    return 0x6ec9u;
}

static const TerrainPreview *terrain_preview(unsigned id) {
    /* Keep each preview after it is first drawn. Moving back and forth
       through the catalog should not regenerate terrain on a frame deadline.
       The synchronous and prepared renderers retain independent caches. */
    static CATALOG_LOCAL TerrainPreview previews[SIMCITY_WORLD_MAP_TEMPLATE_COUNT];
    static CATALOG_LOCAL unsigned completed;
    if (!id || id > SIMCITY_WORLD_MAP_TEMPLATE_COUNT) return NULL;
    TerrainPreview *const preview = &previews[id - 1u];
    const unsigned bit = 1u << (id - 1u);
    if (!(completed & bit)) {
        uint16_t tiles[SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT];
        if (!simcity_recomp_world_map_template_tiles(id, tiles, sizeof(tiles) / sizeof(tiles[0])))
            return NULL;
        for (unsigned y = 0u; y < PREVIEW_H; ++y) {
            for (unsigned x = 0u; x < PREVIEW_W; ++x) {
                const unsigned p = 2u * y * SC_STOCK_WORLD_WIDTH + 2u * x;
                const uint16_t colors[] = {terrain_color(tiles[p]), terrain_color(tiles[p + 1u]),
                    terrain_color(tiles[p + SC_STOCK_WORLD_WIDTH]),
                    terrain_color(tiles[p + SC_STOCK_WORLD_WIDTH + 1u])};
                unsigned r = 0u, g = 0u, b = 0u;
                /* Each overview pixel covers exactly four adjacent city
                   tiles; average them so narrow features stay visible. */
                for (unsigned i = 0u; i < 4u; ++i) {
                    r += colors[i] & 31u;
                    g += (colors[i] >> 5u) & 31u;
                    b += (colors[i] >> 10u) & 31u;
                }
                preview->pixels[y][x] = (uint16_t)(((r + 2u) / 4u) |
                    ((g + 2u) / 4u) << 5u | ((b + 2u) / 4u) << 10u);
            }
        }
        completed |= bit;
    }
    return preview;
}

void sc_world_catalog_draw(enum SimCityWorldCatalogScreen screen, unsigned id,
    int has_resume, unsigned width, unsigned margin, uint16_t *bgr555, uint32_t *bgra) {
    if (screen == SIMCITY_WORLD_CATALOG_HIDDEN) return;
    const Canvas c = {width, margin, bgr555, bgra};
    const uint16_t rim = 0x526au, gold = 0x2bffu, white = 0x7fffu, selected = 0x24e4u;
    if (screen != SIMCITY_WORLD_CATALOG_LIST) {
        main_menu_world_maps(&c, screen == SIMCITY_WORLD_CATALOG_FOCUSED, has_resume, gold);
        return;
    }
    const SimCityWorldMapTemplateInfo *map = simcity_recomp_world_map_template_info(id);
    if (!map) {
        id = 1u;
        map = simcity_recomp_world_map_template_info(id);
    }
    rect(&c, 5u, 77u, 246u, 153u, rim);
    rect(&c, 7u, 79u, 242u, 149u, 0x0c42u);
    text(&c, 13u, 84u, "WORLD MAPS", gold);
    text(&c, 128u, 84u, "240X200 MAP", gold);
    for (unsigned i = 1u; i <= SIMCITY_WORLD_MAP_TEMPLATE_COUNT; ++i) {
        const SimCityWorldMapTemplateInfo *entry = simcity_recomp_world_map_template_info(i);
        const unsigned y = 98u + (i - 1u) * 12u;
        if (i == id) {
            rect(&c, 10u, y - 2u, 114u, 11u, selected);
            text(&c, 13u, y, ">", gold);
        }
        text(&c, 21u, y, entry->name, white);
    }
    const TerrainPreview *preview = terrain_preview(id);
    if (preview) {
        rect(&c, 127u, 95u, PREVIEW_W + 2u, PREVIEW_H + 2u, rim);
        for (unsigned y = 0u; y < PREVIEW_H; ++y)
            for (unsigned x = 0u; x < PREVIEW_W; ++x)
                pixel(&c, 128u + x, 96u + y, preview->pixels[y][x]);
    }
    char ratio[24];
    (void)snprintf(ratio, sizeof(ratio), "LAND %u%%  SEA %u%%", map->land_percent, 100u - map->land_percent);
    text(&c, 128u, 203u, ratio, white);
    rect(&c, 12u, 213u, 232u, 1u, rim);
    text(&c, 13u, 218u, "UP/DOWN  B:SELECT  X:BACK", gold);
}
