#ifndef SIMCITY_PLAYBACK_LOG_H
#define SIMCITY_PLAYBACK_LOG_H

#include <wchar.h>

typedef struct SimCityPlaybackLog SimCityPlaybackLog;

/* One producer (the window thread). Disk writes are worker-owned; a full
   queue drops a diagnostic row, never waits for storage during playback. */
SimCityPlaybackLog *simcity_playback_log_open(const wchar_t *path);
void simcity_playback_log_printf(SimCityPlaybackLog *log, const char *format, ...);
/* At orderly shutdown only: drain all admitted rows before closing. */
void simcity_playback_log_close(SimCityPlaybackLog *log);

#endif
