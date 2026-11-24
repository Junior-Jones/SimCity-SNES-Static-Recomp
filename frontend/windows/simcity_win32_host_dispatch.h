#ifndef SIMCITY_WIN32_HOST_DISPATCH_H
#define SIMCITY_WIN32_HOST_DISPATCH_H

#include <windows.h>
#include <stdint.h>

/* Finish at least one already-waiting message. Between subsequent
   handlers, take a signaled one-shot timer before removing more input.
   The caller now owns the consumed signal and must service it once. */
static inline int simcity_host_take_timer_between_messages(
    HANDLE timer, unsigned processed, int game_running) {
    return game_running && processed && timer &&
        WaitForSingleObject(timer, 0u) == WAIT_OBJECT_0;
}

/* A message wake can reach the deadline before the kernel signals the
   timer. In that case dispatch only presentation, leaving the timer to
   drive the guest as usual. Still allow the first queued message through. */
static inline int simcity_host_present_between_messages(unsigned processed,
    int prepared_running, uint64_t deadline, uint64_t now) {
    return processed && prepared_running && now >= deadline;
}

#endif
