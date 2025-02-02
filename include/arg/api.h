#ifndef CCLI_ARG_API_H
#define CCLI_ARG_API_H

#include "expect.h"
#include "val.h"
#include "flag.h"

#include "stdbool.h"

// ==== stdarg
typedef char* const argword;

struct stdarg {
    const argword* const argv;
    const int argc;
};

// ==== is_eq API
bool expect_eq1(
    const struct stdarg arg,

    const struct expectset s1
);

bool expect_eq2(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2
);

bool expect_eq3(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3
);

bool expect_eq4(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4
);

bool expect_eq5(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4,
    const struct expectset s5
);

bool expect_eq6(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4,
    const struct expectset s5,
    const struct expectset s6
);

bool expect_eq7(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4,
    const struct expectset s5,
    const struct expectset s6,
    const struct expectset s7
);

bool expect_eq8(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4,
    const struct expectset s5,
    const struct expectset s6,
    const struct expectset s7,
    const struct expectset s8
);

bool expect_eq(
    const struct stdarg arg,

    const struct expectset* const sets,
    const int size
);

// ==== expect_has API
bool expect_has1(
    const struct stdarg arg,

    const struct expectset s1
);

bool expect_has2(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2
);

bool expect_has3(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3
);

bool expect_has4(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4
);

bool expect_has(
    const struct stdarg arg,

    const struct expectset* const sets,
    const int size
);

// ==== util
struct expectset cset(const struct expect* const conds, const int size);
struct expectset cseq(const struct expect* const conds, const int size);

struct expect flag(
    const char* const l,
    const char s,
    const out_catched_flag* const out
);

struct expect lflag(
    const char* const l,
    const out_catched_long_flag* const out
);

struct expect sflag(
    const char s,
    const out_catched_short_flag* const out
);

struct expect vstr(const char* const name, const out_catched_val_str* const out);
struct expect vchar(const char* const name, const out_catched_val_char* const out);
struct expect vint(const char* const name, const out_catched_val_int* const out);
struct expect vfile(const char* const name, const out_catched_val_filepath* const out);
struct expect vdir(const char* const name, const out_catched_val_dirpath* const out);
struct expect vurl(const char* const name, const out_catched_val_url* const out);

#endif
