#ifndef CCLI_SCAN_UTIL_H
#define CCLI_SCAN_UTIL_H

#include "str.h"

// ==== utils of ccli_scan_str()
bool ccli_scan_str8(
    const char* const message,

    ccli_out_scan_str* const out
);

bool ccli_scan_str16(
    const char* const message,

    ccli_out_scan_str* const out
);

bool ccli_scan_str32(
    const char* const message,

    ccli_out_scan_str* const out
);

bool ccli_scan_str64(
    const char* const message,

    ccli_out_scan_str* const out
);

bool ccli_scan_str128(
    const char* const message,

    ccli_out_scan_str* const out
);

bool ccli_scan_str70(
    const char* const message,

    ccli_out_scan_str* const out
);

#endif // CCLI_SCAN_CHAR_H