#include "simcity_prepared_video.h"
#include <windows.h>
#include <stdlib.h>
#include <string.h>

enum { READY_FRAMES = 5, JOB_SLOTS = 4 };
typedef struct RenderJob {
    SimCityRecompVideoSnapshot *snapshot;
    uint32_t *pixels;
    uint32_t frame;
    unsigned rendered_width;
    uint64_t started, finished, duration;
} RenderJob;

struct SimCityPreparedVideo {
    HANDLE thread, stop, job;
    RenderJob jobs[JOB_SLOTS];
    uint32_t storage[JOB_SLOTS + READY_FRAMES + 1][SIMCITY_RECOMP_MAX_FRAME_PIXELS];
    uint32_t *queue[READY_FRAMES], *shown;
    uint32_t index[READY_FRAMES], presented, collected;
    unsigned next, width, shown_width;
    uint64_t ready_at[READY_FRAMES], peak_render;
    /* Only the worker accesses these buffers. No slot that was published
       to the UI can become the source of a later worker copy. */
    SimCityRecompVideoSnapshot *reuse_snapshot;
    uint32_t reuse_pixels[SIMCITY_RECOMP_MAX_FRAME_PIXELS];
    unsigned reuse_width;
    volatile LONG submitted, started, completed, reused_images;
};

static uint32_t sequence(volatile LONG *counter) {
    return (uint32_t)InterlockedCompareExchange(counter, 0, 0);
}

static int render_job(SimCityPreparedVideo *v, RenderJob *j) {
    if (v->reuse_width &&
        simcity_recomp_video_snapshot_same_world_image_inputs(v->reuse_snapshot, j->snapshot)) {
        j->rendered_width = v->reuse_width;
        memcpy(j->pixels, v->reuse_pixels,
            (size_t)v->reuse_width * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*j->pixels));
        InterlockedIncrement(&v->reused_images);
        return 1;
    }
    if (!simcity_recomp_video_snapshot_render(j->snapshot, j->pixels,
            SIMCITY_RECOMP_MAX_FRAME_PIXELS, &j->rendered_width)) return 0;
    if (v->reuse_snapshot && simcity_recomp_video_snapshot_uses_world_map(j->snapshot)) {
        SimCityRecompVideoSnapshot *recycled = v->reuse_snapshot;
        v->reuse_snapshot = j->snapshot;
        j->snapshot = recycled;
        v->reuse_width = j->rendered_width;
        memcpy(v->reuse_pixels, j->pixels,
            (size_t)v->reuse_width * SIMCITY_RECOMP_FRAME_HEIGHT * sizeof(*j->pixels));
    } else {
        v->reuse_width = 0u;
    }
    return 1;
}

static DWORD WINAPI render_worker(LPVOID opaque) {
    SimCityPreparedVideo *v = opaque;
    const HANDLE waits[] = {v->stop, v->job};
    uint32_t completed = 0u;
    while (WaitForMultipleObjects(2u, waits, FALSE, INFINITE) == WAIT_OBJECT_0 + 1u) {
        while (completed != sequence(&v->submitted)) {
            if (WaitForSingleObject(v->stop, 0u) != WAIT_TIMEOUT) return 0u;
            RenderJob *j = &v->jobs[completed % JOB_SLOTS];
            LARGE_INTEGER start, end;
            if (!QueryPerformanceCounter(&start)) return 0u;
            j->started = (uint64_t)start.QuadPart;
            InterlockedExchange(&v->started, (LONG)(completed + 1u));
            if (!render_job(v, j) || !QueryPerformanceCounter(&end)) return 0u;
            j->finished = (uint64_t)end.QuadPart;
            j->duration = (uint64_t)(end.QuadPart - start.QuadPart);
            InterlockedExchange(&v->completed, (LONG)++completed);
        }
    }
    return 0u;
}

void simcity_prepared_video_close(SimCityPreparedVideo *v) {
    if (!v) return;
    if (v->thread) {
        SetEvent(v->stop);
        WaitForSingleObject(v->thread, INFINITE);
        CloseHandle(v->thread);
    }
    if (v->stop) CloseHandle(v->stop);
    if (v->job) CloseHandle(v->job);
    for (unsigned i = 0u; i < JOB_SLOTS; ++i)
        simcity_recomp_video_snapshot_destroy(v->jobs[i].snapshot);
    simcity_recomp_video_snapshot_destroy(v->reuse_snapshot);
    free(v);
}

SimCityPreparedVideo *simcity_prepared_video_open(void) {
    SimCityPreparedVideo *v = calloc(1u, sizeof(*v));
    if (!v) return NULL;
    for (unsigned i = 0u; i < JOB_SLOTS; ++i) {
        v->jobs[i].pixels = v->storage[i];
        v->jobs[i].snapshot = simcity_recomp_video_snapshot_create();
        if (!v->jobs[i].snapshot) {
            simcity_prepared_video_close(v);
            return NULL;
        }
    }
    for (unsigned i = 0u; i < READY_FRAMES; ++i)
        v->queue[i] = v->storage[JOB_SLOTS + i];
    v->shown = v->storage[JOB_SLOTS + READY_FRAMES];
    /* A cache allocation failure still leaves the original worker intact. */
    v->reuse_snapshot = simcity_recomp_video_snapshot_create();
    v->stop = CreateEventW(NULL, TRUE, FALSE, NULL);
    v->job = CreateEventW(NULL, FALSE, FALSE, NULL);
    if (v->stop && v->job)
        v->thread = CreateThread(NULL, 0u, render_worker, v, 0u, NULL);
    if (v->thread) return v;
    simcity_prepared_video_close(v);
    return NULL;
}

static int collect(SimCityPreparedVideo *v) {
    /* A slot belongs to the worker until completed is published, then to
       this thread until collected. The game itself never crosses threads. */
    const uint32_t completed = sequence(&v->completed);
    while (v->collected != completed) {
        RenderJob *j = &v->jobs[v->collected % JOB_SLOTS];
        if (j->rendered_width != v->width) return 0;
        /* Recycle the evicted queue buffer into the next submission.
           The worker cannot touch it until the owning thread publishes
           another job for this slot. */
        uint32_t *recycled = v->queue[v->next];
        v->queue[v->next] = j->pixels;
        j->pixels = recycled;
        v->index[v->next] = j->frame;
        v->ready_at[v->next] = j->finished;
        if (j->duration > v->peak_render) v->peak_render = j->duration;
        v->next = (v->next + 1u) % READY_FRAMES;
        ++v->collected;
    }
    return completed == sequence(&v->submitted) ||
           WaitForSingleObject(v->thread, 0u) == WAIT_TIMEOUT;
}

int simcity_prepared_video_submit(SimCityPreparedVideo *v,
    const SimCityRecomp *game, uint32_t frame) {
    if (!v || !game || !frame || !collect(v)) return 0;
    const uint32_t submitted = sequence(&v->submitted);
    if (submitted - v->collected == JOB_SLOTS) return 2;
    RenderJob *j = &v->jobs[submitted % JOB_SLOTS];
    const unsigned width = simcity_recomp_frame_width(game);
    if ((v->width && v->width != width) ||
        !simcity_recomp_video_snapshot_capture(j->snapshot, game))
        return 0;
    v->width = width;
    j->frame = frame;
    InterlockedExchange(&v->submitted, (LONG)(submitted + 1u));
    return SetEvent(v->job) != 0;
}

uint64_t simcity_prepared_video_peak_render_ticks(const SimCityPreparedVideo *v) {
    return v ? v->peak_render : 0u;
}

uint32_t simcity_prepared_video_reused_images(SimCityPreparedVideo *v) {
    return v ? sequence(&v->reused_images) : 0u;
}

uint64_t simcity_prepared_video_queued_ready_tick(const SimCityPreparedVideo *v, uint32_t frame) {
    if (v && frame)
        for (unsigned i = 0u; i < READY_FRAMES; ++i)
            if (v->index[i] == frame) return v->ready_at[i];
    return 0u;
}

SimCityRenderStatus simcity_prepared_video_status(SimCityPreparedVideo *v, uint32_t frame) {
    if (!v || !frame) return (SimCityRenderStatus){0};
    if (frame <= v->presented) return (SimCityRenderStatus){SIMCITY_RENDER_ALREADY_SHOWN, 0u, 0u};
    const uint64_t ready = simcity_prepared_video_queued_ready_tick(v, frame);
    if (ready) return (SimCityRenderStatus){SIMCITY_RENDER_COLLECTED, 0u, ready};
    const uint32_t jobs = sequence(&v->submitted) - v->collected;
    /* Read the worker counters in order. The timestamps are immutable
       after their corresponding sequence is published, until the UI
       collects and submits a new job for the same ring entry. */
    const uint32_t started = sequence(&v->started) - v->collected;
    const uint32_t completed = sequence(&v->completed) - v->collected;
    for (uint32_t i = 0; i < jobs; ++i) {
        const RenderJob *j = &v->jobs[(v->collected + i) % JOB_SLOTS];
        if (j->frame != frame) continue;
        if (i < completed) return (SimCityRenderStatus){SIMCITY_RENDER_PUBLISHED, j->started, j->finished};
        if (i < started) return (SimCityRenderStatus){SIMCITY_RENDER_RUNNING, j->started, 0u};
        return (SimCityRenderStatus){SIMCITY_RENDER_WAITING, 0u, 0u};
    }
    return (SimCityRenderStatus){0};
}

const char *simcity_prepared_video_stage_name(SimCityRenderStage stage) {
    switch (stage) {
        case SIMCITY_RENDER_WAITING: return "waiting";
        case SIMCITY_RENDER_RUNNING: return "running";
        case SIMCITY_RENDER_PUBLISHED: return "published";
        case SIMCITY_RENDER_COLLECTED: return "collected";
        case SIMCITY_RENDER_ALREADY_SHOWN: return "at-or-before-shown";
        default: return "not-observed";
    }
}

uint32_t simcity_prepared_video_last_presented(const SimCityPreparedVideo *v) {
    return v ? v->presented : 0u;
}

int simcity_prepared_video_present(SimCityPreparedVideo *v,
    uint32_t target, uint64_t dispatch, uint32_t *frame, uint64_t *ready_at) {
    if (!v || !frame || !collect(v)) return 0;
    uint32_t best = v->presented;
    unsigned index = 0u;
    for (unsigned n = 0; n < READY_FRAMES; ++n)
        if (v->index[n] > best && v->index[n] <= target && v->ready_at[n] <= dispatch) {
            best = v->index[n];
            index = n;
        }
    if (best == v->presented) return 1;
    /* Never recycle the buffer displayed by the owning/UI thread. */
    uint32_t *recycled = v->shown;
    v->shown = v->queue[index];
    v->queue[index] = recycled;
    v->index[index] = 0u;
    v->shown_width = v->width;
    v->presented = *frame = best;
    if (ready_at) *ready_at = v->ready_at[index];
    return 2;
}

const uint32_t *simcity_prepared_video_pixels(const SimCityPreparedVideo *v,
    unsigned *width) {
    if (!v || !v->shown_width) return NULL;
    if (width) *width = v->shown_width;
    return v->shown;
}
