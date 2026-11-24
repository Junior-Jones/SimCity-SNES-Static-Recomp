#ifndef SIMCITY_SCREENSHOT_REPORT_H
#define SIMCITY_SCREENSHOT_REPORT_H

#include <wchar.h>

/* Write a UTF-8 report beside the screenshot collection, in Logs. The
   screenshot must already exist; a previous report is never overwritten. */
int simcity_write_screenshot_report(const wchar_t *root,
    const wchar_t *screenshot, const char *utf8_report);

#endif
