#ifndef CCLI_ARG_MODEL_VAL_H
#define CCLI_ARG_MODEL_VAL_H

typedef char* const     ccli_out_val_str;
typedef char            ccli_out_val_char;
typedef int             ccli_out_val_int;

struct ccli_expect_val_str {
    const char* const name;
    ccli_out_val_str* const out;
};

struct ccli_expect_val_char {
    const char* const name;
    ccli_out_val_char* const out;
};

struct ccli_expect_val_int {
    const char* const name;
    ccli_out_val_int* const out;
};


#endif // CCLI_ARG_MODEL_VAL_H
