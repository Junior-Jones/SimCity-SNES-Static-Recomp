#include "sc_core_internal.h"
#include "sc_v11_runtime.h"
#include <string.h>

void sc_copy_text(char *out, size_t cap, const char *text) {
    size_t i = 0;
    if (!out || cap == 0) return;
    while (text && text[i] && i + 1 < cap) { out[i] = text[i]; i++; }
    out[i] = 0;
}

/* Compact SHA-256 implementation used for ROM identity validation. */
typedef struct SCSha256 {
    uint32_t h[8];
    uint64_t bits;
    unsigned char block[64];
    size_t used;
} SCSha256;

static uint32_t rotate_right(uint32_t value, unsigned count) {
    return (value >> count) | (value << (32u - count));
}

static const uint32_t sha_k[64] = {
0x428a2f98u,0x71374491u,0xb5c0fbcfu,0xe9b5dba5u,0x3956c25bu,0x59f111f1u,0x923f82a4u,0xab1c5ed5u,
0xd807aa98u,0x12835b01u,0x243185beu,0x550c7dc3u,0x72be5d74u,0x80deb1feu,0x9bdc06a7u,0xc19bf174u,
0xe49b69c1u,0xefbe4786u,0x0fc19dc6u,0x240ca1ccu,0x2de92c6fu,0x4a7484aau,0x5cb0a9dcu,0x76f988dau,
0x983e5152u,0xa831c66du,0xb00327c8u,0xbf597fc7u,0xc6e00bf3u,0xd5a79147u,0x06ca6351u,0x14292967u,
0x27b70a85u,0x2e1b2138u,0x4d2c6dfcu,0x53380d13u,0x650a7354u,0x766a0abbu,0x81c2c92eu,0x92722c85u,
0xa2bfe8a1u,0xa81a664bu,0xc24b8b70u,0xc76c51a3u,0xd192e819u,0xd6990624u,0xf40e3585u,0x106aa070u,
0x19a4c116u,0x1e376c08u,0x2748774cu,0x34b0bcb5u,0x391c0cb3u,0x4ed8aa4au,0x5b9cca4fu,0x682e6ff3u,
0x748f82eeu,0x78a5636fu,0x84c87814u,0x8cc70208u,0x90befffau,0xa4506cebu,0xbef9a3f7u,0xc67178f2u};

static void sha_block(SCSha256 *state, const unsigned char *block) {
    uint32_t w[64], a, b, c, d, e, f, g, h, t1, t2;
    unsigned i;
    for (i = 0; i < 16; i++) {
        w[i] = ((uint32_t)block[i * 4] << 24) | ((uint32_t)block[i * 4 + 1] << 16) |
               ((uint32_t)block[i * 4 + 2] << 8) | block[i * 4 + 3];
    }
    for (i = 16; i < 64; i++) {
        uint32_t s0 = rotate_right(w[i - 15], 7) ^ rotate_right(w[i - 15], 18) ^ (w[i - 15] >> 3);
        uint32_t s1 = rotate_right(w[i - 2], 17) ^ rotate_right(w[i - 2], 19) ^ (w[i - 2] >> 10);
        w[i] = w[i - 16] + s0 + w[i - 7] + s1;
    }
    a = state->h[0]; b = state->h[1]; c = state->h[2]; d = state->h[3];
    e = state->h[4]; f = state->h[5]; g = state->h[6]; h = state->h[7];
    for (i = 0; i < 64; i++) {
        uint32_t s1 = rotate_right(e, 6) ^ rotate_right(e, 11) ^ rotate_right(e, 25);
        uint32_t choose = (e & f) ^ ((~e) & g);
        uint32_t s0 = rotate_right(a, 2) ^ rotate_right(a, 13) ^ rotate_right(a, 22);
        uint32_t majority = (a & b) ^ (a & c) ^ (b & c);
        t1 = h + s1 + choose + sha_k[i] + w[i];
        t2 = s0 + majority;
        h = g; g = f; f = e; e = d + t1; d = c; c = b; b = a; a = t1 + t2;
    }
    state->h[0] += a; state->h[1] += b; state->h[2] += c; state->h[3] += d;
    state->h[4] += e; state->h[5] += f; state->h[6] += g; state->h[7] += h;
}

static void sha_init(SCSha256 *state) {
    static const uint32_t initial[8] = {0x6a09e667u,0xbb67ae85u,0x3c6ef372u,0xa54ff53au,
        0x510e527fu,0x9b05688cu,0x1f83d9abu,0x5be0cd19u};
    memcpy(state->h, initial, sizeof(initial));
    state->bits = 0;
    state->used = 0;
}

static void sha_update(SCSha256 *state, const unsigned char *data, size_t size) {
    state->bits += (uint64_t)size * 8u;
    while (size) {
        size_t take = 64u - state->used;
        if (take > size) take = size;
        memcpy(state->block + state->used, data, take);
        state->used += take;
        data += take;
        size -= take;
        if (state->used == 64u) { sha_block(state, state->block); state->used = 0; }
    }
}

static void sha_final(SCSha256 *state, unsigned char out[32]) {
    unsigned i;
    state->block[state->used++] = 0x80;
    if (state->used > 56u) {
        while (state->used < 64u) state->block[state->used++] = 0;
        sha_block(state, state->block);
        state->used = 0;
    }
    while (state->used < 56u) state->block[state->used++] = 0;
    for (i = 0; i < 8; i++) state->block[63u - i] = (unsigned char)(state->bits >> (i * 8u));
    sha_block(state, state->block);
    for (i = 0; i < 8; i++) {
        out[i * 4] = (unsigned char)(state->h[i] >> 24);
        out[i * 4 + 1] = (unsigned char)(state->h[i] >> 16);
        out[i * 4 + 2] = (unsigned char)(state->h[i] >> 8);
        out[i * 4 + 3] = (unsigned char)state->h[i];
    }
}

void sc_sha256_bytes(const unsigned char *data, size_t size, char out_hex[65]) {
    static const char digits[] = "0123456789abcdef";
    SCSha256 state;
    unsigned char hash[32];
    unsigned i;
    sha_init(&state); sha_update(&state, data, size); sha_final(&state, hash);
    for (i = 0; i < 32; i++) { out_hex[i * 2] = digits[hash[i] >> 4]; out_hex[i * 2 + 1] = digits[hash[i] & 15u]; }
    out_hex[64] = 0;
}

uint32_t sc_crc32_bytes(const unsigned char *data, size_t size) {
    uint32_t value = 0xffffffffu;
    size_t i;
    unsigned bit;
    for (i = 0; i < size; i++) {
        value ^= data[i];
        for (bit = 0; bit < 8; bit++) value = (value >> 1) ^ (0xedb88320u & (uint32_t)-(int)(value & 1u));
    }
    return ~value;
}

int sc_v11_validate_rom_identity(const uint8_t *rom, size_t size, char output_sha256[65]) {
    char digest[65];
    if (output_sha256) output_sha256[0] = 0;
    if (!rom || size != SC_V11_ROM_SIZE) return 0;
    sc_sha256_bytes(rom, size, digest);
    if (output_sha256) memcpy(output_sha256, digest, sizeof(digest));
    return strcmp(digest, SC_V11_EXPECTED_ROM_SHA256) == 0;
}
