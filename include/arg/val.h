#ifndef CCLI_ARG_VAL_H
#define CCLI_ARG_VAL_H

typedef char* const     out_val_str;
typedef char            out_val_char;
typedef int             out_val_int;
typedef char* const     out_val_filepath;
typedef char* const     out_val_dirpath;
typedef char* const     out_val_url;

struct cond_val_str {
    const char* const name;
    const out_val_str* const out;
};

struct cond_val_char {
    const char* const name;
    const out_val_char* const out;
};

struct cond_val_int {
    const char* const name;
    const out_val_int* const out;
};

struct cond_val_filepath {
    const char* const name;
    const out_val_filepath* const out;
};

struct cond_val_dirpath {
    const char* const name;
    const out_val_dirpath* const out;
};

struct cond_val_url {
    const char* const name;
    const out_val_url* const out;
};

#endif // CCLI_ARG_VAL_H
