#ifndef CCLI_INPUT_CHAR_H
#define CCLI_INPUT_CHAR_H

#include "stdbool.h"

static const int CCLI_INPUT_CHAR_BUFFER_SIZE = 64;
bool ccli_input_char(
    const char* const message,

    char* const out
);

#endif // CCLI_INPUT_CHAR_H
