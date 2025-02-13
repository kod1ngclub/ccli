#ifndef CCLI_INPUT_UTIL_H
#define CCLI_INPUT_UTIL_H

#include "str.h"

// ==== utils of ccli_input_str()
void ccli_input_str8(
    const char* const message,

    char* const out
);

void ccli_input_str16(
    const char* const message,

    char* const out
);

void ccli_input_str32(
    const char* const message,

    char* const out
);

void ccli_input_str64(
    const char* const message,

    char* const out
);

void ccli_input_str128(
    const char* const message,

    char* const out
);

void ccli_input_str70(
    const char* const message,

    char* const out
);

#endif // CCLI_INPUT_CHAR_H
