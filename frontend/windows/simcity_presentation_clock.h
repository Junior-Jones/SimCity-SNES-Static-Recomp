#ifndef SIMCITY_PRESENTATION_CLOCK_H
#define SIMCITY_PRESENTATION_CLOCK_H

#include <stdint.h>
#include "simcity_static_recomp.h"

#define SIMCITY_HOST_PRESENT_HZ 60u
#define SIMCITY_GUEST_MAX_DEBT_FRAMES 2u
#define SIMCITY_PREPARED_LEAD_FRAMES 2u
#define SIMCITY_WORLD_PREPARED_LEAD_FRAMES 3u

/* The larger map occasionally has a long native simulation step followed
   by a slower render. Give that workload one extra prepared video slot
   without changing guest deadlines or the PCM clock. */
static inline unsigned simcity_prepared_lead_frames(int expanded_city) {
    return expanded_city ? SIMCITY_WORLD_PREPARED_LEAD_FRAMES : SIMCITY_PREPARED_LEAD_FRAMES;
}

static inline uint32_t simcity_prepared_target(uint64_t slot) {
    return (uint32_t)(slot * SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR /
        (SIMCITY_HOST_PRESENT_HZ * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR)) + 1u;
}

static inline uint32_t simcity_prepared_biased_target(uint64_t slot, uint32_t bias) {
    const uint32_t target = simcity_prepared_target(slot);
    return target > bias ? target - bias : 1u;
}

/* After an already-counted guest rebase, recover the normal video buffer
   distance without restarting the renderer or shifting the 60 Hz clock.
   A target at or before the last displayed frame simply holds that frame. */
static inline uint32_t simcity_prepared_recovery_bias(uint64_t next_slot,
    uint32_t guest_frame, unsigned lead, uint32_t current_bias) {
    const uint32_t unbiased = simcity_prepared_target(next_slot);
    const uint32_t target = guest_frame >= lead ? guest_frame - lead + 1u : 1u;
    const uint32_t required = unbiased > target ? unbiased - target : 0u;
    return required > current_bias ? required : current_bias;
}

static inline uint64_t simcity_prepared_deadline(uint64_t slot, uint64_t frequency) {
    return slot / SIMCITY_HOST_PRESENT_HZ * frequency +
           slot % SIMCITY_HOST_PRESENT_HZ * frequency / SIMCITY_HOST_PRESENT_HZ;
}

/* Defer the legacy policy in the final half of a presentation interval.
   The overlap policy can paint an immutable frame from a guest checkpoint,
   so it needs no start deferral. Neither policy moves the guest deadline. */
static inline uint64_t simcity_prepared_guest_wakeup(uint64_t guest,
    uint64_t presentation, uint64_t frequency, int overlap) {
    return !overlap && guest <= presentation &&
           presentation - guest <= frequency / (SIMCITY_HOST_PRESENT_HZ * 2u)
               ? presentation : guest;
}

typedef struct {
    uint64_t deadline, frequency;
    unsigned remainder;
} SimCityPresentationClock;

/* Called after consuming the current slot(s). A missing completion
   timestamp is not evidence of a late paint. */
static inline int simcity_presentation_paint_late(uint64_t completed,
                                                  uint64_t next_deadline) {
    return completed && completed >= next_deadline;
}

static inline void simcity_presentation_reset(SimCityPresentationClock *clock,
                                             uint64_t now, uint64_t frequency) {
    clock->deadline = now;
    clock->frequency = frequency;
    clock->remainder = 0u;
}

/* Return due presentation slots. Callers draw at most once; this clock never
   determines how many frames to run on the console or how much audio to emit. */
static inline uint64_t simcity_presentation_consume(SimCityPresentationClock *clock,
                                                   uint64_t now) {
    uint64_t slots, seconds;
    if (now < clock->deadline || clock->frequency < SIMCITY_HOST_PRESENT_HZ)
        return 0u;
    seconds = (now - clock->deadline) / clock->frequency;
    clock->deadline += seconds * clock->frequency;
    slots = seconds * SIMCITY_HOST_PRESENT_HZ;
    do {
        clock->deadline += clock->frequency / SIMCITY_HOST_PRESENT_HZ;
        clock->remainder += (unsigned)(clock->frequency % SIMCITY_HOST_PRESENT_HZ);
        if (clock->remainder >= SIMCITY_HOST_PRESENT_HZ) {
            ++clock->deadline;
            clock->remainder -= SIMCITY_HOST_PRESENT_HZ;
        }
        ++slots;
    } while (clock->deadline <= now);
    return slots;
}

/* Keep the guest's original absolute schedule through brief work spikes.
   Callers must still run at most one guest frame per dispatch and service
   presentation/UI between dispatches. A long stall is discarded, not
   replayed as a burst. The return value counts elapsed deadline slots. */
static inline uint64_t simcity_guest_limit_debt(uint64_t now, uint64_t frame_ticks,
                                               uint64_t *deadline,
                                               uint32_t *fraction) {
    if (now <= *deadline || !frame_ticks) return 0u;
    const uint64_t elapsed = now - *deadline;
    if (elapsed <= frame_ticks * SIMCITY_GUEST_MAX_DEBT_FRAMES) return 0u;
    *deadline = now;
    *fraction = 0u;
    return elapsed / frame_ticks + 1u;
}

#endif
