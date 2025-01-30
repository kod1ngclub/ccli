#ifndef CCLI_ARG_COND_FLAG_H
#define CCLI_ARG_COND_FLAG_H

#include "shared/str.h"

struct flag {
    const str l;
    const char s;
};

struct lflag {
    const str l;
};

struct sflag {
    const char s;
};

#endif // CCLI_ARG_COND_FLAG_H
