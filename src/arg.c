#include "../include/arg/api.h"

#include "../include/arg/expect.h"
#include "../include/arg/flag.h"
#include "../include/arg/val.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

static const char* const ERR_ANSI_COLOR     = "\033[31m";
static const char* const ERR_ANSI_RESET     = "\033[0m";
static const char* const ERR_ANSI_NEWLINE   = "\n";
static const char* const ERR_PREFIX         = "[ccli]";
static const char* const ERR_DELI           = " ";

static void err(
    const char* const fname,
    const char* const pname,
    const char* const message, ...
) {
    printf(ERR_ANSI_COLOR);

    // ==== print function name
    printf(ERR_PREFIX);
    printf(ERR_DELI);
    printf("func: %s()", fname);
    printf(ERR_ANSI_NEWLINE);

    // ==== print parameter name
    printf(ERR_PREFIX);
    printf(ERR_DELI);
    printf("parameter: '%s'", pname);
    printf(ERR_ANSI_NEWLINE);

    // ==== print
    printf(ERR_PREFIX);
    printf(ERR_DELI);

    va_list args;
    va_start(args, message);
    vprintf(message, args);
    va_end(args);

    printf(ERR_ANSI_NEWLINE);

    printf(ERR_ANSI_RESET);
    printf(ERR_ANSI_NEWLINE);

    exit(-1);
}

bool expect_eq1(
    const struct stdarg arg,

    const struct expectset s1
) {
    const struct expectset sets[1] = { s1 };
    return expect_eq(arg, sets, 1);
}

bool expect_eq2(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2
) {
    const struct expectset sets[2] = { s1, s2 };
    return expect_eq(arg, sets, 2);
}

bool expect_eq3(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3
) {
    const struct expectset sets[3] = { s1, s2, s3 };
    return expect_eq(arg, sets, 3);
}

bool expect_eq4(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4
) {
    const struct expectset sets[4] = { s1, s2, s3, s4 };
    return expect_eq(arg, sets, 4);
}

bool expect_eq5(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4,
    const struct expectset s5
) {
    const struct expectset sets[5] = { s1, s2, s3, s4, s5 };
    return expect_eq(arg, sets, 5);
}

bool expect_eq6(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4,
    const struct expectset s5,
    const struct expectset s6
) {
    const struct expectset sets[6] = { s1, s2, s3, s4, s5, s6 };
    return expect_eq(arg, sets, 6);
}

bool expect_eq7(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4,
    const struct expectset s5,
    const struct expectset s6,
    const struct expectset s7
) {
    const struct expectset sets[7] = { s1, s2, s3, s4, s5, s6, s7 };
    return expect_eq(arg, sets, 7);
}

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
) {
    const struct expectset sets[8] = { s1, s2, s3, s4, s5, s6, s7, s8 };
    return expect_eq(arg, sets, 8);
}

bool expect_eq(
    const struct stdarg arg,

    const struct expectset* const sets,
    const int size
);

// ==== expect_has API
bool expect_has1(
    const struct stdarg arg,

    const struct expectset s1
) {
    const struct expectset sets[1] = { s1 };
    return expect_has(arg, sets, 1);
}

bool expect_has2(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2
) {
    const struct expectset sets[2] = { s1, s2 };
    return expect_has(arg, sets, 2);
}

bool expect_has3(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3
) {
    const struct expectset sets[3] = { s1, s2, s3 };
    return expect_has(arg, sets, 3);
}

bool expect_has4(
    const struct stdarg arg,

    const struct expectset s1,
    const struct expectset s2,
    const struct expectset s3,
    const struct expectset s4
) {
    const struct expectset sets[4] = { s1, s2, s3, s4 };
    return expect_has(arg, sets, 4);
}

bool expect_has(
    const struct stdarg arg,

    const struct expectset* const sets,
    const int size
);

// ==== util
struct expectset cset(const struct expect* const expects, const int size) {
    if (size > EXPECTSET_SIZE)  err("cset", "size", "cannot over %d", EXPECTSET_SIZE);
    if (size <= 0)              err("cset", "size", "cannot be 0 or less");
    if (expects == NULL)        err("cset", "expects", "cannot be NULL");

    struct expectset s = {
        .expects    = { },
        .size       = size,
        .seq        = false,
    };

    memcpy(
        (void*)s.expects,
        (void*)expects,
        (sizeof(struct expect) * size)
    );

    return s;
}

struct expectset cseq(const struct expect* const expects, const int size) {
    if (size > EXPECTSET_SIZE)  err("cset", "size", "cannot over %d", EXPECTSET_SIZE);
    if (size <= 0)              err("cset", "size", "cannot be 0 or less");
    if (expects == NULL)        err("cset", "expects", "cannot be NULL");

    struct expectset s = {
        .expects    = { },
        .size       = size,
        .seq        = true,
    };

    memcpy(
        (void*)s.expects,
        (void*)expects,
        (sizeof(struct expect) * size)
    );

    return s;
}

struct expect flag(
    const char* const l,
    const char s,
    const out_catched_flag* const out
) {
    const struct expect_flag expect_f = {
        .lflag  = l,
        .sflag  = s,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .flag = expect_f },
        .type   = EXPECT_TYPE_FLAG
    };

    return expection;
}

struct expect lflag(
    const char* const l,
    const out_catched_long_flag* const out
) {
    const struct expect_long_flag expect_f = {
        .lflag  = l,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .lflag = expect_f },
        .type   = EXPECT_TYPE_LFLAG
    };

    return expection;
}

struct expect sflag(
    const char s,
    const out_catched_short_flag* const out
) {
    const struct expect_short_flag expect_f = {
        .sflag  = s,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .sflag = expect_f },
        .type   = EXPECT_TYPE_SFLAG
    };

    return expection;
}

struct expect vstr(const char* const name, const out_catched_val_str* const out) {
    const struct expect_val_str expect_val = {
        .name   = name,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .vstr = expect_val },
        .type   = EXPECT_TYPE_VAL_STR
    };

    return expection;
}

struct expect vchar(const char* const name, const out_catched_val_char* const out) {
    const struct expect_val_char expect_val = {
        .name   = name,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .vchar = expect_val },
        .type   = EXPECT_TYPE_VAL_CHAR
    };

    return expection;
}

struct expect vint(const char* const name, const out_catched_val_int* const out) {
    const struct expect_val_int expect_val = {
        .name   = name,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .vint = expect_val },
        .type   = EXPECT_TYPE_VAL_INT
    };

    return expection;
}

struct expect vfile(const char* const name, const out_catched_val_filepath* const out) {
    const struct expect_val_filepath expect_val = {
        .name   = name,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .vfile = expect_val },
        .type   = EXPECT_TYPE_VAL_FILEPATH
    };

    return expection;
}

struct expect vdir(const char* const name, const out_catched_val_dirpath* const out) {
    const struct expect_val_dirpath expect_val = {
        .name   = name,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .vdir = expect_val },
        .type   = EXPECT_TYPE_VAL_DIRPATH
    };

    return expection;
}

struct expect vurl(const char* const name, const out_catched_val_url* const out) {
    const struct expect_val_url expect_val = {
        .name   = name,
        .out    = out
    };

    const struct expect expection = {
        .data   = { .vurl = expect_val },
        .type   = EXPECT_TYPE_VAL_URL
    };

    return expection;
}
