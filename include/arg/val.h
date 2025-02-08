#ifndef CCLI_ARG_VAL_H
#define CCLI_ARG_VAL_H

typedef char* const     out_catched_val_str;
typedef char            out_catched_val_char;
typedef int             out_catched_val_int;
typedef char* const     out_catched_val_filepath;
typedef char* const     out_catched_val_dirpath;
typedef char* const     out_catched_val_url;

struct expect_val_str {
    const char* const name;
    out_catched_val_str* const out;
};

struct expect_val_char {
    const char* const name;
    out_catched_val_char* const out;
};

struct expect_val_int {
    const char* const name;
    out_catched_val_int* const out;
};

struct expect_val_filepath {
    const char* const name;
    out_catched_val_filepath* const out;
};

struct expect_val_dirpath {
    const char* const name;
    out_catched_val_dirpath* const out;
};

struct expect_val_url {
    const char* const name;
    out_catched_val_url* const out;
};

#endif // CCLI_ARG_VAL_H
