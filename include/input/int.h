#ifndef CCLI_INPUT_INT_H
#define CCLI_INPUT_INT_H

#include "stdbool.h"

typedef int ccli_out_input_int;

static const int CCLI_INPUT_INT_BUFFER_SIZE = 64;
bool ccli_input_int(
    const char* const message,
    
    ccli_out_input_int* const out
);

#endif // CCLI_INPUT_INT_H