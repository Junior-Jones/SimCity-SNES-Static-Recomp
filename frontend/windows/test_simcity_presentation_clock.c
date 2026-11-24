#include "simcity_presentation_clock.h"
#include "simcity_static_recomp.h"
#ifdef _WIN32
#include "simcity_win32_host_dispatch.h"
#endif
#include <stdio.h>

#define CHECK(condition) do { if (!(condition)) { \
    fprintf(stderr, "Timing check failed at line %d: %s\n", __LINE__, #condition); \
    return 1; \
} } while (0)

#ifdef _WIN32
static int win32_dispatch_check(void) {
    MSG msg;
    const UINT work_message = WM_APP + 90u;
    /* Stand in for a signaled synchronization timer with a deterministic
       auto-reset event. Post input to this test thread, without a window. */
    HANDLE due = CreateEventW(NULL, FALSE, FALSE, NULL);
    CHECK(due != NULL);
    PeekMessageW(&msg, NULL, 0, 0, PM_NOREMOVE);
    CHECK(PostThreadMessageW(GetCurrentThreadId(), work_message, 1u, 0u));
    CHECK(PostThreadMessageW(GetCurrentThreadId(), work_message, 2u, 0u));
    CHECK(SetEvent(due));
    CHECK(!simcity_host_take_timer_between_messages(due, 0u, 1));
    CHECK(PeekMessageW(&msg, NULL, work_message, work_message, PM_REMOVE) && msg.wParam == 1u);
    CHECK(!simcity_host_take_timer_between_messages(due, 1u, 0));
    CHECK(simcity_host_take_timer_between_messages(due, 1u, 1));
    CHECK(!simcity_host_take_timer_between_messages(due, 1u, 1));
    CHECK(!simcity_host_present_between_messages(0u, 1, 1000u, 1001u));
    CHECK(!simcity_host_present_between_messages(1u, 0, 1000u, 1001u));
    CHECK(!simcity_host_present_between_messages(1u, 1, 1000u, 999u));
    CHECK(simcity_host_present_between_messages(1u, 1, 1000u, 1000u));
    /* The deadline path did not remove input or consume a timer signal. */
    CHECK(!simcity_host_take_timer_between_messages(due, 1u, 1));
    CHECK(PeekMessageW(&msg, NULL, work_message, work_message, PM_REMOVE) && msg.wParam == 2u);
    CloseHandle(due);
    return 0;
}
#endif

int main(void) {
    SimCityPresentationClock video;
    const uint64_t frequency = 10000003u;
    const uint64_t seconds = 20u;
    uint64_t slots;
    uint64_t tick;
    simcity_presentation_reset(&video, 0u, frequency);
    for (tick = 0; tick < seconds * SIMCITY_HOST_PRESENT_HZ; ++tick) {
        const uint64_t due = tick * frequency / SIMCITY_HOST_PRESENT_HZ;
        CHECK(video.deadline == due);
        CHECK(simcity_prepared_deadline(tick, frequency) == due);
        CHECK(simcity_prepared_target(tick) == (uint32_t)(
            tick * SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR /
            (SIMCITY_HOST_PRESENT_HZ * SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR)) + 1u);
        if (due) CHECK(simcity_presentation_consume(&video, due - 1u) == 0u);
        CHECK(simcity_presentation_consume(&video, due) == 1u);
    }
    CHECK(video.deadline == seconds * frequency);
    CHECK(seconds * SIMCITY_RECOMP_PRESENTATION_FPS_NUMERATOR /
          SIMCITY_RECOMP_PRESENTATION_FPS_DENOMINATOR == 1201u);
    simcity_presentation_reset(&video, 0u, frequency);
    slots = simcity_presentation_consume(&video, seconds * frequency - 1u);
    CHECK(slots == 1200u);
    CHECK(video.deadline == seconds * frequency);
    CHECK(simcity_presentation_consume(&video, seconds * frequency - 1u) == 0u);
    /* A positive frame count is not a deadline check. Compare a measured
       completion against the next slot, including after merged slots. */
    CHECK(!simcity_presentation_paint_late(0u, video.deadline));
    CHECK(!simcity_presentation_paint_late(video.deadline - 1u, video.deadline));
    CHECK(simcity_presentation_paint_late(video.deadline, video.deadline));
    CHECK(simcity_presentation_paint_late(video.deadline + 1u, video.deadline));
    simcity_presentation_reset(&video, seconds * frequency + 123u, frequency);
    CHECK(simcity_presentation_consume(&video, seconds * frequency + 123u) == 1u);
    CHECK(simcity_prepared_guest_wakeup(949u, 1000u, 6000u, 0) == 949u);
    CHECK(simcity_prepared_guest_wakeup(950u, 1000u, 6000u, 0) == 1000u);
    CHECK(simcity_prepared_guest_wakeup(1000u, 1000u, 6000u, 0) == 1000u);
    CHECK(simcity_prepared_guest_wakeup(1001u, 1000u, 6000u, 0) == 1001u);
    CHECK(simcity_prepared_guest_wakeup(950u, 1000u, 6000u, 1) == 950u);
    CHECK(simcity_prepared_guest_wakeup(999u, 1000u, 6000u, 1) == 999u);
    CHECK(simcity_prepared_lead_frames(0) == 2u);
    CHECK(simcity_prepared_lead_frames(1) == 3u);
    {
        const uint64_t slot = 120u;
        const uint32_t bias = simcity_prepared_recovery_bias(slot, 116u, 3u, 0u);
        CHECK(simcity_prepared_biased_target(slot, bias) == 114u);
        CHECK(simcity_prepared_biased_target(slot + 1u, bias) == 115u);
        CHECK(simcity_prepared_recovery_bias(slot + 1u, 118u, 3u, bias) == bias);
        CHECK(simcity_prepared_biased_target(0u, bias) == 1u);
        CHECK(simcity_prepared_recovery_bias(0u, 0u, 3u, 0u) == 0u);
    }
    {
        const uint64_t period = 1000u;
        uint64_t deadline = 10000u;
        uint32_t fraction = 19u;
        CHECK(simcity_guest_limit_debt(5000u, period, &deadline, &fraction) == 0u);
        CHECK(simcity_guest_limit_debt(10126u, period, &deadline, &fraction) == 0u);
        CHECK(simcity_guest_limit_debt(12000u, period, &deadline, &fraction) == 0u);
        CHECK(deadline == 10000u && fraction == 19u);
        CHECK(simcity_guest_limit_debt(12001u, period, &deadline, &fraction) == 3u);
        CHECK(deadline == 12001u && fraction == 0u);
        CHECK(simcity_guest_limit_debt(12002u, 0u, &deadline, &fraction) == 0u);
    }
#ifdef _WIN32
    CHECK(win32_dispatch_check() == 0);
#endif
    return 0;
}
