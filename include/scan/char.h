#ifndef CCLI_SCAN_CHAR_H
#define CCLI_SCAN_CHAR_H

typedef char ccli_out_scan_char;

void ccli_scan_char(
    const char* const message,
    const int size,

    ccli_out_scan_char* const out
);

#endif // CCLI_SCAN_CHAR_H