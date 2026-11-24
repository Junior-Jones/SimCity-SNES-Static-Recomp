#ifndef SIMCITY_BATTERY_WRITER_H
#define SIMCITY_BATTERY_WRITER_H

#include <stddef.h>
#include <stdint.h>
#include <wchar.h>

typedef struct SimCityBatteryWrite SimCityBatteryWrite;

int simcity_win32_ensure_directory_tree(const wchar_t *path);
int simcity_battery_write_now(const wchar_t *directory, const wchar_t *path,
                              const uint8_t *image, size_t size);
/* On success owns image until collection. On failure the caller owns it. */
SimCityBatteryWrite *simcity_battery_write_start(const wchar_t *directory,
    const wchar_t *path, uint8_t *image, size_t size);
/* Returns 1 and consumes the job once complete (including a failed write).
   wait=0 polls without blocking. A return of 0 leaves the job untouched. */
int simcity_battery_write_collect(SimCityBatteryWrite *job, int wait, int *written);

#endif
