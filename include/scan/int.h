#ifndef CCLI_SCAN_INT_H
#define CCLI_SCAN_INT_H

#include "stdbool.h"

typedef int ccli_out_scan_int;

static const int CCLI_SCAN_INT_BUFFER_SIZE = 64;
bool ccli_scan_int(
    const char* const message,
    
    ccli_out_scan_int* const out
);

#endif // CCLI_SCAN_INT_H