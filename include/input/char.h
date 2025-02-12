#ifndef CCLI_INPUT_CHAR_H
#define CCLI_INPUT_CHAR_H

#include "stdbool.h"

typedef char ccli_out_input_char;

static const int CCLI_INPUT_CHAR_BUFFER_SIZE = 64;
bool ccli_input_char(
    const char* const message,

    ccli_out_input_char* const out
);

#endif // CCLI_INPUT_CHAR_H