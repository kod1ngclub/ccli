#ifndef CCLI_ARG_COND_GROUP_H
#define CCLI_ARG_COND_GROUP_H

#include "flag.h"
#include "val.h"

#include "shared/str.h"
#include "shared/bool.h"

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
    const struct flag f;
    const struct lflag lf;
    const struct sflag sf;
    const struct val_str vstr;
    const struct val_char vchar;
    const struct val_int vint;
    const struct val_filepath vfile;
    const struct val_dirpath vdir;
    const struct val_url vurl;
};

struct cond {
    const union cond_data data;
    const enum cond_type type;
};

// ==== group
struct group {
    const cond* const nodes;
    const int size;

    const bool seq;
};

#endif // CCLI_ARG_COND_GROUP_H
