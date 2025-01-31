#ifndef CCLI_ARG_COND_FLAG_H
#define CCLI_ARG_COND_FLAG_H

struct cond_long_flag {
    const char* const data;
};

struct cond_short_flag {
    const char data;
};

struct cond_flag {
    const struct cond_long_flag lflag;
    const struct cond_short_flag sflag;
};

#endif // CCLI_ARG_COND_FLAG_H
