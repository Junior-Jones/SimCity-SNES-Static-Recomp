#ifndef SC_AUDIO_TRACE_HASH_H
#define SC_AUDIO_TRACE_HASH_H

#include <stdint.h>

#define SC_AUDIO_TRACE_PRIME UINT64_C(1099511628211)
/* Powers reduced modulo 2^64. */
#define SC_AUDIO_TRACE_PRIME2 UINT64_C(0x000366000002e329)
#define SC_AUDIO_TRACE_PRIME3 UINT64_C(0x08a97b0004e7feab)
#define SC_AUDIO_TRACE_PRIME4 UINT64_C(0x9ffaac085635bc91)

#if defined(SIMCITY_EXPERIMENT_INLINE_AUDIO_TRACE) && defined(_MSC_VER)
#define SC_AUDIO_HASH_INLINE __forceinline
#elif defined(SIMCITY_EXPERIMENT_INLINE_AUDIO_TRACE) && (defined(__GNUC__) || defined(__clang__))
#define SC_AUDIO_HASH_INLINE inline __attribute__((always_inline))
#else
#define SC_AUDIO_HASH_INLINE inline
#endif

static SC_AUDIO_HASH_INLINE uint64_t sc_audio_trace_hash8(uint64_t hash, uint8_t byte) {
    return (hash ^ byte) * SC_AUDIO_TRACE_PRIME;
}

/* The trace stores fixed-width little-endian integers. Multiplying by P^n
   hashes n zero bytes in exactly the same order as the byte-at-a-time form. */
static SC_AUDIO_HASH_INLINE uint64_t sc_audio_trace_hash32(uint64_t hash, uint32_t word) {
    hash = sc_audio_trace_hash8(hash, (uint8_t)word);
    if (word < 0x100u) return hash * SC_AUDIO_TRACE_PRIME3;
    hash = sc_audio_trace_hash8(hash, (uint8_t)(word >> 8u));
    hash = sc_audio_trace_hash8(hash, (uint8_t)(word >> 16u));
    return sc_audio_trace_hash8(hash, (uint8_t)(word >> 24u));
}

static SC_AUDIO_HASH_INLINE uint64_t sc_audio_trace_hash64(uint64_t hash, uint64_t word) {
    const uint32_t high = (uint32_t)(word >> 32u);
    hash = sc_audio_trace_hash32(hash, (uint32_t)word);
    return high ? sc_audio_trace_hash32(hash, high) : hash * SC_AUDIO_TRACE_PRIME4;
}

/* Preserve the four-byte timer record. Stage 2 and 3 are often both zero;
   hash their two zero bytes with one multiplication in that case. */
static SC_AUDIO_HASH_INLINE uint64_t sc_audio_trace_hash_timer(uint64_t hash,
    uint8_t target, uint8_t stage1, uint8_t stage2, uint8_t stage3) {
    hash = sc_audio_trace_hash8(hash, target);
    hash = sc_audio_trace_hash8(hash, stage1);
    if (!(stage2 | stage3)) return hash * SC_AUDIO_TRACE_PRIME2;
    return sc_audio_trace_hash8(sc_audio_trace_hash8(hash, stage2), stage3);
}

#endif
