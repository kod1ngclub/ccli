#ifndef CCLI_ARG_API_H
#define CCLI_ARG_API_H

#include "condset.h"
#include "val.h"
#include "flag.h"

#include "stdbool.h"

// ==== stdarg
typedef char* const argword;

struct stdarg {
    const argword* const argv;
    const int argc;
};

// ==== diff API
bool diff1(
    const struct stdarg arg,

    const struct condset s1
);

bool diff2(
    const struct stdarg arg,

    const struct condset s1,
    const struct condset s2
);

bool diff3(
    const struct stdarg arg,

    const struct condset s1,
    const struct condset s2,
    const struct condset s3
);

bool diff4(
    const struct stdarg arg,

    const struct condset s1,
    const struct condset s2,
    const struct condset s3,
    const struct condset s4
);

bool diff5(
    const struct stdarg arg,

    const struct condset s1,
    const struct condset s2,
    const struct condset s3,
    const struct condset s4,
    const struct condset s5
);

bool diff6(
    const struct stdarg arg,

    const struct condset s1,
    const struct condset s2,
    const struct condset s3,
    const struct condset s4,
    const struct condset s5,
    const struct condset s6
);

bool diff7(
    const struct stdarg arg,

    const struct condset s1,
    const struct condset s2,
    const struct condset s3,
    const struct condset s4,
    const struct condset s5,
    const struct condset s6,
    const struct condset s7
);

bool diff8(
    const struct stdarg arg,

    const struct condset s1,
    const struct condset s2,
    const struct condset s3,
    const struct condset s4,
    const struct condset s5,
    const struct condset s6,
    const struct condset s7,
    const struct condset s8
);

bool diff(
    const struct stdarg arg,

    const struct condset* const sets,
    const int size
);

// ==== util
struct condset cset(const struct cond* const conds, const int size);
struct condset cseq(const struct cond* const conds, const int size);

struct cond flag(const char* const l, const char s);
struct cond lflag(const char* const l);
struct cond sflag(const char s);

struct cond vstr(const char* const name, const out_val_str* const out);
struct cond vchar(const char* const name, const out_val_char* const out);
struct cond vint(const char* const name, const out_val_int* const out);
struct cond vfile(const char* const name, const out_val_filepath* const out);
struct cond vdir(const char* const name, const out_val_dirpath* const out);
struct cond vurl(const char* const name, const out_val_url* const out);

#endif
