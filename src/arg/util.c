#include "../../include/arg/util.h"

int ccli_expect_eq1(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1
) {
    return 0;
}

int ccli_expect_eq2(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2
) {
    return 0;
}

int ccli_expect_eq3(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3
) {
    return 0;
}

int ccli_expect_eq4(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4
) {
    return 0;
}

int ccli_expect_eq5(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5
) {
    return 0;
}

int ccli_expect_eq6(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5,
    const struct ccli_expectset s6
) {
    return 0;
}

int ccli_expect_eq7(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5,
    const struct ccli_expectset s6,
    const struct ccli_expectset s7
) {
    return 0;
}

int ccli_expect_eq8(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5,
    const struct ccli_expectset s6,
    const struct ccli_expectset s7,
    const struct ccli_expectset s8
) {
    return 0;
}

// ==== utils of func expect_has
int ccli_expect_has1(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1
) {
    return 0;
}

int ccli_expect_has2(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2
) {
    return 0;
}

int ccli_expect_has3(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3
) {
    return 0;
}

int ccli_expect_has4(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4
) {
    return 0;
}

// ==== utils for set
struct ccli_expectset cset(
    const struct ccli_expect* const expects,
    const int size
) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cset1(
    const struct ccli_expect e1
) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cset2(
    const struct ccli_expect e1,
    const struct ccli_expect e2
) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cset3(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3
) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cset4(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3,
    const struct ccli_expect e4
) {
    return (struct ccli_expectset){ };
}

// ==== utils for seq
struct ccli_expectset cseq(const struct ccli_expect* const expects, const int size) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cseq1(
    const struct ccli_expect e1
) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cseq2(
    const struct ccli_expect e1,
    const struct ccli_expect e2
) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cseq3(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3
) {
    return (struct ccli_expectset){ };
}

struct ccli_expectset cseq4(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3,
    const struct ccli_expect e4
) {
    return (struct ccli_expectset){ };
}

// ==== utils for flag
struct ccli_expect flag(
    const char* const l,
    const char s
) {
    return (struct ccli_expect){ };
}

struct ccli_expect lflag(
    const char* const l
) {
    return (struct ccli_expect){ };
}

struct ccli_expect sflag(
    const char s
) {
    return (struct ccli_expect){ };
}


// ==== utils for val
struct ccli_expect vstr(
    const char* const name,

    char* const out,
    const size_t size
) {
    return (struct ccli_expect){ };
}

struct ccli_expect vstr16(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){ };
}

struct ccli_expect vstr32(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){ };
}

struct ccli_expect vstr64(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){ };
}

struct ccli_expect vstr128(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){ };
}

struct ccli_expect vstr70(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){ };
}

struct ccli_expect vchar(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){ };
}

struct ccli_expect vint(
    const char* const name,

    int* const out
) {
    return (struct ccli_expect){ };
}
