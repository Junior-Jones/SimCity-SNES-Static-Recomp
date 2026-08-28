#include "sc_v28_video.h"
#include "sc_core_internal.h"

#include <stdio.h>
#include <string.h>

/*
 * SimCity fixed-purpose SNES PPU renderer.
 *
 * The S-CPU remains statically translated.  This file models the game-facing
 * PPU hardware from register and memory state; it contains no scene names,
 * route contracts, title exceptions, or gameplay patches.  The reset-to-title
 * Current execution reaches Mode 1, while the tile decoder and compositor cover
 * the ordinary tiled backgrounds used by modes 0-6 so future reached states
 * fail at a real hardware boundary rather than at a hard-coded screen list.
 */

typedef struct PpuLineView {
    const uint8_t *r;
    const uint16_t *scroll;
    uint16_t fixed_color;
} PpuLineView;

typedef struct PpuPixel {
    uint16_t color;
    uint8_t palette_index;
    uint8_t priority;
    uint8_t layer;
    uint8_t obj_palette;
    uint8_t transparent;
} PpuPixel;

typedef struct PpuObject {
    uint16_t x;
    uint8_t y;
    uint8_t character;
    uint8_t name_select;
    uint8_t palette;
    uint8_t priority;
    uint8_t hflip;
    uint8_t vflip;
    uint8_t width;
    uint8_t height;
    uint8_t index;
} PpuObject;

typedef struct PpuObjectLine {
    PpuObject object;
    int16_t display_x;
    uint8_t line;
} PpuObjectLine;

typedef struct PpuObjectTile {
    int16_t x;
    uint8_t priority;
    uint8_t palette;
    uint8_t hflip;
    uint32_t data;
} PpuObjectTile;

static const SCV11Runtime *g_runtime;
static const uint8_t *g_vram;
static const uint8_t *g_cgram;
static const uint8_t *g_oam;

#define SC_CITY_MAP_WIDTH 120
#define SC_CITY_MAP_HEIGHT 100
#define SC_CITY_MAP_WRAM_OFFSET 0x10200u
#define SC_CITY_VIEW_X_OFFSET 0x01bdu
#define SC_CITY_VIEW_Y_OFFSET 0x01bfu
#define SC_CITY_FINE_X_OFFSET 0x0139u
#define SC_CITY_FINE_Y_OFFSET 0x0137u
#define SC_CITY_BG1_TABLE 0x02cf2du
#define SC_CITY_BG2_TABLE 0x02d6a9u

static uint8_t current_reg(uint16_t address) {
    return g_runtime->machine.mmio[address - SC_MMIO_BASE];
}

static uint8_t view_reg(const PpuLineView *view, uint16_t address) {
    unsigned index = (unsigned)(address - 0x2100u);
    return index < SC_V11_PPU_RENDER_REGISTER_COUNT ? view->r[index] : 0u;
}

static uint16_t read_vram16(uint32_t address) {
    return (uint16_t)(g_vram[address & 0xffffu] |
           ((uint16_t)g_vram[(address + 1u) & 0xffffu] << 8));
}

static uint16_t read_wram16(size_t address) {
    return (uint16_t)(g_runtime->machine.wram[address] |
           ((uint16_t)g_runtime->machine.wram[address + 1u] << 8));
}

static size_t lorom_offset(uint32_t address) {
    return (size_t)(((address >> 16) & 0x7fu) * 0x8000u) +
           (size_t)(address & 0x7fffu);
}

static uint16_t read_rom16(uint32_t address) {
    size_t offset = lorom_offset(address);
    if (!g_runtime->rom || offset + 1u >= g_runtime->rom_size) return 0u;
    return (uint16_t)(g_runtime->rom[offset] |
           ((uint16_t)g_runtime->rom[offset + 1u] << 8));
}

static uint16_t cgram_color(unsigned index) {
    size_t address = (size_t)(index & 255u) * 2u;
    return (uint16_t)(g_cgram[address] |
           ((uint16_t)g_cgram[address + 1u] << 8)) & 0x7fffu;
}

static uint32_t bgra(uint16_t color) {
    uint32_t red = (color & 31u) * 255u / 31u;
    uint32_t green = ((color >> 5) & 31u) * 255u / 31u;
    uint32_t blue = ((color >> 10) & 31u) * 255u / 31u;
    return blue | (green << 8) | (red << 16);
}

static uint16_t apply_brightness(uint16_t color, unsigned brightness) {
    unsigned red = color & 31u;
    unsigned green = (color >> 5) & 31u;
    unsigned blue = (color >> 10) & 31u;
    red = red * brightness / 15u;
    green = green * brightness / 15u;
    blue = blue * brightness / 15u;
    return (uint16_t)(red | (green << 5) | (blue << 10));
}

static uint16_t color_add(uint16_t a, uint16_t b, int half) {
    unsigned ar = a & 31u, ag = (a >> 5) & 31u, ab = (a >> 10) & 31u;
    unsigned br = b & 31u, bg = (b >> 5) & 31u, bb = (b >> 10) & 31u;
    unsigned red = ar + br, green = ag + bg, blue = ab + bb;
    if (half) {
        red >>= 1;
        green >>= 1;
        blue >>= 1;
    } else {
        if (red > 31u) red = 31u;
        if (green > 31u) green = 31u;
        if (blue > 31u) blue = 31u;
    }
    return (uint16_t)(red | (green << 5) | (blue << 10));
}

static uint16_t color_subtract(uint16_t a, uint16_t b, int half) {
    int red = (int)(a & 31u) - (int)(b & 31u);
    int green = (int)((a >> 5) & 31u) - (int)((b >> 5) & 31u);
    int blue = (int)((a >> 10) & 31u) - (int)((b >> 10) & 31u);
    if (red < 0) red = 0;
    if (green < 0) green = 0;
    if (blue < 0) blue = 0;
    if (half) {
        red >>= 1;
        green >>= 1;
        blue >>= 1;
    }
    return (uint16_t)(red | (green << 5) | (blue << 10));
}

static PpuLineView line_view(const SCV11Runtime *runtime, unsigned y) {
    PpuLineView view;
    const SCV11PpuLineState *line = y < SC_V11_PPU_VISIBLE_LINES
        ? &runtime->ppu_completed_line_state[y] : NULL;
    if (line && runtime->ppu_completed_frame == runtime->scheduler.frame &&
        line->valid && line->frame == runtime->scheduler.frame) {
        view.r = line->registers;
        view.scroll = line->bg_scroll;
        view.fixed_color = line->fixed_color;
    } else {
        view.r = runtime->machine.mmio;
        view.scroll = runtime->bg_scroll;
        view.fixed_color = runtime->machine.ppu_fixed_color;
    }
    return view;
}

static unsigned bg_bpp(unsigned mode, unsigned layer) {
    static const uint8_t bpp[7][4] = {
        {2u, 2u, 2u, 2u},
        {4u, 4u, 2u, 0u},
        {4u, 4u, 0u, 0u},
        {8u, 4u, 0u, 0u},
        {8u, 2u, 0u, 0u},
        {4u, 2u, 0u, 0u},
        {4u, 0u, 0u, 0u}
    };
    return mode < 7u && layer < 4u ? bpp[mode][layer] : 0u;
}

static uint8_t bg_priority(unsigned mode, unsigned layer, unsigned high,
                           int mode1_bg3_high) {
    static const uint8_t mode0[4][2] = {
        {8u, 11u}, {7u, 10u}, {2u, 5u}, {1u, 4u}
    };
    static const uint8_t mode1[4][2] = {
        {6u, 9u}, {5u, 8u}, {1u, 3u}, {0u, 0u}
    };
    static const uint8_t mode2to5[4][2] = {
        {3u, 9u}, {1u, 7u}, {0u, 0u}, {0u, 0u}
    };
    static const uint8_t mode6[4][2] = {
        {3u, 9u}, {0u, 0u}, {0u, 0u}, {0u, 0u}
    };
    if (layer >= 4u) return 0u;
    if (mode == 0u) return mode0[layer][high != 0u];
    if (mode == 1u) {
        if (layer == 2u && high && mode1_bg3_high) return 11u;
        return mode1[layer][high != 0u];
    }
    if (mode >= 2u && mode <= 5u) return mode2to5[layer][high != 0u];
    if (mode == 6u) return mode6[layer][high != 0u];
    return 0u;
}

static uint8_t obj_priority(unsigned mode, unsigned priority) {
    static const uint8_t mode0[4] = {3u, 6u, 9u, 12u};
    static const uint8_t mode1[4] = {2u, 4u, 7u, 10u};
    static const uint8_t other[4] = {2u, 4u, 6u, 8u};
    priority &= 3u;
    if (mode == 0u) return mode0[priority];
    if (mode == 1u) return mode1[priority];
    return other[priority];
}

static uint16_t direct_color(uint8_t palette, uint8_t pixel) {
    unsigned red = ((pixel & 0x07u) << 2) | ((palette & 0x01u) << 1);
    unsigned green = ((pixel & 0x38u) >> 1) | ((palette & 0x02u) << 3);
    unsigned blue = ((pixel & 0xc0u) >> 3) | ((palette & 0x04u) << 2);
    return (uint16_t)((red & 31u) | ((green & 31u) << 5) |
                      ((blue & 31u) << 10));
}

static unsigned wrap_coordinate(int value, unsigned extent) {
    int remainder = value % (int)extent;
    if (remainder < 0) remainder += (int)extent;
    return (unsigned)remainder;
}

static uint16_t city_map_word(int map_x, int map_y) {
    size_t offset;
    if (map_x < 0 || map_x >= SC_CITY_MAP_WIDTH ||
        map_y < 0 || map_y >= SC_CITY_MAP_HEIGHT)
        return 0u;
    offset = SC_CITY_MAP_WRAM_OFFSET +
             ((size_t)map_y * SC_CITY_MAP_WIDTH + (size_t)map_x) * 2u;
    return read_wram16(offset);
}

static uint16_t city_map_tile_entry(unsigned layer, int map_x, int map_y) {
    uint16_t map_word = city_map_word(map_x, map_y);
    uint16_t code = (uint16_t)(map_word & 0x03ffu);
    if (map_x < 0 || map_x >= SC_CITY_MAP_WIDTH ||
        map_y < 0 || map_y >= SC_CITY_MAP_HEIGHT)
        return layer == 0u ? 0x0300u : 0x0301u;
    if (layer == 0u && (map_word & 0x4000u)) {
        uint16_t upper_left = city_map_word(map_x - 1, map_y - 1);
        return (upper_left & 0x8000u) ? 0x0300u : 0x1376u;
    }
    return read_rom16((layer == 0u ? SC_CITY_BG1_TABLE :
                       SC_CITY_BG2_TABLE) + (uint32_t)code * 2u);
}

static int city_background_pixel(const PpuLineView *view, unsigned layer,
                                 int city_source_x, int y,
                                 PpuPixel *pixel) {
    unsigned mode = view_reg(view, 0x2105u) & 7u;
    unsigned bpp = bg_bpp(mode, layer);
    uint8_t nba;
    uint32_t char_base;
    int map_x;
    int map_y;
    unsigned px;
    unsigned py;
    uint16_t entry;
    uint16_t tile;
    uint8_t palette_group;
    uint8_t color = 0u;
    uint32_t row_address;
    unsigned bit;
    unsigned plane;
    int sample_x = city_source_x;
    int sample_y = y + 1;
    unsigned mosaic_size;
    int world_x;
    int world_y;
    int view_x;
    int view_y;

    memset(pixel, 0, sizeof(*pixel));
    pixel->transparent = 1u;
    if (layer > 1u || bpp == 0u) return 1;

    mosaic_size = ((unsigned)view_reg(view, 0x2106u) >> 4) + 1u;
    if ((view_reg(view, 0x2106u) & (1u << layer)) && mosaic_size > 1u) {
        sample_x -= (int)wrap_coordinate(sample_x, mosaic_size);
        sample_y -= (int)wrap_coordinate(sample_y, mosaic_size);
    }

    /*
     * The city map is 120x100 8-pixel cells in WRAM.  The original game only
     * streams a 32-cell-wide ring into VRAM, so reading that tilemap outside
     * x=0..255 repeats unrelated columns.  Reconstruct margin cells from the
     * authoritative map instead.  $01BD/$01BF are the top-left map cell and
     * $0139/$0137 provide the sub-cell camera position.
     */
    view_x = (int)(int16_t)read_wram16(SC_CITY_VIEW_X_OFFSET);
    view_y = (int)(int16_t)read_wram16(SC_CITY_VIEW_Y_OFFSET);
    world_x = view_x * 8 +
              (int)(read_wram16(SC_CITY_FINE_X_OFFSET) & 7u) + sample_x;
    world_y = view_y * 8 +
              (int)(read_wram16(SC_CITY_FINE_Y_OFFSET) & 7u) + (int)sample_y;

    map_x = world_x >= 0 ? world_x / 8 : -((7 - world_x) / 8);
    map_y = world_y >= 0 ? world_y / 8 : -((7 - world_y) / 8);
    px = wrap_coordinate(world_x, 8u);
    py = wrap_coordinate(world_y, 8u);
    entry = city_map_tile_entry(layer, map_x, map_y);
    tile = (uint16_t)(entry & 0x03ffu);
    palette_group = (uint8_t)((entry >> 10) & 7u);
    if (entry & 0x4000u) px = 7u - px;
    if (entry & 0x8000u) py = 7u - py;

    nba = view_reg(view, layer < 2u ? 0x210bu : 0x210cu);
    char_base = (uint32_t)((layer & 1u) ? (nba >> 4) :
                           (nba & 15u)) << 13;
    row_address = char_base + (uint32_t)tile * (bpp * 8u) + py * 2u;
    bit = 7u - px;
    for (plane = 0u; plane < bpp; ++plane) {
        uint32_t address = row_address + (plane >> 1) * 16u + (plane & 1u);
        color |= (uint8_t)(((g_vram[address & 0xffffu] >> bit) & 1u) << plane);
    }
    if (!color) return 1;

    pixel->transparent = 0u;
    pixel->priority = bg_priority(mode, layer, (entry >> 13) & 1u,
                                  (view_reg(view, 0x2105u) & 0x08u) != 0u);
    pixel->layer = (uint8_t)layer;
    pixel->palette_index = color;
    if (bpp == 2u) {
        unsigned base = mode == 0u ? layer * 32u : 0u;
        pixel->palette_index = (uint8_t)(base + palette_group * 4u + color);
        pixel->color = cgram_color(pixel->palette_index);
    } else if (bpp == 4u) {
        pixel->palette_index = (uint8_t)(palette_group * 16u + color);
        pixel->color = cgram_color(pixel->palette_index);
    } else {
        pixel->palette_index = color;
        pixel->color = (view_reg(view, 0x2130u) & 1u)
            ? direct_color(palette_group, color)
            : cgram_color(color);
    }
    return 1;
}

static int background_pixel(const PpuLineView *view, unsigned layer,
                            int x, unsigned y, PpuPixel *pixel) {
    unsigned mode = view_reg(view, 0x2105u) & 7u;
    unsigned bpp = bg_bpp(mode, layer);
    uint8_t bgmode = view_reg(view, 0x2105u);
    uint8_t sc;
    uint8_t nba;
    unsigned tile_size;
    unsigned map_width;
    unsigned map_height;
    unsigned world_width;
    unsigned world_height;
    int sample_x = x;
    unsigned sample_y = y + 1u;
    unsigned mosaic_size;
    uint32_t map_base;
    uint32_t char_base;
    uint32_t world_x, world_y, tile_x, tile_y, px, py;
    uint32_t screen_index, map_address, row_address;
    uint16_t entry;
    uint16_t tile;
    uint8_t palette_group;
    uint8_t color = 0u;
    unsigned bit;
    unsigned plane;

    memset(pixel, 0, sizeof(*pixel));
    pixel->transparent = 1u;
    if (layer >= 4u || bpp == 0u) return 1;

    mosaic_size = ((unsigned)view_reg(view, 0x2106u) >> 4) + 1u;
    if ((view_reg(view, 0x2106u) & (1u << layer)) && mosaic_size > 1u) {
        sample_x -= (int)wrap_coordinate(sample_x, mosaic_size);
        sample_y -= sample_y % mosaic_size;
    }

    sc = view_reg(view, (uint16_t)(0x2107u + layer));
    map_width = (sc & 1u) ? 64u : 32u;
    map_height = (sc & 2u) ? 64u : 32u;
    map_base = (uint32_t)(sc & 0xfcu) << 9;
    nba = view_reg(view, layer < 2u ? 0x210bu : 0x210cu);
    char_base = (uint32_t)((layer & 1u) ? (nba >> 4) : (nba & 15u)) << 13;
    tile_size = (bgmode & (uint8_t)(0x10u << layer)) ? 16u : 8u;
    if (mode == 5u || mode == 6u) tile_size = 16u;
    world_width = map_width * tile_size;
    world_height = map_height * tile_size;
    world_x = wrap_coordinate(sample_x + (int)view->scroll[layer * 2u],
                              world_width);
    world_y = (sample_y + view->scroll[layer * 2u + 1u]) % world_height;
    tile_x = world_x / tile_size;
    tile_y = world_y / tile_size;
    px = world_x % tile_size;
    py = world_y % tile_size;

    screen_index = (tile_y >> 5) * (map_width == 64u ? 2u : 1u) +
                   (tile_x >> 5);
    map_address = map_base + screen_index * 0x800u +
                  (((tile_y & 31u) * 32u + (tile_x & 31u)) * 2u);
    entry = read_vram16(map_address);
    tile = (uint16_t)(entry & 0x03ffu);
    palette_group = (uint8_t)((entry >> 10) & 7u);

    if (entry & 0x4000u) px = tile_size - 1u - px;
    if (entry & 0x8000u) py = tile_size - 1u - py;
    if (tile_size == 16u) {
        tile = (uint16_t)((tile + (px >> 3) + ((py >> 3) << 4)) & 0x03ffu);
        px &= 7u;
        py &= 7u;
    }

    row_address = char_base + (uint32_t)tile * (bpp * 8u) + py * 2u;
    bit = 7u - px;
    for (plane = 0u; plane < bpp; ++plane) {
        uint32_t address = row_address + (plane >> 1) * 16u + (plane & 1u);
        color |= (uint8_t)(((g_vram[address & 0xffffu] >> bit) & 1u) << plane);
    }
    if (!color) return 1;

    pixel->transparent = 0u;
    pixel->priority = bg_priority(mode, layer, (entry >> 13) & 1u,
                                  (bgmode & 0x08u) != 0u);
    pixel->layer = (uint8_t)layer;
    pixel->palette_index = color;
    if (bpp == 2u) {
        unsigned base = mode == 0u ? layer * 32u : 0u;
        pixel->palette_index = (uint8_t)(base + palette_group * 4u + color);
        pixel->color = cgram_color(pixel->palette_index);
    } else if (bpp == 4u) {
        pixel->palette_index = (uint8_t)(palette_group * 16u + color);
        pixel->color = cgram_color(pixel->palette_index);
    } else {
        pixel->palette_index = color;
        pixel->color = (view_reg(view, 0x2130u) & 1u)
            ? direct_color(palette_group, color)
            : cgram_color(color);
    }
    return 1;
}

static uint8_t small_width(unsigned mode) {
    static const uint8_t values[8] = {8u, 8u, 8u, 16u, 16u, 32u, 16u, 16u};
    return values[mode & 7u];
}
static uint8_t small_height(unsigned mode) {
    static const uint8_t values[8] = {8u, 8u, 8u, 16u, 16u, 32u, 32u, 32u};
    return values[mode & 7u];
}
static uint8_t large_width(unsigned mode) {
    static const uint8_t values[8] = {16u, 32u, 64u, 32u, 64u, 64u, 32u, 32u};
    return values[mode & 7u];
}
static uint8_t large_height(unsigned mode) {
    static const uint8_t values[8] = {16u, 32u, 64u, 32u, 64u, 64u, 64u, 32u};
    return values[mode & 7u];
}

static PpuObject decode_object(const PpuLineView *view, unsigned index) {
    PpuObject object;
    uint8_t high = g_oam[512u + index / 4u];
    uint8_t pair = (uint8_t)((high >> ((index & 3u) * 2u)) & 3u);
    uint8_t attributes = g_oam[index * 4u + 3u];
    uint8_t selection = view_reg(view, 0x2101u);
    uint8_t large = (uint8_t)((pair >> 1) & 1u);
    uint8_t size_mode = (uint8_t)(selection >> 5);
    object.x = (uint16_t)(g_oam[index * 4u] | ((pair & 1u) << 8));
    object.y = (uint8_t)(g_oam[index * 4u + 1u] + 1u);
    object.character = g_oam[index * 4u + 2u];
    object.name_select = (uint8_t)(attributes & 1u);
    object.palette = (uint8_t)((attributes >> 1) & 7u);
    object.priority = (uint8_t)((attributes >> 4) & 3u);
    object.hflip = (uint8_t)((attributes >> 6) & 1u);
    object.vflip = (uint8_t)((attributes >> 7) & 1u);
    object.width = large ? large_width(size_mode) : small_width(size_mode);
    object.height = large ? large_height(size_mode) : small_height(size_mode);
    object.index = (uint8_t)index;
    return object;
}

static void object_line(const PpuLineView *view, unsigned y,
                        unsigned output_width, unsigned left_margin,
                        int cursor_shift_x, int cursor_shift_y,
                        uint8_t palettes[SC_V28_MAX_FRAME_WIDTH],
                        uint8_t priorities[SC_V28_MAX_FRAME_WIDTH]) {
    PpuObjectLine items[32];
    PpuObjectTile tiles[34];
    unsigned item_count = 0u, tile_count = 0u;
    unsigned scan, i, t, p;
    uint8_t selection = view_reg(view, 0x2101u);
    unsigned first = g_runtime->machine.oam_priority_rotation
        ? ((unsigned)g_runtime->machine.oam_word_address >> 1) & 127u : 0u;
    memset(palettes, 0, output_width);
    memset(priorities, 0, output_width);

    for (scan = 0u; scan < 128u; ++scan) {
        unsigned index = (first + scan) & 127u;
        PpuObject object = decode_object(view, index);
        uint8_t line;
        int object_x = object.x >= 256u ? (int)object.x - 512 : (int)object.x;
        int display_x = object_x;
        int display_y = (int)object.y;
        int cursor_object = read_wram16(0x0201u) == 0x00ffu && index < 4u;
        int cursor_x = (int)(int16_t)read_wram16(0x025du);
        int cursor_base = read_wram16(0x0261u) == 2u ? 208 : 232;
        int cursor_extension = cursor_x > cursor_base ?
                               cursor_x - cursor_base :
                               (cursor_x < 16 ? cursor_x - 16 : 0);
        if (cursor_object && (cursor_shift_x || cursor_shift_y) &&
            cursor_x >= 256 && object.x >= 256u) {
            /* OAM entries 0..3 are the four map-cursor quadrants. A widened
               cursor legitimately uses the positive half of the SNES 9-bit
               OAM X range; do not reinterpret it as -256..-1. */
            display_x = (int)object.x + cursor_shift_x;
        }
        else if (cursor_object && (cursor_shift_x || cursor_shift_y)) {
            display_x += cursor_shift_x + cursor_extension;
        }
        if (cursor_object) display_y += cursor_shift_y;
        line = (uint8_t)((int)y + 1 - display_y);
        if (display_x < (int)SIMCITY_RECOMP_FRAME_WIDTH +
                           (int)(output_width - SIMCITY_RECOMP_FRAME_WIDTH - left_margin) &&
            display_x + (int)object.width > -(int)left_margin &&
            line < object.height) {
            if (item_count >= 32u) break;
            items[item_count].object = object;
            items[item_count].display_x = (int16_t)display_x;
            items[item_count].line = line;
            item_count++;
        }
    }

    for (i = item_count; i > 0u; --i) {
        PpuObject object = items[i - 1u].object;
        unsigned yy = items[i - 1u].line;
        int xx = items[i - 1u].display_x;
        unsigned tile_base = (selection & 7u) << 13;
        unsigned cx = object.character & 15u;
        unsigned cy, tile_width, object_tile_x;
        if (object.vflip) {
            if (object.width == object.height) yy = object.height - 1u - yy;
            else if (yy < object.width) yy = object.width - 1u - yy;
            else yy = object.width + (object.width - 1u) - (yy - object.width);
        }
        if (object.name_select)
            tile_base += (1u + ((selection >> 3) & 3u)) << 12;
        cy = (((object.character >> 4) + (yy >> 3)) & 15u) << 4;
        tile_width = object.width >> 3;
        for (object_tile_x = 0u; object_tile_x < tile_width; ++object_tile_x) {
            int ox = xx + (int)(object_tile_x << 3);
            unsigned mx, address, address0, address1;
            uint16_t word0, word1;
            mx = object.hflip ? tile_width - 1u - object_tile_x : object_tile_x;
            address = tile_base + ((cy + ((cx + mx) & 15u)) << 4);
            address = (address & 0xfff0u) + (yy & 7u);
            address0 = (address * 2u) & 0xffffu;
            address1 = ((address + 8u) * 2u) & 0xffffu;
            word0 = read_vram16(address0);
            word1 = read_vram16(address1);
            if (tile_count >= 34u) break;
            tiles[tile_count].x = (int16_t)ox;
            tiles[tile_count].priority = object.priority;
            tiles[tile_count].palette = (uint8_t)(128u + (object.palette << 4));
            tiles[tile_count].hflip = object.hflip;
            tiles[tile_count].data = (uint32_t)word0 | ((uint32_t)word1 << 16);
            tile_count++;
        }
        if (tile_count >= 34u) break;
    }

    for (t = 0u; t < tile_count; ++t) {
        int xx = tiles[t].x;
        for (p = 0u; p < 8u; ++p) {
            unsigned shift;
            uint8_t color;
            int output_x = xx + (int)left_margin;
            if (output_x >= 0 && output_x < (int)output_width) {
                shift = tiles[t].hflip ? p : 7u - p;
                color = (uint8_t)(((tiles[t].data >> shift) & 1u) |
                    (((tiles[t].data >> (shift + 8u)) & 1u) << 1) |
                    (((tiles[t].data >> (shift + 16u)) & 1u) << 2) |
                    (((tiles[t].data >> (shift + 24u)) & 1u) << 3));
                if (color) {
                    palettes[output_x] = (uint8_t)(tiles[t].palette + color);
                    priorities[output_x] = tiles[t].priority;
                }
            }
            xx++;
        }
    }
}

static uint8_t layer_window_nibble(const PpuLineView *view, unsigned layer) {
    if (layer < 2u)
        return (uint8_t)((view_reg(view, 0x2123u) >> (layer * 4u)) & 15u);
    if (layer < 4u)
        return (uint8_t)((view_reg(view, 0x2124u) >> ((layer - 2u) * 4u)) & 15u);
    if (layer == 4u) return (uint8_t)(view_reg(view, 0x2125u) & 15u);
    return (uint8_t)(view_reg(view, 0x2125u) >> 4);
}

static unsigned layer_window_logic(const PpuLineView *view, unsigned layer) {
    if (layer < 4u)
        return (view_reg(view, 0x212au) >> (layer * 2u)) & 3u;
    if (layer == 4u) return view_reg(view, 0x212bu) & 3u;
    return (view_reg(view, 0x212bu) >> 2) & 3u;
}

static int window_inside(int x, unsigned left, unsigned right) {
    return left <= right && x >= (int)left && x <= (int)right;
}

static int window_mask(const PpuLineView *view, unsigned layer, int x) {
    uint8_t nibble = layer_window_nibble(view, layer);
    int enable1 = (nibble & 2u) != 0u;
    int enable2 = (nibble & 8u) != 0u;
    int value1 = window_inside(x, view_reg(view, 0x2126u), view_reg(view, 0x2127u));
    int value2 = window_inside(x, view_reg(view, 0x2128u), view_reg(view, 0x2129u));
    unsigned logic;
    if (!enable1 && !enable2) return 0;
    if (nibble & 1u) value1 = !value1;
    if (nibble & 4u) value2 = !value2;
    if (!enable1) return value2;
    if (!enable2) return value1;
    logic = layer_window_logic(view, layer);
    if (logic == 0u) return value1 || value2;
    if (logic == 1u) return value1 && value2;
    if (logic == 2u) return value1 != value2;
    return value1 == value2;
}

static int region_applies(unsigned setting, int inside_color_window) {
    if (setting == 0u) return 0;
    if (setting == 1u) return !inside_color_window;
    if (setting == 2u) return inside_color_window;
    return 1;
}

static PpuPixel screen_pixel(const PpuLineView *view, unsigned screen_mask,
                             unsigned window_enable, int x, unsigned y,
                             uint8_t obj_palette, uint8_t obj_priority_value) {
    PpuPixel best;
    unsigned mode = view_reg(view, 0x2105u) & 7u;
    unsigned layer;
    memset(&best, 0, sizeof(best));
    best.color = cgram_color(0u);
    best.palette_index = 0u;
    best.priority = 0u;
    best.layer = 5u;
    best.transparent = 0u;

    for (layer = 0u; layer < 4u; ++layer) {
        PpuPixel candidate;
        if ((screen_mask & (1u << layer)) == 0u || bg_bpp(mode, layer) == 0u)
            continue;
        if ((window_enable & (1u << layer)) && window_mask(view, layer, x))
            continue;
        if (!background_pixel(view, layer, x, y, &candidate)) continue;
        if (!candidate.transparent && candidate.priority > best.priority)
            best = candidate;
    }

    if ((screen_mask & 0x10u) && obj_palette) {
        uint8_t priority = obj_priority(mode, obj_priority_value);
        if (!((window_enable & 0x10u) && window_mask(view, 4u, x)) &&
            priority > best.priority) {
            best.color = cgram_color(obj_palette);
            best.palette_index = obj_palette;
            best.priority = priority;
            best.layer = 4u;
            best.obj_palette = (uint8_t)((obj_palette - 128u) >> 4);
            best.transparent = 0u;
        }
    }
    return best;
}

static PpuPixel city_screen_pixel(const PpuLineView *view,
                                  unsigned screen_mask,
                                  unsigned window_enable,
                                  int source_x, int city_source_x,
                                  int city_source_y, unsigned y,
                                  uint8_t obj_palette,
                                  uint8_t obj_priority_value) {
    PpuPixel best;
    unsigned mode = view_reg(view, 0x2105u) & 7u;
    unsigned layer;
    int effect_x = source_x < 0 || source_x >= (int)SC_V28_FRAME_WIDTH
        ? 128 : source_x;
    memset(&best, 0, sizeof(best));
    best.color = cgram_color(0u);
    best.palette_index = 0u;
    best.priority = 0u;
    best.layer = 5u;
    best.transparent = 0u;

    /* BG1/BG2 come from the full city map. BG3/BG4 remain native-width HUD. */
    for (layer = 0u; layer < 4u; ++layer) {
        PpuPixel candidate;
        if ((screen_mask & (1u << layer)) == 0u || bg_bpp(mode, layer) == 0u)
            continue;
        if (layer >= 2u &&
            (source_x < 0 || source_x >= (int)SC_V28_FRAME_WIDTH))
            continue;
        if ((window_enable & (1u << layer)) &&
            window_mask(view, layer, effect_x))
            continue;
        if (layer < 2u) {
            if (!city_background_pixel(view, layer, city_source_x,
                                       city_source_y,
                                       &candidate))
                continue;
        } else if (!background_pixel(view, layer, source_x, y, &candidate)) {
            continue;
        }
        if (!candidate.transparent && candidate.priority > best.priority)
            best = candidate;
    }

    /* Preserve sprites only when their existing screen coordinates overlap a
     * margin.  Do not wrap or duplicate OAM objects into invented positions. */
    if ((screen_mask & 0x10u) && obj_palette) {
        uint8_t priority = obj_priority(mode, obj_priority_value);
        if (!((window_enable & 0x10u) &&
              window_mask(view, 4u, effect_x)) &&
            priority > best.priority) {
            best.color = cgram_color(obj_palette);
            best.palette_index = obj_palette;
            best.priority = priority;
            best.layer = 4u;
            best.obj_palette = (uint8_t)((obj_palette - 128u) >> 4);
            best.transparent = 0u;
        }
    }
    return best;
}

static void analyze(const uint32_t *pixels, size_t count,
                    uint32_t *nonblack, uint32_t *unique) {
    uint32_t colors[1024];
    uint32_t color_count = 0u;
    size_t index;
    *nonblack = 0u;
    for (index = 0u; index < count; ++index) {
        uint32_t color_index;
        if (pixels[index]) (*nonblack)++;
        for (color_index = 0u; color_index < color_count; ++color_index)
            if (colors[color_index] == pixels[index]) break;
        if (color_index == color_count && color_count < 1024u)
            colors[color_count++] = pixels[index];
    }
    *unique = color_count;
}

int sc_v28_render_first_visible_frame(const SCV11Runtime *runtime,
                                      unsigned output_width,
                                      unsigned left_margin,
                                      uint16_t *out555,
                                      size_t cap555,
                                      uint32_t *out32,
                                      size_t cap32,
                                      SCV28VideoReport *report) {
    SCV28VideoReport result;
    unsigned y, x;
    uint8_t object_palette[SC_V28_MAX_FRAME_WIDTH];
    uint8_t object_priority_value[SC_V28_MAX_FRAME_WIDTH];
    unsigned supported_lines = 0u;
    unsigned scanline_states = 0u;
    int expand_city_view;

    memset(&result, 0, sizeof(result));
    size_t output_pixels = (size_t)output_width * SC_V28_FRAME_HEIGHT;
    if (!runtime || !out555 || !out32 || !report ||
        output_width < SC_V28_FRAME_WIDTH ||
        output_width > SC_V28_MAX_FRAME_WIDTH ||
        left_margin > output_width - SC_V28_FRAME_WIDTH ||
        cap555 < output_pixels || cap32 < output_pixels)
        return 0;

    g_runtime = runtime;
    g_vram = runtime->machine.vram;
    g_cgram = runtime->machine.cgram;
    g_oam = runtime->machine.oam;
    result.mode = (uint8_t)(current_reg(0x2105u) & 7u);
    result.brightness = runtime->machine.ppu_brightness;
    result.forced_blank = runtime->machine.ppu_forced_blank;
    result.main_screen_mask = current_reg(0x212cu);
    result.sub_screen_mask = current_reg(0x212du);
    result.color_math = current_reg(0x2131u);
    memset(out555, 0, output_pixels * sizeof(*out555));
    memset(out32, 0, output_pixels * sizeof(*out32));

    /*
     * Keep non-gameplay screens at the authentic 256-pixel presentation.
     * The live city view has a stable PPU layout that is distinct from the
     * title, setup, scenario, and modal screens.  Widening only this layout
     * avoids exposing repeated menu tilemaps in the side margins.
     */
    expand_city_view = output_width > SC_V28_FRAME_WIDTH &&
        (current_reg(0x2105u) & 0x0fu) == 0x09u &&
        current_reg(0x2107u) == 0x58u &&
        current_reg(0x2108u) == 0x5cu;

    for (y = 0u; y < SC_V11_PPU_VISIBLE_LINES; ++y) {
        PpuLineView view = line_view(runtime, y);
        unsigned mode = view_reg(&view, 0x2105u) & 7u;
        uint8_t inidisp = view_reg(&view, 0x2100u);
        uint8_t main_mask = view_reg(&view, 0x212cu) & 0x1fu;
        uint8_t sub_mask = view_reg(&view, 0x212du) & 0x1fu;
        uint8_t main_windows = view_reg(&view, 0x212eu) & 0x1fu;
        uint8_t sub_windows = view_reg(&view, 0x212fu) & 0x1fu;
        uint8_t cgwsel = view_reg(&view, 0x2130u);
        uint8_t cgadsub = view_reg(&view, 0x2131u);
        unsigned brightness = inidisp & 15u;
        int forced_blank = (inidisp & 0x80u) != 0u;
        int native_camera_x =
            (int)(int16_t)read_wram16(SC_CITY_VIEW_X_OFFSET) * 8 +
            (int)(read_wram16(SC_CITY_FINE_X_OFFSET) & 7u);
        int native_camera_y =
            (int)(int16_t)read_wram16(SC_CITY_VIEW_Y_OFFSET) * 8 +
            (int)(read_wram16(SC_CITY_FINE_Y_OFFSET) & 7u);
        int display_left_x = native_camera_x - (int)left_margin;
        int display_top_y = native_camera_y;
        int max_display_left_x = SC_CITY_MAP_WIDTH * 8 - (int)output_width;
        int max_display_top_y = SC_CITY_MAP_HEIGHT * 8 -
                                (int)SC_V11_PPU_VISIBLE_LINES;
        int cursor_shift_x = 0;
        int cursor_shift_y = 0;
        unsigned object_left_margin = left_margin;

        if (display_left_x < 0) display_left_x = 0;
        if (display_left_x > max_display_left_x)
            display_left_x = max_display_left_x;
        if (display_top_y < 0) display_top_y = 0;
        if (display_top_y > max_display_top_y)
            display_top_y = max_display_top_y;
        if (expand_city_view) {
            /* Anchor the native HUD at the physical left edge. World objects
             * retain their map position through the separate camera shift. */
            object_left_margin = 0u;
            cursor_shift_x = native_camera_x - display_left_x;
            cursor_shift_y = native_camera_y - display_top_y;
        }

        if (runtime->ppu_completed_frame == runtime->scheduler.frame &&
            runtime->ppu_completed_line_state[y].valid &&
            runtime->ppu_completed_line_state[y].frame == runtime->scheduler.frame)
            scanline_states++;
        if (mode > 6u) {
            (void)snprintf(result.error, sizeof(result.error),
                "PPU mode %u reached at frame %u line %u; Mode 7 requires its matrix path",
                mode, runtime->scheduler.frame, y + 1u);
            *report = result;
            return 0;
        }
        supported_lines++;
        if (forced_blank) continue;

        object_line(&view, y, output_width, object_left_margin,
                    cursor_shift_x, cursor_shift_y,
                    object_palette, object_priority_value);
        for (x = 0u; x < output_width; ++x) {
            int source_x = (int)x - (int)left_margin;
            int city_source_x = display_left_x + (int)x - native_camera_x;
            int city_source_y = display_top_y + (int)y - native_camera_y;
            int in_margin = source_x < 0 ||
                            source_x >= (int)SC_V28_FRAME_WIDTH;
            int effect_x = expand_city_view
                ? (x < SC_V28_FRAME_WIDTH ? (int)x : 128)
                : (in_margin ? 128 : source_x);
            if (!expand_city_view &&
                in_margin)
                continue;
            PpuPixel main_pixel = expand_city_view
                ? city_screen_pixel(&view, main_mask, main_windows,
                                    (int)x, city_source_x, city_source_y, y,
                                    object_palette[x], object_priority_value[x])
                : screen_pixel(&view, main_mask, main_windows, source_x, y,
                               object_palette[x], object_priority_value[x]);
            PpuPixel sub_pixel;
            uint16_t color = main_pixel.color;
            uint16_t addend = view.fixed_color;
            int color_window = window_mask(&view, 5u, effect_x);
            int clip_main = region_applies((cgwsel >> 6) & 3u, color_window);
            int prevent_math = region_applies((cgwsel >> 4) & 3u, color_window);
            int math_enabled = (cgadsub & (1u << main_pixel.layer)) != 0u;

            if (clip_main) color = 0u;
            if (cgwsel & 0x02u) {
                sub_pixel = expand_city_view
                    ? city_screen_pixel(&view, sub_mask, sub_windows,
                                        (int)x, city_source_x, city_source_y, y,
                                        object_palette[x],
                                        object_priority_value[x])
                    : screen_pixel(&view, sub_mask, sub_windows, source_x, y,
                                   object_palette[x],
                                   object_priority_value[x]);
                addend = sub_pixel.color;
            }
            if (main_pixel.layer == 4u && main_pixel.obj_palette < 4u)
                math_enabled = 0;
            if (prevent_math) math_enabled = 0;
            if (math_enabled) {
                if (cgadsub & 0x80u)
                    color = color_subtract(color, addend,
                                           (cgadsub & 0x40u) != 0u);
                else
                    color = color_add(color, addend,
                                      (cgadsub & 0x40u) != 0u);
            }
            color = apply_brightness(color, brightness);
            out555[(y + 7u) * output_width + x] = color;
            out32[(y + 7u) * output_width + x] = bgra(color);
        }
    }

    result.reached_feature_set_supported =
        (uint8_t)(supported_lines == SC_V11_PPU_VISIBLE_LINES);
    analyze(out32, output_pixels,
            &result.nonblack_pixels, &result.unique_colors);
    sc_sha256_bytes((const unsigned char *)out555,
                    output_pixels * sizeof(*out555),
                    result.bgr555_sha256);
    sc_sha256_bytes((const unsigned char *)out32,
                    output_pixels * sizeof(*out32),
                    result.bgra_sha256);
    if (scanline_states != 0u && scanline_states != SC_V11_PPU_VISIBLE_LINES) {
        (void)snprintf(result.error, sizeof(result.error),
            "incomplete PPU scanline state frame=%u lines=%u/224",
            runtime->scheduler.frame, scanline_states);
        *report = result;
        return 0;
    }
    result.passed = 1u;
    *report = result;
    return 1;
}
