#ifndef CCLI_INPUT_STR_H
#define CCLI_INPUT_STR_H

#include "stddef.h"

static const int CCLI_INPUT_STR_BUFFER_SIZE = 64;
int ccli_input_str(const char* const message, char* const out, const size_t size);

#endif // CCLI_INPUT_CHAR_H
