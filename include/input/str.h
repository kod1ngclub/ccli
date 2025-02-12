#ifndef CCLI_INPUT_STR_H
#define CCLI_INPUT_STR_H

#include "stdbool.h"

typedef char* const ccli_out_input_str;

static const int CCLI_INPUT_STR_BUFFER_SIZE = 64;

bool ccli_input_str(
    const char* const message,

    ccli_out_input_str* const out,
    const int out_size
);

#endif // CCLI_INPUT_CHAR_H