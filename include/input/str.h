#ifndef CCLI_INPUT_STR_H
#define CCLI_INPUT_STR_H

static const int CCLI_INPUT_STR_BUFFER_SIZE = 64;
bool ccli_input_str(
    const char* const message,

    char* const out,
    const int size
);

#endif // CCLI_INPUT_CHAR_H
