#ifndef CCLI_ARG_STORAGE_TOKEN_H
#define CCLI_ARG_STORAGE_TOKEN_H

#include "flag.h"
#include "datatype.h"

enum token_type {
    TOKEN_TYPE_LNOG_FLAG,
    TOKEN_TYPE_SHORT_FLAG,
    TOKEN_TYPE_DATATYPE_STR,
    TOKEN_TYPE_DATATYPE_INT
};

union token_data {
    const struct token_long_flag lf;
    const struct token_short_flag sf;
    const struct token_datatype_str dstr;
    const struct token_datatype_int dint;
};

struct token {
    const union token_data data;
    const enum token_type type;
};

#endif // CCLI_ARG_STORAGE_TOKEN_H
