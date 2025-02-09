#ifndef CCLI_ARG_MODEL_VAL_H
#define CCLI_ARG_MODEL_VAL_H

typedef char* const     ccli_out_val_str;
typedef char            ccli_out_val_char;
typedef int             ccli_out_val_int;
typedef char* const     ccli_out_val_filepath;
typedef char* const     ccli_out_val_dirpath;
typedef char* const     ccli_out_val_url;

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

struct ccli_expect_val_filepath {
    const char* const name;
    ccli_out_val_filepath* const out;
};

struct ccli_expect_val_dirpath {
    const char* const name;
    ccli_out_val_dirpath* const out;
};

struct ccli_expect_val_url {
    const char* const name;
    ccli_out_val_url* const out;
};

#endif // CCLI_ARG_MODEL_VAL_H
