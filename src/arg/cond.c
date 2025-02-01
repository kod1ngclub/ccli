#include "../../include/arg/cond.h"

struct condset cset(const struct cond* const conds, const int size) {
    const struct condset s = {
        .conds  = conds,
        .size   = size,
        .seq    = false
    };

    return s;
}

struct condset cseq(const struct cond* const conds, const int size) {
    const struct condset s = {
        .conds  = conds,
        .size   = size,
        .seq    = true
    };
    return s;
}

struct cond flag(const char* const l, const char s) {
    const struct cond_flag f = {
        .lflag  = l,
        .sflag  = s
    };

    const struct cond c = {
        .type   = COND_TYPE_FLAG,
        .data   = { .flag = f }
    };

    return c;
}

struct cond lflag(const char* const l) {
    const struct cond_long_flag f = { .data = l };

    const struct cond c = {
        .type   = COND_TYPE_LFLAG,
        .data   = { .lflag = f }
    };

    return c;
}

struct cond sflag(const char s) {
    const struct cond_short_flag f = { .data = s };

    const struct cond c = {
        .type   = COND_TYPE_SFLAG,
        .data   = { .sflag = s }
    };

    return c;
}

struct cond vstr(const unsigned long id) {
    const struct cond_val_str v = { .id = id };

    const struct cond c = {
        .type   = COND_TYPE_VAL_STR,
        .data   = { .vstr = v }
    };

    return c;
}

struct cond vchar(const unsigned long id) {
    const struct cond_val_char v = { .id = id };

    const struct cond c = {
        .type   = COND_TYPE_VAL_CHAR,
        .data   = { .vchar = v }
    };

    return c;
}

struct cond vint(const unsigned long id) {
    const struct cond_val_int v = { .id = id };

    const struct cond c = {
        .type   = COND_TYPE_VAL_INT,
        .data   = { .vint = v }
    };

    return c;
}

struct cond vfile(const unsigned long id) {
    const struct cond_val_filepath v = { .id = id };

    const struct cond c = {
        .type   = COND_TYPE_VAL_FILEPATH,
        .data   = { .vfile = v }
    };

    return c;
}

struct cond vdir(const unsigned long id) {
    const struct cond_val_dirpath v = { .id = id };

    const struct cond c = {
        .type   = COND_TYPE_VAL_DIRPATH,
        .data   = { .vdir = v }
    };

    return c;
}

struct cond vurl(const unsigned long id) {
    const struct cond_val_url v = { .id = id };

    const struct cond c = {
        .type   = COND_TYPE_VAL_URL,
        .data   = { .vurl = v }
    };

    return c;
}
