#ifndef CCLI_SCAN_INT_H
#define CCLI_SCAN_INT_H

typedef char* const ccli_out_scan_int;

void ccli_scan_int(
    const char* const message,
    ccli_out_scan_int* const out
);

#endif // CCLI_SCAN_INT_H