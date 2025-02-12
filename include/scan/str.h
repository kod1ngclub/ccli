#ifndef CCLI_SCAN_STR_H
#define CCLI_SCAN_STR_H

typedef char* const ccli_out_scan_str;

void ccli_scan_str(
    const char* const message,
    const int size,
    
    ccli_out_scan_str* const out
);

#endif // CCLI_SCAN_CHAR_H