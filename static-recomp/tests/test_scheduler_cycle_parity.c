#include "sc_v11_runtime.h"
#include "sc_audio_clock_profile.h"
#include "sc_audio_trace_hash.h"
#include <stdio.h>
#include <string.h>

static SCV11Runtime fast, single;
static unsigned rendezvous;
static uint64_t rendezvous_clock;

/* This test isolates the scheduler; real APU parity is checked separately. */
int sc_v11_smp_sync_to_master(SCV11Runtime *r, uint64_t clock) {
    ++rendezvous;
    rendezvous_clock = clock;
    return clock == r->scheduler.master_clock;
}

int sc_v11_process_pending_dma(SCV11Runtime *r, uint8_t speed) {
    (void)r; (void)speed;
    return 1;
}

uint8_t sc_v11_bus_speed(uint32_t address, uint8_t fast_rom) {
    (void)address; (void)fast_rom;
    return 8u;
}

uint8_t sc_v11_bus_read8(SCV11Runtime *r, uint32_t address) {
    (void)r; (void)address;
    return 0u;
}

static uint64_t reference_trace_hash(uint64_t hash, uint64_t value, unsigned bytes) {
    while (bytes--) {
        hash = (hash ^ (value & 255u)) * UINT64_C(1099511628211);
        value >>= 8u;
    }
    return hash;
}

static uint64_t timer_trace_hash(uint64_t hash, uint32_t word) {
    return sc_audio_trace_hash_timer(hash, (uint8_t)word, (uint8_t)(word >> 8u),
        (uint8_t)(word >> 16u), (uint8_t)(word >> 24u));
}

int main(void) {
    uint64_t seed = UINT64_C(1469598103934665603);
    for (unsigned i = 0u; i < 65536u; ++i) {
        seed = seed * UINT64_C(6364136223846793005) + 1u;
        const uint64_t value = seed >> ((i % 8u) * 8u);
        if (sc_audio_trace_hash32(seed, (uint32_t)value) != reference_trace_hash(seed, (uint32_t)value, 4u) ||
            sc_audio_trace_hash32(seed, i) != reference_trace_hash(seed, i, 4u) ||
            timer_trace_hash(seed, (uint32_t)value) != reference_trace_hash(seed, (uint32_t)value, 4u) ||
            timer_trace_hash(seed, i) != reference_trace_hash(seed, i, 4u) ||
            sc_audio_trace_hash64(seed, i) != reference_trace_hash(seed, i, 8u) ||
            sc_audio_trace_hash64(seed, value) != reference_trace_hash(seed, value, 8u)) return 1;
    }
    const uint64_t fast_bus_max =
        (UINT32_MAX - (SC_AUDIO_CLOCK_RATIO_DENOMINATOR - 1u)) /
        SC_AUDIO_CLOCK_RATIO_NUMERATOR;
    const uint64_t fast_absolute_max = UINT64_MAX / SC_AUDIO_CLOCK_RATIO_NUMERATOR;
    const uint64_t deltas[] = {0u, 2u, 6u, 8u, 12u, 40u, fast_bus_max - 1u,
        fast_bus_max, fast_bus_max + 1u, UINT32_MAX, UINT64_MAX};
    const uint64_t absolute[] = {0u, 1u, SC_AUDIO_CLOCK_MASTER_HZ, UINT32_MAX,
        fast_absolute_max - 1u, fast_absolute_max, fast_absolute_max + 1u, UINT64_MAX};
    const unsigned one_carry_max = SC_AUDIO_CLOCK_RATIO_DENOMINATOR / SC_AUDIO_CLOCK_RATIO_NUMERATOR;
    for (unsigned delta = 0u; delta <= one_carry_max + 1u; ++delta)
        for (uint32_t phase = 0u; phase < SC_AUDIO_CLOCK_RATIO_DENOMINATOR; ++phase) {
            uint32_t expected_phase = phase, actual_phase = phase;
            const uint64_t expected = sc_audio_clock_advance(delta, &expected_phase);
            const uint64_t actual = sc_audio_clock_bus_advance(delta, &actual_phase);
            if (actual != expected || actual_phase != expected_phase) {
                fprintf(stderr, "S-SMP short bus mismatch: delta=%u phase=%u\n", delta, phase);
                return 1;
            }
        }
    for (unsigned i = 0u; i < sizeof(deltas) / sizeof(deltas[0]); ++i)
        for (unsigned n = 0u; n < 3u; ++n) {
            uint32_t expected_phase = n * ((SC_AUDIO_CLOCK_RATIO_DENOMINATOR - 1u) / 2u);
            uint32_t actual_phase = expected_phase;
            const uint64_t expected = sc_audio_clock_advance(deltas[i], &expected_phase);
            const uint64_t actual = sc_audio_clock_bus_advance(deltas[i], &actual_phase);
            if (actual != expected || actual_phase != expected_phase) return 1;
        }
    for (unsigned i = 0u; i < sizeof(absolute) / sizeof(absolute[0]); ++i) {
        uint32_t actual_phase;
        const uint64_t actual = sc_audio_clock_absolute(absolute[i], &actual_phase);
        if (actual != sc_audio_clock_closed_form(absolute[i], 0u) ||
            actual_phase != sc_audio_clock_remainder(absolute[i])) return 1;
        if (!sc_audio_clock_absolute_matches(absolute[i], actual, actual_phase) ||
            sc_audio_clock_absolute_matches(absolute[i], actual + 1u, actual_phase) ||
            sc_audio_clock_absolute_matches(absolute[i], UINT64_MAX, actual_phase) ||
            sc_audio_clock_absolute_matches(absolute[i], actual, actual_phase ^ 1u) ||
            sc_audio_clock_absolute_matches(absolute[i], actual, SC_AUDIO_CLOCK_RATIO_DENOMINATOR)) return 1;
    }
    static const struct {
        unsigned scanline, hclock, clocks, field, joy_clocks;
    } cases[] = {
        {50, 1, 0, 0, 0},        /* zero clocks still rendezvous */
        {50, 120, 8, 0, 0},      /* ordinary bus segment */
        {50, 532, 5, 0, 0},      /* immediately before DRAM refresh */
        {50, 532, 6, 0, 0},      /* refresh on the last requested clock */
        {50, 532, 8, 0, 0},      /* refresh inside a bus segment */
        {50, 532, 8, 0, 15},     /* joypad expires during the refresh stall */
        {50, 532, 8, 0, 49},     /* joypad remains active past the stall */
        {50, 538, 8, 0, 0},      /* refresh edge was not reached by this call */
        {50, 1360, 8, 0, 0},     /* new visible scanline and PPU capture */
        {224, 1360, 16, 0, 0},   /* enter VBlank, latch frame, start joypad and NMI */
        {225, 0, 2, 0, 0},       /* VBlank event on the final clock */
        {225, 2, 3, 0, 0},       /* before NMI edge */
        {225, 2, 4, 0, 0},       /* NMI edge on the final clock */
        {0, 0, 8, 1, 0},        /* clear NMI at the start of the next field */
        {261, 1362, 8, 1, 0},   /* roll over into the next field */
        {240, 1358, 6, 1, 0},   /* odd short scanline */
        {240, 1358, 6, 0, 0},   /* long version of the same scanline */
        {228, 33, 8, 0, 8},     /* joypad polling ends on the final clock */
        {228, 33, 8, 0, 4},     /* joypad polling ends inside the segment */
        {228, 33, 8, 0, 9},     /* joypad polling does not end yet */
    };
    for (unsigned i = 0; i < sizeof(cases) / sizeof(cases[0]); ++i) {
        memset(&fast, 0, sizeof(fast));
        fast.scheduler.frame = 12u;
        fast.scheduler.master_clock = 10000u;
        fast.scheduler.scanline = (uint16_t)cases[i].scanline;
        fast.scheduler.hclock = (uint16_t)cases[i].hclock;
        fast.scheduler.field = (uint8_t)cases[i].field;
        fast.scheduler.nmi_line = fast.scheduler.nmi_flag = 1u;
        fast.scheduler.refresh_hclock = 538u;
        fast.machine.nmi_enabled = 1u;
        fast.machine.auto_joypad_enabled = 1u;
        fast.joypad[0] = 0x8123u;
        fast.machine.mmio[5] = 9u;
        fast.ppu_line_state[0].frame = 13u;
        fast.ppu_line_state[0].valid = 1u;
        fast.scheduler.auto_joypad_active = (uint8_t)(cases[i].joy_clocks != 0u);
        fast.auto_joypad_end_master_clock = 10000u + cases[i].joy_clocks;
        memcpy(&single, &fast, sizeof(single));
        rendezvous = 0u;
        sc_v11_scheduler_advance(&fast, cases[i].clocks);
        if (rendezvous != 1u || rendezvous_clock != fast.scheduler.master_clock) {
            fprintf(stderr, "audio rendezvous mismatch in scheduler case %u\n", i);
            return 1;
        }
        if (cases[i].scanline == 50u && cases[i].hclock == 532u && cases[i].clocks >= 6u) {
            const uint32_t elapsed = 40u + cases[i].clocks;
            if (!fast.scheduler.refresh_done || fast.scheduler.in_refresh ||
                fast.scheduler.hclock != 532u + elapsed ||
                fast.scheduler.master_clock != 10000u + elapsed ||
                fast.scheduler.auto_joypad_active != (cases[i].joy_clocks > elapsed)) {
                fprintf(stderr, "DRAM refresh events or elapsed clocks mismatch in case %u\n", i);
                return 1;
            }
        }
        for (unsigned tick = 0; tick < cases[i].clocks; ++tick)
            sc_v11_scheduler_advance(&single, 1u);
        if (memcmp(&fast, &single, sizeof(fast)) != 0) {
            fprintf(stderr, "cycle parity mismatch in scheduler case %u\n", i);
            return 1;
        }
    }
    printf("Scheduler matched single ticks in %zu cases.\n", sizeof(cases) / sizeof(cases[0]));
    return 0;
}
