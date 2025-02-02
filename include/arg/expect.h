#ifndef CCLI_ARG_EXPECT_H
#define CCLI_ARG_EXPECT_H

#include "flag.h"
#include "val.h"

#include "stdbool.h"

// === expect
enum expect_type {
    EXPECT_TYPE_FLAG,
    EXPECT_TYPE_LFLAG,
    EXPECT_TYPE_SFLAG,
    EXPECT_TYPE_VAL_STR,
    EXPECT_TYPE_VAL_CHAR,
    EXPECT_TYPE_VAL_INT,
    EXPECT_TYPE_VAL_FILEPATH,
    EXPECT_TYPE_VAL_DIRPATH,
    EXPECT_TYPE_VAL_URL
};

union expect_data {
    const struct expect_flag flag;
    const struct expect_long_flag lflag;
    const struct expect_short_flag sflag;
    const struct expect_val_str vstr;
    const struct expect_val_char vchar;
    const struct expect_val_int vint;
    const struct expect_val_filepath vfile;
    const struct expect_val_dirpath vdir;
    const struct expect_val_url vurl;
};

struct expect {
    const union expect_data data;
    const enum expect_type type;
};

// ==== expectset
static const int EXPECTSET_SIZE = 8;
struct expectset {
    const struct expect expects[EXPECTSET_SIZE];
    const bool seq;
};

#endif // CCLI_ARG_EXPECT_H
