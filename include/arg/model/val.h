#ifndef CCLI_ARG_MODEL_VAL_H
#define CCLI_ARG_MODEL_VAL_H

struct ccli_expect_val_str {
    const char* const name;

    char* const out;
    const int size;
};

struct ccli_expect_val_char {
    const char* const name;

    char* const out;
};

struct ccli_expect_val_int {
    const char* const name;

    int* const out;
};


#endif // CCLI_ARG_MODEL_VAL_H
