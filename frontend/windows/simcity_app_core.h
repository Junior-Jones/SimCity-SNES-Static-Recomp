#ifndef SIMCITY_APP_CORE_H
#define SIMCITY_APP_CORE_H

#include "simcity_static_recomp.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Thin host connector. All execution, video, audio PCM, snapshots, and SRAM
   remain owned by the public SimCity static-core API. */
int simcity_recomp_write_diagnostic_log(
    const SimCityRecomp *instance, const char *path,
    const char *screenshot_path, char *error, size_t error_capacity);

#ifdef __cplusplus
}
#endif

#endif
