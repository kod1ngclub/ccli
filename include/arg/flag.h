#ifndef CCLI_ARG_FLAG_H
#define CCLI_ARG_FLAG_H

#include "stdbool.h"

typedef bool    out_catched_flag;
typedef bool    out_catched_long_flag;
typedef bool    out_catched_short_flag;

struct expect_long_flag {
    const char* const lflag;

    out_catched_long_flag* const out;
};

struct expect_short_flag {
    const char sflag;

    out_catched_short_flag* const out;
};

struct expect_flag {
    const char* const lflag;
    const char sflag;

    out_catched_flag* const out;
};

#endif // CCLI_ARG_FLAG_H
