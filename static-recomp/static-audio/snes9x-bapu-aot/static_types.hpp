#ifndef SC_STATIC_BAPU_TYPES_HPP
#define SC_STATIC_BAPU_TYPES_HPP
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <climits>
using uint8 = std::uint8_t;
using uint16 = std::uint16_t;
using uint32 = std::uint32_t;
using uint64 = std::uint64_t;
using int8 = std::int8_t;
using int16 = std::int16_t;
using int32 = std::int32_t;
using int64 = std::int64_t;
#ifndef debugvirtual
#define debugvirtual
#endif
#ifndef alwaysinline
#if defined(_MSC_VER)
#define alwaysinline __forceinline
#elif defined(__GNUC__) || defined(__clang__)
#define alwaysinline inline __attribute__((always_inline))
#else
#define alwaysinline inline
#endif
#endif
struct SCStaticDspSettings { int InterpolationMethod = 2; bool SeparateEchoBuffer = false; };
extern SCStaticDspSettings SCStaticSettings;
inline bool S9xUWStaticSDSPBRRStep(std::uint16_t, const std::uint8_t*) { return true; }
namespace BOOST {
using uint8_t = std::uint8_t;
using uint16_t = std::uint16_t;
using uint32_t = std::uint32_t;
using int8_t = std::int8_t;
using int16_t = std::int16_t;
using int32_t = std::int32_t;
}
#endif
