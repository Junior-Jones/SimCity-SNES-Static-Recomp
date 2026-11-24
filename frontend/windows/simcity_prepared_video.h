#ifndef SIMCITY_PREPARED_VIDEO_H
#define SIMCITY_PREPARED_VIDEO_H

#include "simcity_static_recomp.h"

typedef struct SimCityPreparedVideo SimCityPreparedVideo;

SimCityPreparedVideo *simcity_prepared_video_open(void);
void simcity_prepared_video_close(SimCityPreparedVideo *video);
/* Submit on the game-owning thread. Returns 2 when the job queue is full,
   1 when submitted, and 0 on failure. Do not destroy the game first. */
int simcity_prepared_video_submit(SimCityPreparedVideo *video,
    const SimCityRecomp *game, uint32_t frame);
/* Select a prepared frame finished by dispatch, never newer than target.
   Returns 2 for a new frame, 1 if the previous frame must be held, 0 on error. */
int simcity_prepared_video_present(SimCityPreparedVideo *video,
    uint32_t target, uint64_t dispatch, uint32_t *frame, uint64_t *ready_at);
/* Borrowed pixels on the owning thread, valid until the next successful
   presentation or close. A submission alone does not invalidate them. */
const uint32_t *simcity_prepared_video_pixels(const SimCityPreparedVideo *video,
    unsigned *width);
uint64_t simcity_prepared_video_peak_render_ticks(const SimCityPreparedVideo *video);
/* Rendered images reused across distinct, fully scheduled guest frames. */
uint32_t simcity_prepared_video_reused_images(SimCityPreparedVideo *video);
/* Owner-thread diagnostic for an image already collected by present(). */
uint64_t simcity_prepared_video_queued_ready_tick(const SimCityPreparedVideo *video, uint32_t frame);
typedef enum {
    SIMCITY_RENDER_NOT_OBSERVED, SIMCITY_RENDER_WAITING, SIMCITY_RENDER_RUNNING,
    SIMCITY_RENDER_PUBLISHED, SIMCITY_RENDER_COLLECTED, SIMCITY_RENDER_ALREADY_SHOWN
} SimCityRenderStage;
typedef struct {
    SimCityRenderStage stage;
    uint64_t started, finished;
} SimCityRenderStatus;
/* Samples worker progress now, without collecting or changing selection.
   A publication observed here may have occurred after the frame cutoff. */
SimCityRenderStatus simcity_prepared_video_status(SimCityPreparedVideo *video, uint32_t frame);
const char *simcity_prepared_video_stage_name(SimCityRenderStage stage);
uint32_t simcity_prepared_video_last_presented(const SimCityPreparedVideo *video);

#endif
