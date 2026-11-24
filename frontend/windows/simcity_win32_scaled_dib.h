#ifndef SIMCITY_WIN32_SCALED_DIB_H
#define SIMCITY_WIN32_SCALED_DIB_H

#include <windows.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/* Experimental Win32 host scaler. Cache the actual COLORONCOLOR sampling
   positions instead of assuming a rounding rule for fractional ratios. */
typedef struct SimCityScaledDib {
    HDC dc;
    HBITMAP bitmap;
    HGDIOBJ old;
    uint32_t *pixels;
    unsigned *columns, *rows;
    unsigned width, height, source_width, source_height;
    unsigned draws;
} SimCityScaledDib;

static inline void simcity_scaled_dib_close(SimCityScaledDib *s) {
    if (s->old) SelectObject(s->dc, s->old);
    if (s->bitmap) DeleteObject(s->bitmap);
    if (s->dc) DeleteDC(s->dc);
    free(s->columns);
    free(s->rows);
    memset(s, 0, sizeof(*s));
}

static inline BITMAPINFO simcity_scaled_dib_info(unsigned width, unsigned height) {
    BITMAPINFO info = {0};
    info.bmiHeader.biSize = sizeof(info.bmiHeader);
    info.bmiHeader.biWidth = (LONG)width;
    info.bmiHeader.biHeight = -(LONG)height;
    info.bmiHeader.biPlanes = 1;
    info.bmiHeader.biBitCount = 32;
    info.bmiHeader.biCompression = BI_RGB;
    return info;
}

/* Call only when the layout changes. Minification keeps the original path. */
static inline int simcity_scaled_dib_open(SimCityScaledDib *s, HDC compatible,
    unsigned w, unsigned h, unsigned sw, unsigned sh) {
    uint32_t *coordinates = NULL;
    void *bits = NULL;
    BITMAPINFO output, input;
    HGDIOBJ selected;
    int lines;
    if (!sw || !sh || sw > 512u || sh > 512u || w < sw || h < sh ||
        w > 4096u || h > 2160u) return 0;
    simcity_scaled_dib_close(s);
    s->dc = CreateCompatibleDC(compatible);
    if (!s->dc) goto fail;
    output = simcity_scaled_dib_info(w, h);
    input = simcity_scaled_dib_info(sw, sh);
    s->bitmap = CreateDIBSection(s->dc, &output, DIB_RGB_COLORS, &bits, NULL, 0);
    if (!s->bitmap || !bits) goto fail;
    selected = SelectObject(s->dc, s->bitmap);
    if (!selected || selected == HGDI_ERROR) goto fail;
    s->old = selected;
    s->pixels = bits;
    s->columns = (unsigned *)malloc(w * sizeof(*s->columns));
    s->rows = (unsigned *)malloc(h * sizeof(*s->rows));
    coordinates = (uint32_t *)malloc((size_t)sw * sh * sizeof(*coordinates));
    if (!s->columns || !s->rows || !coordinates) goto fail;
    for (unsigned y = 0; y < sh; ++y)
        for (unsigned x = 0; x < sw; ++x)
            coordinates[(size_t)y * sw + x] = x | (y << 12);
    SetStretchBltMode(s->dc, COLORONCOLOR);
    lines = StretchDIBits(s->dc, 0, 0, (int)w, (int)h, 0, 0, (int)sw, (int)sh,
        coordinates, &input, DIB_RGB_COLORS, SRCCOPY);
    if (lines == 0 || lines == GDI_ERROR || !GdiFlush()) goto fail;
    for (unsigned x = 0; x < w; ++x) {
        s->columns[x] = s->pixels[x] & 0xfffu;
        if (s->columns[x] >= sw) goto fail;
    }
    for (unsigned y = 0; y < h; ++y) {
        s->rows[y] = (s->pixels[(size_t)y * w] >> 12) & 0xfffu;
        if (s->rows[y] >= sh) goto fail;
    }
    s->width = w;
    s->height = h;
    s->source_width = sw;
    s->source_height = sh;
    free(coordinates);
    return 1;
fail:
    free(coordinates);
    simcity_scaled_dib_close(s);
    return 0;
}

static inline int simcity_scaled_dib_draw(SimCityScaledDib *s, HDC target,
    int left, int top, const uint32_t *source) {
    if (!s->dc || !target || !source || !GdiFlush()) return 0;
    uint32_t *dest = s->pixels;
    const size_t row_bytes = s->width * sizeof(*dest);
    unsigned last = UINT_MAX;
    for (unsigned y = 0; y < s->height; ++y, dest += s->width) {
        const unsigned next = s->rows[y];
        if (next == last) {
            memcpy(dest, dest - s->width, row_bytes);
        } else {
            const uint32_t *row = source + (size_t)next * s->source_width;
            for (unsigned x = 0; x < s->width; ++x)
                dest[x] = row[s->columns[x]];
            last = next;
        }
    }
    if (!BitBlt(target, left, top, (int)s->width, (int)s->height, s->dc, 0, 0, SRCCOPY))
        return 0;
    ++s->draws;
    return 1;
}

#endif
