#ifndef CCLI_ARG_COND_FLAG_H
#define CCLI_ARG_COND_FLAG_H

#include "stdbool.h"

typedef bool    out_is_flag;
typedef bool    out_is_long_flag;
typedef bool    out_is_short_flag;

struct cond_long_flag {
    const char* const lflag;

    const out_is_long_flag* const out;
};

struct cond_short_flag {
    const char sflag;

    const out_is_short_flag* const out;
};

struct cond_flag {
    const char* const lflag;
    const char sflag;

    const out_is_flag* const out;
};

#endif // CCLI_ARG_COND_FLAG_H
