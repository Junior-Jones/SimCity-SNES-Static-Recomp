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
    int city_camera_x;
    int city_camera_y;
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

#ifdef _MSC_VER
#define SC_VIDEO_LOCAL __declspec(thread)
#else
#define SC_VIDEO_LOCAL _Thread_local
#endif
static SC_VIDEO_LOCAL const SCV28VideoInput *g_input;
static SC_VIDEO_LOCAL const uint8_t *g_vram;
static SC_VIDEO_LOCAL const uint8_t *g_cgram;
static SC_VIDEO_LOCAL const uint8_t *g_oam;
static SC_VIDEO_LOCAL const SCV28CityMapView *g_city_map;

enum { CITY_ROW_COLUMNS = 240, CITY_PATTERN_CACHE_SIZE = 2048 };
typedef struct CityEntryRow {
    uint16_t entries[CITY_ROW_COLUMNS];
    uint8_t found[CITY_ROW_COLUMNS];
    int y;
} CityEntryRow;
typedef struct CityPatternRow {
    uint32_t frame, packed;
    uint16_t address;
} CityPatternRow;
typedef struct CityLayerTile {
    int x, y;
    uint32_t packed;
    uint8_t flip_x, palette, priority;
} CityLayerTile;
static SC_VIDEO_LOCAL CityEntryRow g_city_entry_rows[2];
static SC_VIDEO_LOCAL CityPatternRow g_city_pattern_rows[CITY_PATTERN_CACHE_SIZE];
static SC_VIDEO_LOCAL CityLayerTile g_city_layer_tiles[2];
static SC_VIDEO_LOCAL uint32_t g_city_cache_frame;

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
    return g_input->registers[address - SC_MMIO_BASE];
}

static uint8_t view_reg(const PpuLineView *view, uint16_t address) {
    unsigned index = (unsigned)(address - 0x2100u);
    return index < SC_V11_PPU_RENDER_REGISTER_COUNT ? view->r[index] : 0u;
}

static uint16_t read_vram16(uint32_t address) {
    return (uint16_t)(g_vram[address & 0xffffu] |
           ((uint16_t)g_vram[(address + 1u) & 0xffffu] << 8));
}

static uint16_t read_le16(const uint8_t *bytes, size_t address) {
    return (uint16_t)(bytes[address] | ((uint16_t)bytes[address + 1u] << 8));
}

static SCV28VideoInput runtime_input(const SCV11Runtime *r) {
    const uint8_t *wram = r->machine.wram;
    SCV28VideoInput input = {
        .vram = r->machine.vram, .cgram = r->machine.cgram, .oam = r->machine.oam,
        .registers = r->machine.mmio, .city_bytes = wram + SC_CITY_MAP_WRAM_OFFSET,
        .rom = r->rom, .scroll = r->bg_scroll, .lines = r->ppu_completed_line_state,
        .rom_size = r->rom_size, .frame = r->scheduler.frame,
        .completed_frame = r->ppu_completed_frame,
        .camera_x = (int)(int16_t)read_le16(wram, SC_CITY_VIEW_X_OFFSET) * 8 +
                    (int)(read_le16(wram, SC_CITY_FINE_X_OFFSET) & 7u),
        .camera_y = (int)(int16_t)read_le16(wram, SC_CITY_VIEW_Y_OFFSET) * 8 +
                    (int)(read_le16(wram, SC_CITY_FINE_Y_OFFSET) & 7u),
        .cursor_x = (int)(int16_t)read_le16(wram, 0x025du),
        .cursor_base = read_le16(wram, 0x0261u) == 2u ? 208 : 232,
        .cursor_on_map = read_le16(wram, 0x0201u) == 0x00ffu,
        .fixed_color = r->machine.ppu_fixed_color, .oam_word_address = r->machine.oam_word_address,
        .brightness = r->machine.ppu_brightness, .forced_blank = r->machine.ppu_forced_blank,
        .oam_priority_rotation = r->machine.oam_priority_rotation
    };
    return input;
}

void sc_v28_capture_input(SCV28CapturedInput *capture, const SCV11Runtime *runtime) {
    const SCV28VideoInput source = runtime_input(runtime);
    capture->input = source;
    memcpy(capture->vram, source.vram, sizeof(capture->vram));
    memcpy(capture->cgram, source.cgram, sizeof(capture->cgram));
    memcpy(capture->oam, source.oam, sizeof(capture->oam));
    memcpy(capture->registers, source.registers, sizeof(capture->registers));
    memcpy(capture->city_bytes, source.city_bytes, sizeof(capture->city_bytes));
    memcpy(capture->scroll, source.scroll, sizeof(capture->scroll));
    memcpy(capture->lines, source.lines, sizeof(capture->lines));
    capture->input.vram = capture->vram;
    capture->input.cgram = capture->cgram;
    capture->input.oam = capture->oam;
    capture->input.registers = capture->registers;
    capture->input.city_bytes = capture->city_bytes;
    capture->input.scroll = capture->scroll;
    capture->input.lines = capture->lines;
}

static size_t lorom_offset(uint32_t address) {
    return (size_t)(((address >> 16) & 0x7fu) * 0x8000u) +
           (size_t)(address & 0x7fffu);
}

static uint16_t read_rom16(uint32_t address) {
    size_t offset = lorom_offset(address);
    if (!g_input->rom || offset + 1u >= g_input->rom_size) return 0u;
    return read_le16(g_input->rom, offset);
}

static uint16_t cgram_color(unsigned index) {
    size_t address = (size_t)(index & 255u) * 2u;
    return (uint16_t)(g_cgram[address] |
           ((uint16_t)g_cgram[address + 1u] << 8)) & 0x7fffu;
}

static uint32_t bgra(uint16_t color) {
    /* Exact floor(component * 255 / 31), not the bit-repetition
       approximation. All three channels share the same L1-sized table. */
    static const uint8_t expand[32] = {
        0, 8, 16, 24, 32, 41, 49, 57, 65, 74, 82, 90, 98, 106, 115, 123,
        131, 139, 148, 156, 164, 172, 180, 189, 197, 205, 213, 222, 230, 238, 246, 255
    };
    uint32_t red = expand[color & 31u];
    uint32_t green = expand[(color >> 5) & 31u];
    uint32_t blue = expand[(color >> 10) & 31u];
    return blue | (green << 8) | (red << 16);
}

static uint16_t apply_brightness(uint16_t color, unsigned brightness) {
    unsigned red = color & 31u;
    unsigned green = (color >> 5) & 31u;
    unsigned blue = (color >> 10) & 31u;
    if (brightness == 15u) return color;
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

static PpuLineView line_view(const SCV28VideoInput *input, unsigned y) {
    PpuLineView view;
    view.city_camera_x = input->camera_x;
    view.city_camera_y = input->camera_y;
    const SCV11PpuLineState *line = y < SC_V11_PPU_VISIBLE_LINES
        ? &input->lines[y] : NULL;
    if (line && input->completed_frame == input->frame &&
        line->valid && line->frame == input->frame) {
        view.r = line->registers;
        view.scroll = line->bg_scroll;
        view.fixed_color = line->fixed_color;
    } else {
        view.r = input->registers;
        view.scroll = input->scroll;
        view.fixed_color = input->fixed_color;
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

static int city_map_contains(int x, int y) {
    return x >= 0 && y >= 0 &&
           x < (g_city_map ? (int)g_city_map->width : SC_CITY_MAP_WIDTH) &&
           y < (g_city_map ? (int)g_city_map->height : SC_CITY_MAP_HEIGHT);
}

static uint16_t city_map_word(int map_x, int map_y) {
    if (!city_map_contains(map_x, map_y)) return 0u;
    if (g_city_map)
        return g_city_map->tiles[(size_t)map_y * g_city_map->width + (unsigned)map_x];
    return read_le16(g_input->city_bytes,
                     ((size_t)map_y * SC_CITY_MAP_WIDTH + (size_t)map_x) * 2u);
}

static uint16_t city_map_uncached_entry(unsigned layer, int map_x, int map_y) {
    uint16_t map_word = city_map_word(map_x, map_y);
    uint16_t code = (uint16_t)(map_word & 0x03ffu);
    if (!city_map_contains(map_x, map_y))
        return layer == 0u ? 0x0300u : 0x0301u;
    if (layer == 0u && (map_word & 0x4000u)) {
        uint16_t upper_left = city_map_word(map_x - 1, map_y - 1);
        return (upper_left & 0x8000u) ? 0x0300u : 0x1376u;
    }
    return read_rom16((layer == 0u ? SC_CITY_BG1_TABLE :
                       SC_CITY_BG2_TABLE) + (uint32_t)code * 2u);
}

static uint16_t city_map_tile_entry(unsigned layer, int map_x, int map_y) {
    if ((unsigned)map_x >= CITY_ROW_COLUMNS)
        return city_map_uncached_entry(layer, map_x, map_y);
    CityEntryRow *row = &g_city_entry_rows[layer];
    if (row->y != map_y) {
        row->y = map_y;
        memset(row->found, 0, sizeof(row->found));
    }
    if (!row->found[map_x]) {
        row->entries[map_x] = city_map_uncached_entry(layer, map_x, map_y);
        row->found[map_x] = 1u;
    }
    return row->entries[map_x];
}

static uint32_t space_bits(uint32_t value) {
    value = (value | (value << 12u)) & UINT32_C(0x000f000f);
    value = (value | (value << 6u)) & UINT32_C(0x03030303);
    return (value | (value << 3u)) & UINT32_C(0x11111111);
}

/* VRAM is stable over the host renderer call. Cache decoded 4bpp rows for
   repeated character cells, without carrying any data across guest frames. */
static uint32_t city_pattern_4bpp(uint32_t row) {
    const uint16_t address = (uint16_t)row;
    CityPatternRow *entry = &g_city_pattern_rows[(address / 2u) % CITY_PATTERN_CACHE_SIZE];
    if (entry->frame != g_city_cache_frame || entry->address != address) {
        entry->packed = space_bits(g_vram[address]) |
                        (space_bits(g_vram[(uint16_t)(address + 1u)]) << 1u) |
                        (space_bits(g_vram[(uint16_t)(address + 16u)]) << 2u) |
                        (space_bits(g_vram[(uint16_t)(address + 17u)]) << 3u);
        entry->address = address;
        entry->frame = g_city_cache_frame;
    }
    return entry->packed;
}

static uint8_t background_color_index(uint32_t row, unsigned bit, unsigned bpp) {
    uint8_t color = (uint8_t)(((g_vram[row & 0xffffu] >> bit) & 1u) |
                              (((g_vram[(row + 1u) & 0xffffu] >> bit) & 1u) << 1u));
    if (bpp >= 4u)
        color |= (uint8_t)((((g_vram[(row + 16u) & 0xffffu] >> bit) & 1u) << 2u) |
                           (((g_vram[(row + 17u) & 0xffffu] >> bit) & 1u) << 3u));
    if (bpp == 8u) {
        for (unsigned plane = 4u; plane < 8u; ++plane) {
            uint32_t address = row + (plane >> 1) * 16u + (plane & 1u);
            color |= (uint8_t)(((g_vram[address & 0xffffu] >> bit) & 1u) << plane);
        }
    }
    return color;
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
    uint8_t color;
    uint32_t row_address;
    unsigned bit;
    int sample_x = city_source_x;
    int sample_y = y + 1;
    unsigned mosaic_size;
    int world_x;
    int world_y;

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
    world_x = view->city_camera_x + sample_x;
    world_y = view->city_camera_y + sample_y;
    if (g_city_map) {
        world_x += g_city_map->origin_x;
        world_y += g_city_map->origin_y;
    }

    map_x = world_x >= 0 ? world_x / 8 : -((7 - world_x) / 8);
    map_y = world_y >= 0 ? world_y / 8 : -((7 - world_y) / 8);
    px = (unsigned)world_x & 7u;
    py = (unsigned)world_y & 7u;
    if (bpp == 4u) {
        CityLayerTile *cached = &g_city_layer_tiles[layer];
        if (cached->x != map_x || cached->y != map_y) {
            entry = city_map_tile_entry(layer, map_x, map_y);
            nba = view_reg(view, 0x210bu);
            char_base = (uint32_t)(layer ? (nba >> 4u) : (nba & 15u)) << 13u;
            row_address = char_base + (uint32_t)(entry & 0x03ffu) * 32u +
                          ((entry & 0x8000u) ? 7u - py : py) * 2u;
            cached->x = map_x;
            cached->y = map_y;
            cached->packed = city_pattern_4bpp(row_address);
            cached->flip_x = (uint8_t)((entry & 0x4000u) != 0u);
            cached->palette = (uint8_t)(((entry >> 10u) & 7u) * 16u);
            cached->priority = bg_priority(mode, layer, (entry >> 13u) & 1u,
                                          (view_reg(view, 0x2105u) & 0x08u) != 0u);
        }
        bit = cached->flip_x ? px : 7u - px;
        color = (uint8_t)((cached->packed >> (bit * 4u)) & 15u);
        if (color) {
            pixel->transparent = 0u;
            pixel->layer = (uint8_t)layer;
            pixel->priority = cached->priority;
            pixel->palette_index = (uint8_t)(cached->palette + color);
            pixel->color = cgram_color(pixel->palette_index);
        }
        return 1;
    }
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
    color = background_color_index(row_address, bit, bpp);
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
    uint8_t color;
    unsigned bit;

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
    color = background_color_index(row_address, bit, bpp);
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

static PpuObject decode_object(unsigned size_mode, unsigned index) {
    PpuObject object;
    uint8_t high = g_oam[512u + index / 4u];
    uint8_t pair = (uint8_t)((high >> ((index & 3u) * 2u)) & 3u);
    uint8_t attributes = g_oam[index * 4u + 3u];
    uint8_t large = (uint8_t)((pair >> 1) & 1u);
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

typedef struct PpuDecodedObjects {
    PpuObject objects[128];
    unsigned size_mode;
} PpuDecodedObjects;

static void object_line(const PpuLineView *view, unsigned y,
                        unsigned output_width, unsigned left_margin,
                        int cursor_shift_x, int cursor_shift_y,
                        uint8_t palettes[SC_V28_MAX_FRAME_WIDTH],
                        uint8_t priorities[SC_V28_MAX_FRAME_WIDTH],
                        PpuDecodedObjects *decoded) {
    PpuObjectLine items[32];
    PpuObjectTile tiles[34];
    unsigned item_count = 0u, tile_count = 0u;
    unsigned scan, i, t, p;
    uint8_t selection = view_reg(view, 0x2101u);
    const unsigned size_mode = selection >> 5u;
    unsigned first = g_input->oam_priority_rotation
        ? ((unsigned)g_input->oam_word_address >> 1) & 127u : 0u;
    const int cursor_on_map = g_input->cursor_on_map;
    const int cursor_x = g_input->cursor_x;
    const int cursor_base = g_input->cursor_base;
    const int cursor_extension = cursor_x > cursor_base ? cursor_x - cursor_base :
                                 (cursor_x < 16 ? cursor_x - 16 : 0);
    memset(palettes, 0, output_width);
    memset(priorities, 0, output_width);

    /* This renderer already uses a fixed OAM image for the frame.
       Decode it once per size mode, while keeping scanline visibility,
       cursor shifts, priority rotation and tile addressing unchanged. */
    if (decoded && decoded->size_mode != size_mode) {
        for (unsigned index = 0u; index < 128u; ++index)
            decoded->objects[index] = decode_object(size_mode, index);
        decoded->size_mode = size_mode;
    }

    for (scan = 0u; scan < 128u; ++scan) {
        unsigned index = (first + scan) & 127u;
        PpuObject object = decoded ? decoded->objects[index] : decode_object(size_mode, index);
        uint8_t line;
        int object_x = object.x >= 256u ? (int)object.x - 512 : (int)object.x;
        int display_x = object_x;
        int display_y = (int)object.y;
        int cursor_object = cursor_on_map && index < 4u;
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

/* The native Mode 1 backgrounds share a tile row across up to eight
   neighboring pixels. Decode the row once, keeping priority and palette
   separate from window and color math in the compositor. */
static void native_mode1_row(const PpuLineView *view, unsigned layer,
                            unsigned y, uint16_t *row) {
    const unsigned bgmode = view_reg(view, 0x2105u);
    const unsigned sc = view_reg(view, (uint16_t)(0x2107u + layer));
    const unsigned nba = view_reg(view, layer < 2u ? 0x210bu : 0x210cu);
    const unsigned bpp = layer == 2u ? 2u : 4u;
    const unsigned tile_size = bgmode & (0x10u << layer) ? 16u : 8u;
    const unsigned width = sc & 1u ? 64u : 32u;
    const unsigned height = sc & 2u ? 64u : 32u;
    const unsigned wx_mask = width * tile_size - 1u;
    const unsigned wy = (y + 1u + view->scroll[layer * 2u + 1u]) &
                        (height * tile_size - 1u);
    const unsigned ty = wy / tile_size;
    const unsigned map_base = ((sc & 0xfcu) << 9u) +
        ((ty >> 5u) * (width >> 5u)) * 0x800u + ((ty & 31u) << 6u);
    const unsigned char_base = ((layer & 1u) ? nba >> 4u : nba & 15u) << 13u;
    unsigned wx = view->scroll[layer * 2u] & wx_mask;
    for (unsigned x = 0u; x < SC_V28_FRAME_WIDTH;) {
        const unsigned tx = wx / tile_size;
        const unsigned entry = read_vram16(map_base +
            (tx >> 5u) * 0x800u + (tx & 31u) * 2u);
        unsigned px = wx & (tile_size - 1u);
        unsigned py = wy & (tile_size - 1u);
        unsigned tile = entry & 0x03ffu;
        const unsigned span = 8u - (px & 7u);
        const int flip = (entry & 0x4000u) != 0u;
        if (flip) px = tile_size - 1u - px;
        if (entry & 0x8000u) py = tile_size - 1u - py;
        tile = (tile + (px >> 3u) + ((py >> 3u) << 4u)) & 0x03ffu;
        const uint32_t address = char_base + tile * bpp * 8u + (py & 7u) * 2u;
        uint32_t packed;
        if (bpp == 4u) {
            packed = city_pattern_4bpp(address);
        } else {
            const unsigned planes = read_vram16(address);
            packed = space_bits(planes & 255u) | (space_bits(planes >> 8u) << 1u);
        }
        const unsigned tag = ((unsigned)bg_priority(1u, layer,
            (entry >> 13u) & 1u, (bgmode & 8u) != 0u) << 8u) |
            (((entry >> 10u) & 7u) << bpp);
        int bit = 7 - (int)(px & 7u);
        for (unsigned n = 0u; n < span && x < SC_V28_FRAME_WIDTH; ++n) {
            const unsigned color = (packed >> ((unsigned)bit * 4u)) & 15u;
            row[x++] = (uint16_t)(color ? tag | color : 0u);
            bit += flip ? 1 : -1;
        }
        wx = (wx + span) & wx_mask;
    }
}

static PpuPixel screen_pixel(const PpuLineView *view, unsigned screen_mask,
                             unsigned window_enable, int x, unsigned y,
                             uint8_t obj_palette, uint8_t obj_priority_value,
                             const uint16_t *const rows[3]) {
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
        if (layer < 3u && rows[layer]) {
            const unsigned sample = rows[layer][x];
            if ((sample >> 8u) > best.priority) {
                best.priority = (uint8_t)(sample >> 8u);
                best.layer = (uint8_t)layer;
                best.palette_index = (uint8_t)sample;
                best.color = cgram_color(best.palette_index);
            }
            continue;
        }
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

/* Decode a Mode 1 city row one tile span at a time. Each entry carries
 * priority and palette index, with zero reserved for transparent pixels.
 * The compositor still handles HUD, objects, windows and color math. */
static void city_mode1_row(const PpuLineView *view, unsigned layer,
                           int world_x, int world_y, unsigned width,
                           uint16_t *row) {
    int map_x = world_x >= 0 ? world_x / 8 : -((7 - world_x) / 8);
    const int map_y = world_y >= 0 ? world_y / 8 : -((7 - world_y) / 8);
    unsigned px = (unsigned)world_x & 7u;
    const unsigned py = (unsigned)world_y & 7u;
    const unsigned nba = view_reg(view, 0x210bu);
    const uint32_t base = (layer ? nba >> 4u : nba & 15u) << 13u;
    unsigned x = 0u;
    while (x < width) {
        const uint16_t entry = city_map_tile_entry(layer, map_x++, map_y);
        const unsigned flip = (entry & 0x4000u) != 0u;
        const unsigned tile_y = (entry & 0x8000u) ? 7u - py : py;
        const uint32_t packed = city_pattern_4bpp(base +
            (uint32_t)(entry & 0x03ffu) * 32u + tile_y * 2u);
        const unsigned nonzero_base =
            ((unsigned)bg_priority(1u, layer, (entry >> 13u) & 1u, 0) << 8u) |
            (((entry >> 10u) & 7u) << 4u);
        do {
            const unsigned bit = flip ? px : 7u - px;
            const unsigned color = (packed >> (bit * 4u)) & 15u;
            row[x++] = (uint16_t)(color ? nonzero_base | color : 0u);
        } while (++px < 8u && x < width);
        px = 0u;
    }
}

static PpuPixel city_mode1_screen(const PpuLineView *view, unsigned mask,
                                 unsigned windows, unsigned x, unsigned y,
                                 uint8_t sprite, uint8_t sprite_priority,
                                 const uint16_t (*rows)[SC_V28_MAX_FRAME_WIDTH],
                                 const uint16_t *hud_row) {
    PpuPixel best = {0};
    const int native = x < SC_V28_FRAME_WIDTH;
    const int effect_x = native ? (int)x : 128;
    unsigned sample = 0u;
    best.layer = 5u;
    if ((mask & 1u) && (!(windows & 1u) || !window_mask(view, 0u, effect_x))) {
        sample = rows[0][x];
        if (sample) best.layer = 0u;
    }
    if ((mask & 2u) && (!(windows & 2u) || !window_mask(view, 1u, effect_x))) {
        const unsigned bg2 = rows[1][x];
        if ((bg2 >> 8u) > (sample >> 8u)) {
            sample = bg2;
            best.layer = 1u;
        }
    }
    best.priority = (uint8_t)(sample >> 8u);
    best.palette_index = (uint8_t)sample;
    if (native && (mask & 4u) && (!(windows & 4u) || !window_mask(view, 2u, effect_x))) {
        if (hud_row) {
            const unsigned sample_hud = hud_row[x];
            if ((sample_hud >> 8u) > best.priority) {
                best.layer = 2u;
                best.priority = (uint8_t)(sample_hud >> 8u);
                best.palette_index = (uint8_t)sample_hud;
            }
        } else {
            PpuPixel hud;
            if (background_pixel(view, 2u, (int)x, y, &hud) &&
                !hud.transparent && hud.priority > best.priority)
                best = hud;
        }
    }
    if ((mask & 16u) && sprite) {
        const uint8_t priority = obj_priority(1u, sprite_priority);
        if (priority > best.priority &&
            (!(windows & 16u) || !window_mask(view, 4u, effect_x))) {
            best.priority = priority;
            best.palette_index = sprite;
            best.layer = 4u;
            best.obj_palette = (uint8_t)((sprite - 128u) >> 4u);
        }
    }
    best.color = cgram_color(best.palette_index);
    return best;
}

/* Playback shortcut for window-free city rows with decoded HUD samples.
   Compare priorities strictly so ties still prefer the earlier layer. */
static inline PpuPixel city_mode1_main_without_windows(unsigned x,
    const uint16_t *bg1, const uint16_t *bg2, const uint16_t *hud,
    const uint16_t *palette, uint8_t sprite, uint8_t sprite_priority) {
    unsigned sample = bg1[x];
    unsigned layer = sample ? 0u : 5u;
    const unsigned bg2_sample = bg2[x];
    if ((bg2_sample >> 8u) > (sample >> 8u)) {
        sample = bg2_sample;
        layer = 1u;
    }
    if (x < SC_V28_FRAME_WIDTH) {
        const unsigned hud_sample = hud[x];
        if ((hud_sample >> 8u) > (sample >> 8u)) {
            sample = hud_sample;
            layer = 2u;
        }
    }
    unsigned obj_palette = 0u;
    if (sprite && obj_priority(1u, sprite_priority) > (sample >> 8u)) {
        sample = sprite;
        layer = 4u;
        obj_palette = (sprite - 128u) >> 4u;
    }
    PpuPixel pixel = {0};
    pixel.color = palette[sample & 255u];
    pixel.layer = (uint8_t)layer;
    pixel.obj_palette = (uint8_t)obj_palette;
    return pixel;
}

static unsigned active_layer_windows(const PpuLineView *view, unsigned enabled) {
    unsigned active = 0u;
    for (unsigned layer = 0u; layer < 5u; ++layer) {
        const unsigned bit = 1u << layer;
        if ((enabled & bit) && (layer_window_nibble(view, layer) & 10u)) active |= bit;
    }
    return active;
}

static PpuPixel city_screen_pixel(const PpuLineView *view,
                                  unsigned screen_mask,
                                  unsigned window_enable,
                                  int source_x, int city_source_x,
                                  int city_source_y, unsigned y,
                                  uint8_t obj_palette,
                                  uint8_t obj_priority_value,
                                  const uint16_t (*city_rows)[SC_V28_MAX_FRAME_WIDTH],
                                  const uint16_t *hud_row) {
    if (city_rows)
        return city_mode1_screen(view, screen_mask, window_enable, (unsigned)source_x,
                                 y, obj_palette, obj_priority_value, city_rows, hud_row);
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

static int render_input(const SCV28VideoInput *input,
                                      unsigned output_width,
                                      unsigned left_margin,
                                      int collect_diagnostics,
                                      uint16_t *out555,
                                      size_t cap555,
                                      uint32_t *out32,
                                      size_t cap32,
                                      SCV28VideoReport *report) {
    SCV28VideoReport result;
    unsigned y, x;
    uint8_t object_palette[SC_V28_MAX_FRAME_WIDTH];
    uint8_t object_priority_value[SC_V28_MAX_FRAME_WIDTH];
    uint16_t city_rows[2][SC_V28_MAX_FRAME_WIDTH];
    uint16_t native_rows[3][SC_V28_FRAME_WIDTH];
    static const uint16_t empty_row[SC_V28_MAX_FRAME_WIDTH] = {0};
    uint16_t palette_colors[256];
    PpuDecodedObjects decoded_objects;
    unsigned supported_lines = 0u;
    unsigned scanline_states = 0u;
    int expand_city_view;
    decoded_objects.size_mode = 8u;

    memset(&result, 0, sizeof(result));
    size_t output_pixels = (size_t)output_width * SC_V28_FRAME_HEIGHT;
    if (!input || !out555 || !out32 || !report ||
        output_width < SC_V28_FRAME_WIDTH ||
        output_width > SC_V28_MAX_FRAME_WIDTH ||
        left_margin > output_width - SC_V28_FRAME_WIDTH ||
        cap555 < output_pixels || cap32 < output_pixels)
        return 0;

    g_input = input;
    g_vram = input->vram;
    g_cgram = input->cgram;
    g_oam = input->oam;
    result.mode = (uint8_t)(current_reg(0x2105u) & 7u);
    result.brightness = input->brightness;
    result.forced_blank = input->forced_blank;
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
    expand_city_view = (g_city_map || output_width > SC_V28_FRAME_WIDTH) &&
        (current_reg(0x2105u) & 0x0fu) == 0x09u &&
        current_reg(0x2107u) == 0x58u &&
        current_reg(0x2108u) == 0x5cu;
    if (expand_city_view && !collect_diagnostics)
        for (unsigned entry = 0u; entry < 256u; ++entry) palette_colors[entry] = cgram_color(entry);
    if (expand_city_view || !collect_diagnostics) {
        if (++g_city_cache_frame == 0u) {
            memset(g_city_pattern_rows, 0, sizeof(g_city_pattern_rows));
            g_city_cache_frame = 1u;
        }
        for (unsigned layer = 0u; layer < 2u; ++layer) g_city_entry_rows[layer].y = -32768;
    }

    for (y = 0u; y < SC_V11_PPU_VISIBLE_LINES; ++y) {
        PpuLineView view = line_view(input, y);
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
        int native_camera_x = view.city_camera_x;
        int native_camera_y = view.city_camera_y;
        int display_left_x = native_camera_x - (int)left_margin;
        int display_top_y = native_camera_y;
        int max_display_left_x = (g_city_map ? (int)g_city_map->width : SC_CITY_MAP_WIDTH) *
                                 8 - (int)output_width;
        int max_display_top_y = (g_city_map ? (int)g_city_map->height : SC_CITY_MAP_HEIGHT) * 8 -
                                (int)SC_V11_PPU_VISIBLE_LINES;
        int cursor_shift_x = 0;
        int cursor_shift_y = 0;
        unsigned object_left_margin = left_margin;

        if (g_city_map) {
            display_left_x += g_city_map->origin_x;
            display_top_y += g_city_map->origin_y;
            native_camera_x += g_city_map->origin_x;
            native_camera_y += g_city_map->origin_y;
        }
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

        if (input->completed_frame == input->frame &&
            input->lines[y].valid && input->lines[y].frame == input->frame)
            scanline_states++;
        if (mode > 6u) {
            (void)snprintf(result.error, sizeof(result.error),
                "PPU mode %u reached at frame %u line %u; Mode 7 requires its matrix path",
                mode, input->frame, y + 1u);
            *report = result;
            return 0;
        }
        supported_lines++;
        if (forced_blank) continue;

        object_line(&view, y, output_width, object_left_margin,
                    cursor_shift_x, cursor_shift_y,
                    object_palette, object_priority_value,
                    collect_diagnostics ? NULL : &decoded_objects);
        const uint16_t (*city_samples)[SC_V28_MAX_FRAME_WIDTH] = NULL;
        const uint16_t *native_samples[3] = {NULL, NULL, NULL};
        if (mode == 1u && !collect_diagnostics) {
            const unsigned mosaic = view_reg(&view, 0x2106u);
            const unsigned layers = (main_mask | ((cgwsel & 2u) ? sub_mask : 0u)) & 7u;
            for (unsigned layer = expand_city_view ? 2u : 0u; layer < 3u; ++layer) {
                const unsigned bit = 1u << layer;
                if ((layers & bit) && ((mosaic >> 4u) == 0u || !(mosaic & bit))) {
                    native_mode1_row(&view, layer, y, native_rows[layer]);
                    native_samples[layer] = native_rows[layer];
                }
            }
        }
        if (expand_city_view && (g_city_map || !collect_diagnostics) && mode == 1u) {
            const unsigned mosaic = view_reg(&view, 0x2106u);
            const unsigned layers = (main_mask | ((cgwsel & 2u) ? sub_mask : 0u)) & 3u;
            if ((mosaic >> 4u) == 0u || !(mosaic & layers)) {
                for (unsigned layer = 0u; layer < 2u; ++layer)
                    if (layers & (1u << layer))
                        city_mode1_row(&view, layer, display_left_x,
                                       display_top_y + (int)y + 1, output_width,
                                       city_rows[layer]);
                city_samples = city_rows;
            }
        }
        if (expand_city_view)
            for (unsigned layer = 0u; layer < 2u; ++layer) g_city_layer_tiles[layer].x = INT32_MIN;
        const int windowless_city = !collect_diagnostics && city_samples &&
            (!(main_mask & 4u) || native_samples[2]) &&
            !active_layer_windows(&view, main_mask & main_windows);
        const uint16_t *simple_bg1 = main_mask & 1u ? city_rows[0] : empty_row;
        const uint16_t *simple_bg2 = main_mask & 2u ? city_rows[1] : empty_row;
        const uint16_t *simple_hud = main_mask & 4u ? native_samples[2] : empty_row;
        const int simple_sprites = (main_mask & 16u) != 0u;
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
            PpuPixel main_pixel = windowless_city
                ? city_mode1_main_without_windows(x, simple_bg1, simple_bg2, simple_hud,
                    palette_colors, simple_sprites ? object_palette[x] : 0u, object_priority_value[x])
                : expand_city_view
                ? city_screen_pixel(&view, main_mask, main_windows,
                                    (int)x, city_source_x, city_source_y, y,
                                    object_palette[x], object_priority_value[x],
                                    city_samples, native_samples[2])
                : screen_pixel(&view, main_mask, main_windows, source_x, y,
                               object_palette[x], object_priority_value[x], native_samples);
            PpuPixel sub_pixel;
            uint16_t color = main_pixel.color;
            uint16_t addend = view.fixed_color;
            const unsigned clip_setting = (cgwsel >> 6) & 3u;
            const unsigned math_setting = (cgwsel >> 4) & 3u;
            int color_window = ((clip_setting == 1u || clip_setting == 2u ||
                                 math_setting == 1u || math_setting == 2u) &&
                                 window_mask(&view, 5u, effect_x));
            int clip_main = region_applies((cgwsel >> 6) & 3u, color_window);
            int prevent_math = region_applies((cgwsel >> 4) & 3u, color_window);
            int math_enabled = (cgadsub & (1u << main_pixel.layer)) != 0u;

            if (clip_main) color = 0u;
            if (main_pixel.layer == 4u && main_pixel.obj_palette < 4u)
                math_enabled = 0;
            if (prevent_math) math_enabled = 0;
            if (math_enabled && (cgwsel & 0x02u)) {
                sub_pixel = expand_city_view
                    ? city_screen_pixel(&view, sub_mask, sub_windows,
                                        (int)x, city_source_x, city_source_y, y,
                                        object_palette[x],
                                        object_priority_value[x], city_samples, native_samples[2])
                    : screen_pixel(&view, sub_mask, sub_windows, source_x, y,
                                   object_palette[x],
                                   object_priority_value[x], native_samples);
                addend = sub_pixel.color;
            }
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
    /* Explicit captures request reports. Playback only needs the pixels. */
    if (collect_diagnostics) {
        analyze(out32, output_pixels,
                &result.nonblack_pixels, &result.unique_colors);
        sc_sha256_bytes((const unsigned char *)out555,
                        output_pixels * sizeof(*out555),
                        result.bgr555_sha256);
        sc_sha256_bytes((const unsigned char *)out32,
                        output_pixels * sizeof(*out32),
                        result.bgra_sha256);
    }
    if (scanline_states != 0u && scanline_states != SC_V11_PPU_VISIBLE_LINES) {
        (void)snprintf(result.error, sizeof(result.error),
            "incomplete PPU scanline state frame=%u lines=%u/224",
            input->frame, scanline_states);
        *report = result;
        return 0;
    }
    result.passed = 1u;
    *report = result;
    return 1;
}

int sc_v28_render_input(const SCV28VideoInput *input, unsigned output_width,
                        unsigned left_margin, int diagnostics,
                        uint16_t *bgr555, size_t bgr555_capacity,
                        uint32_t *bgra, size_t bgra_capacity,
                        SCV28VideoReport *report, const SCV28CityMapView *map) {
    g_city_map = map;
    const int ok = render_input(input, output_width, left_margin, diagnostics,
                                bgr555, bgr555_capacity, bgra, bgra_capacity, report);
    g_input = NULL;
    g_city_map = NULL;
    return ok;
}

int sc_v28_render_first_visible_frame(const SCV11Runtime *runtime, unsigned output_width,
                                      unsigned left_margin, int diagnostics,
                                      uint16_t *bgr555, size_t bgr555_capacity,
                                      uint32_t *bgra, size_t bgra_capacity,
                                      SCV28VideoReport *report) {
    if (!runtime) return 0;
    const SCV28VideoInput input = runtime_input(runtime);
    return sc_v28_render_input(&input, output_width, left_margin, diagnostics,
        bgr555, bgr555_capacity, bgra, bgra_capacity, report, NULL);
}

int sc_v28_render_stock_map_view(const SCV11Runtime *runtime, unsigned output_width,
                               unsigned left_margin, int diagnostics,
                               uint16_t *bgr555, uint32_t *bgra, SCV28VideoReport *report,
                               const SCV28CityMapView *map) {
    if (!runtime) return 0;
    const SCV28VideoInput input = runtime_input(runtime);
    return sc_v28_render_input(&input, output_width, left_margin, diagnostics,
        bgr555, SC_V28_MAX_FRAME_PIXELS, bgra, SC_V28_MAX_FRAME_PIXELS, report, map);
}
