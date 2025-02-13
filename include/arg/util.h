#ifndef CCLI_ARG_UTIL_H
#define CCLI_ARG_UTIL_H

#include "model/expect.h"
#include "model/val.h"
#include "model/flag.h"

#include "stdbool.h"
#include "stddef.h"

// ==== util of func expect_eq
bool ccli_expect_eq1(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1
);

bool ccli_expect_eq2(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2
);

bool ccli_expect_eq3(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3
);

bool ccli_expect_eq4(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4
);

bool ccli_expect_eq5(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5
);

bool ccli_expect_eq6(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5,
    const struct ccli_expectset s6
);

bool ccli_expect_eq7(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5,
    const struct ccli_expectset s6,
    const struct ccli_expectset s7
);

bool ccli_expect_eq8(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5,
    const struct ccli_expectset s6,
    const struct ccli_expectset s7,
    const struct ccli_expectset s8
);

// ==== utils of func expect_has
bool ccli_expect_has1(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1
);

bool ccli_expect_has2(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2
);

bool ccli_expect_has3(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3
);

bool ccli_expect_has4(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4
);

// ==== utils for set
struct ccli_expectset cset(
    const struct ccli_expect* const expects,
    const int size
);

struct ccli_expectset cset1(
    const struct ccli_expect e1
);

struct ccli_expectset cset2(
    const struct ccli_expect e1,
    const struct ccli_expect e2
);

struct ccli_expectset cset3(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3
);

struct ccli_expectset cset4(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3,
    const struct ccli_expect e4
);

// ==== utils for seq
struct ccli_expectset cseq(const struct ccli_expect* const expects, const int size);

struct ccli_expectset cseq1(
    const struct ccli_expect e1
);

struct ccli_expectset cseq2(
    const struct ccli_expect e1,
    const struct ccli_expect e2
);

struct ccli_expectset cseq3(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3
);

struct ccli_expectset cseq4(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3,
    const struct ccli_expect e4
);

// ==== utils for flag
struct ccli_expect flag(
    const char* const l,
    const char s
);

struct ccli_expect lflag(
    const char* const l
);

struct ccli_expect sflag(
    const char s
);


// ==== utils for val
struct ccli_expect vstr(
    const char* const name,

    char* const out,
    const size_t size
);

struct ccli_expect vstr16(
    const char* const name,

    char* const out
);

struct ccli_expect vstr32(
    const char* const name,

    char* const out
);

struct ccli_expect vstr64(
    const char* const name,

    char* const out
);

struct ccli_expect vstr128(
    const char* const name,

    char* const out
);

struct ccli_expect vstr70(
    const char* const name,

    char* const out
);

struct ccli_expect vchar(
    const char* const name,

    char* const out
);

struct ccli_expect vint(
    const char* const name,

    int* const out
);

#endif // CCLI_ARG_UTIL_H
