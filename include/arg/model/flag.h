#ifndef CCLI_ARG_MODEL_FLAG_H
#define CCLI_ARG_MODEL_FLAG_H

#include "stdbool.h"

typedef bool    ccli_out_flag;
typedef bool    ccli_out_long_flag;
typedef bool    ccli_out_short_flag;

struct ccli_expect_long_flag {
    const char* const lflag;

    ccli_out_long_flag* const out;
};

struct ccli_expect_short_flag {
    const char sflag;

    ccli_out_short_flag* const out;
};

struct ccli_expect_flag {
    const char* const lflag;
    const char sflag;

    ccli_out_flag* const out;
};

#endif // CCLI_ARG_MODEL_FLAG_H
