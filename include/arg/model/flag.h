#ifndef CCLI_ARG_MODEL_FLAG_H
#define CCLI_ARG_MODEL_FLAG_H

struct ccli_expect_long_flag {
    const char* const lflag;
};

struct ccli_expect_short_flag {
    const char sflag;
};

struct ccli_expect_flag {
    const char* const lflag;
    const char sflag;
};

#endif // CCLI_ARG_MODEL_FLAG_H
