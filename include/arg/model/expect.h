#ifndef CCLI_ARG_MODEL_EXPECT_H
#define CCLI_ARG_MODEL_EXPECT_H

#include "flag.h"
#include "val.h"

#include "stdbool.h"

// === expect
enum ccli_expect_type {
    CCLI_EXPECT_TYPE_FLAG,
    CCLI_EXPECT_TYPE_LFLAG,
    CCLI_EXPECT_TYPE_SFLAG,
    CCLI_EXPECT_TYPE_VAL_STR,
    CCLI_EXPECT_TYPE_VAL_CHAR,
    CCLI_EXPECT_TYPE_VAL_INT,
    CCLI_EXPECT_TYPE_VAL_FILEPATH,
    CCLI_EXPECT_TYPE_VAL_DIRPATH,
    CCLI_EXPECT_TYPE_VAL_URL
};

union ccli_expect_data {
    const struct ccli_expect_flag flag;
    const struct ccli_expect_long_flag lflag;
    const struct ccli_expect_short_flag sflag;
    const struct ccli_expect_val_str vstr;
    const struct ccli_expect_val_char vchar;
    const struct ccli_expect_val_int vint;
    const struct ccli_expect_val_filepath vfile;
    const struct ccli_expect_val_dirpath vdir;
    const struct ccli_expect_val_url vurl;
};

struct ccli_expect {
    const union ccli_expect_data data;
    const enum ccli_expect_type type;
};

// ==== expectset
static const int CCLI_EXPECTSET_SIZE = 8;
struct ccli_expectset {
    const struct ccli_expect expects[CCLI_EXPECTSET_SIZE];
    const int size;
    const bool seq;
};

#endif // CCLI_ARG_MODEL_EXPECT_H
