#ifndef CCLI_SCAN_STR_H
#define CCLI_SCAN_STR_H

#include "stdbool.h"

typedef char* const ccli_out_scan_str;

static const int CCLI_SCAN_STR_BUFFER_SIZE = 64;

bool ccli_scan_str(
    const char* const message,

    ccli_out_scan_str* const out,
    const int out_size
);

#endif // CCLI_SCAN_CHAR_H