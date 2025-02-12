#ifndef CCLI_SCAN_CHAR_H
#define CCLI_SCAN_CHAR_H

#include "stdbool.h"

typedef char ccli_out_scan_char;

static const int CCLI_SCAN_CHAR_BUFFER_SIZE = 64;
bool ccli_scan_char(
    const char* const message,

    ccli_out_scan_char* const out
);

#endif // CCLI_SCAN_CHAR_H