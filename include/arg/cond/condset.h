#ifndef CCLI_ARG_COND_CONDSET_H
#define CCLI_ARG_COND_CONDSET_H

#include "flag.h"
#include "val.h"

#include "stdbool.h"

// === cond
enum cond_type {
    COND_TYPE_FLAG,
    COND_TYPE_LFLAG,
    COND_TYPE_SFLAG,
    COND_TYPE_VAL_STR,
    COND_TYPE_VAL_CHAR,
    COND_TYPE_VAL_INT,
    COND_TYPE_VAL_FILEPATH,
    COND_TYPE_VAL_DIRPATH,
    COND_TYPE_VAL_URL
};

union cond_data {
    const struct cond_flag flag;
    const struct cond_long_flag lflag;
    const struct cond_short_flag sflag;
    const struct cond_val_str vstr;
    const struct cond_val_char vchar;
    const struct cond_val_int vint;
    const struct cond_val_filepath vfile;
    const struct cond_val_dirpath vdir;
    const struct cond_val_url vurl;
};

struct cond {
    const union cond_data data;
    const enum cond_type type;
};

// ==== condset
struct condset {
    const struct cond* const conds;
    const int size;

    const bool seq;
};

#endif // CCLI_ARG_COND_CONDSET_H
