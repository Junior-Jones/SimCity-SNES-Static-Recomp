#ifndef SIMCITY_STOCK_CONTROLLER_TAPE_H
#define SIMCITY_STOCK_CONTROLLER_TAPE_H

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/* One SNES controller word for each native guest frame. This format never
   records host time, audio fences, or synthetic map edits. */
enum { STOCK_TAPE_MAX_FRAMES = 3600000u, STOCK_TAPE_HEADER = 20u };
typedef struct StockControllerTape {
    uint16_t *input;
    uint32_t start_frame, frames, capacity;
} StockControllerTape;

static inline void stock_controller_tape_clear(StockControllerTape *tape) {
    free(tape->input);
    memset(tape, 0, sizeof(*tape));
}

static inline int stock_controller_tape_append(StockControllerTape *tape, uint16_t input,
                                                 uint32_t completed_frame) {
    if ((input & 15u) || tape->frames >= STOCK_TAPE_MAX_FRAMES ||
        UINT32_MAX - tape->start_frame <= tape->frames ||
        completed_frame != tape->start_frame + tape->frames + 1u)
        return 0;
    if (tape->frames == tape->capacity) {
        uint32_t capacity = tape->capacity ? tape->capacity * 2u : 4096u;
        if (capacity > STOCK_TAPE_MAX_FRAMES) capacity = STOCK_TAPE_MAX_FRAMES;
        uint16_t *input_words = realloc(tape->input, (size_t)capacity * sizeof(*input_words));
        if (!input_words) return 0;
        tape->input = input_words;
        tape->capacity = capacity;
    }
    tape->input[tape->frames++] = input;
    return 1;
}

static inline void stock_tape_put32(uint8_t *p, uint32_t v) {
    for (unsigned n = 0u; n < 4u; ++n) p[n] = (uint8_t)(v >> (n * 8u));
}

static inline uint32_t stock_tape_get32(const uint8_t *p) {
    uint32_t v = 0u;
    for (unsigned n = 0u; n < 4u; ++n) v |= (uint32_t)p[n] << (n * 8u);
    return v;
}

static inline uint32_t stock_tape_checksum(const uint8_t *bytes, size_t size) {
    uint32_t hash = UINT32_C(2166136261);
    for (size_t i = 8u; i < size; ++i) {
        if (i < 16u || i >= STOCK_TAPE_HEADER)
            hash = (hash ^ bytes[i]) * UINT32_C(16777619);
    }
    return hash;
}

/* Caller owns the returned flat file buffer, with little-endian fields and
   a checksum over the frame index, length, and controller stream. */
static inline uint8_t *stock_controller_tape_encode(const StockControllerTape *tape, size_t *size) {
    *size = 0u;
    if (!tape->input || !tape->frames || tape->frames > STOCK_TAPE_MAX_FRAMES ||
        UINT32_MAX - tape->start_frame < tape->frames)
        return NULL;
    const size_t bytes = STOCK_TAPE_HEADER + (size_t)tape->frames * 2u;
    uint8_t *output = malloc(bytes);
    if (!output) return NULL;
    memcpy(output, "SCINPUT1", 8u);
    stock_tape_put32(output + 8u, tape->start_frame);
    stock_tape_put32(output + 12u, tape->frames);
    for (uint32_t i = 0u; i < tape->frames; ++i) {
        output[STOCK_TAPE_HEADER + i * 2u] = (uint8_t)tape->input[i];
        output[STOCK_TAPE_HEADER + i * 2u + 1u] = (uint8_t)(tape->input[i] >> 8u);
    }
    stock_tape_put32(output + 16u, stock_tape_checksum(output, bytes));
    *size = bytes;
    return output;
}

/* A malformed tape leaves the existing in-memory route untouched. */
static inline int stock_controller_tape_decode(StockControllerTape *tape,
    const uint8_t *bytes, size_t size) {
    if (!bytes || size < STOCK_TAPE_HEADER || memcmp(bytes, "SCINPUT1", 8u)) return 0;
    const uint32_t start = stock_tape_get32(bytes + 8u), frames = stock_tape_get32(bytes + 12u);
    if (!frames || frames > STOCK_TAPE_MAX_FRAMES || UINT32_MAX - start < frames ||
        size != STOCK_TAPE_HEADER + (size_t)frames * 2u ||
        stock_tape_get32(bytes + 16u) != stock_tape_checksum(bytes, size)) return 0;
    uint16_t *input = malloc((size_t)frames * sizeof(*input));
    if (!input) return 0;
    for (uint32_t i = 0u; i < frames; ++i) {
        const uint8_t *p = bytes + STOCK_TAPE_HEADER + i * 2u;
        if (p[0] & 15u) { free(input); return 0; }
        input[i] = (uint16_t)(p[0] | ((uint16_t)p[1] << 8u));
    }
    stock_controller_tape_clear(tape);
    *tape = (StockControllerTape){input, start, frames, frames};
    return 1;
}

#endif
