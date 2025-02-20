#include "../../include/arg/util.h"

#include "../../include/arg/model/expect.h"
#include "../../include/arg/model/flag.h"
#include "../../include/arg/model/val.h"
#include "../../include/arg/model/stdarg.h"

#include "../../include/arg/eq.h"
#include "../../include/arg/has.h"

int ccli_expect_eq1(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1
) {
    const struct ccli_expectset sets[1] = { s1 };
    return ccli_expect_eq(arg, sets, 1);
}

int ccli_expect_eq2(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2
) {
    const struct ccli_expectset sets[2] = { s1, s2 };
    return ccli_expect_eq(arg, sets, 2);
}

int ccli_expect_eq3(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3
) {
    const struct ccli_expectset sets[3] = { s1, s2, s3 };
    return ccli_expect_eq(arg, sets, 3);
}

int ccli_expect_eq4(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4
) {
    const struct ccli_expectset sets[4] = { s1, s2, s3, s4 };
    return ccli_expect_eq(arg, sets, 4);
}

int ccli_expect_eq5(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4,
    const struct ccli_expectset s5
) {
    const struct ccli_expectset sets[5] = { s1, s2, s3, s4, s5 };
    return ccli_expect_eq(arg, sets, 5);
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
    const struct ccli_expectset sets[6] = { s1, s2, s3, s4, s5, s6 };
    return ccli_expect_eq(arg, sets, 6);
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
    const struct ccli_expectset sets[7] = { s1, s2, s3, s4, s5, s6, s7 };
    return ccli_expect_eq(arg, sets, 7);
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
    const struct ccli_expectset sets[8] = { s1, s2, s3, s4, s5, s6, s7, s8 };
    return ccli_expect_eq(arg, sets, 8);
}

// ==== utils of func expect_has
int ccli_expect_has1(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1
) {
    const struct ccli_expectset sets[1] = { s1 };
    return ccli_expect_has(arg, sets, 1);
}

int ccli_expect_has2(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2
) {
    const struct ccli_expectset sets[2] = { s1, s2 };
    return ccli_expect_has(arg, sets, 2);
}

int ccli_expect_has3(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3
) {
    const struct ccli_expectset sets[3] = { s1, s2, s3 };
    return ccli_expect_has(arg, sets, 3);
}

int ccli_expect_has4(
    const struct ccli_stdarg arg,

    const struct ccli_expectset s1,
    const struct ccli_expectset s2,
    const struct ccli_expectset s3,
    const struct ccli_expectset s4
) {
    const struct ccli_expectset sets[4] = { s1, s2, s3, s4 };
    return ccli_expect_has(arg, sets, 4);
}

// ==== utils for set
struct ccli_expectset cset1(
    const struct ccli_expect e1
) {
    return (struct ccli_expectset){
        .expects = { e1 },
        .size = 1,
        .seq = false
    };
}

struct ccli_expectset cset2(
    const struct ccli_expect e1,
    const struct ccli_expect e2
) {
    return (struct ccli_expectset){
        .expects = { e1, e2 },
        .size = 2,
        .seq = false
    };
}

struct ccli_expectset cset3(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3
) {
    return (struct ccli_expectset){
        .expects = { e1, e2, e3 },
        .size = 3,
        .seq = false
    };
}

struct ccli_expectset cset4(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3,
    const struct ccli_expect e4
) {
    return (struct ccli_expectset){
        .expects = { e1, e2, e3, e4 },
        .size = 4,
        .seq = false
    };
}

// ==== utils for seq
struct ccli_expectset cseq1(
    const struct ccli_expect e1
) {
    return (struct ccli_expectset){
        .expects = { e1 },
        .size = 1,
        .seq = true
    };
}

struct ccli_expectset cseq2(
    const struct ccli_expect e1,
    const struct ccli_expect e2
) {
    return (struct ccli_expectset){
        .expects = { e1, e2 },
        .size = 2,
        .seq = true
    };
}

struct ccli_expectset cseq3(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3
) {
    return (struct ccli_expectset){
        .expects = { e1, e2, e3 },
        .size = 3,
        .seq = true
    };
}

struct ccli_expectset cseq4(
    const struct ccli_expect e1,
    const struct ccli_expect e2,
    const struct ccli_expect e3,
    const struct ccli_expect e4
) {
    return (struct ccli_expectset){
        .expects = { e1, e2, e3, e4 },
        .size = 4,
        .seq = true
    };
}

// ==== utils for flag
struct ccli_expect flag(
    const char* const l,
    const char s
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .flag = (struct ccli_expect_flag){
                .lflag = l,
                .sflag = s
            }
        },
        .type = CCLI_EXPECT_TYPE_FLAG
    };
}

struct ccli_expect lflag(
    const char* const l
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .lflag = (struct ccli_expect_long_flag){
                .lflag = l
            }
        },
        .type = CCLI_EXPECT_TYPE_LFLAG
    };
}

struct ccli_expect sflag(
    const char s
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .sflag = (struct ccli_expect_short_flag){
                .sflag = s
            }
        },
        .type = CCLI_EXPECT_TYPE_SFLAG
    };
}


// ==== utils for val
struct ccli_expect vstr(
    const char* const name,

    char* const out,
    const size_t size
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vstr = (struct ccli_expect_val_str){
                .name = name,
                .out = out,
                .size = size
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_STR
    };
}

struct ccli_expect vstr16(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vstr = (struct ccli_expect_val_str){
                .name = name,
                .out = out,
                .size = 16
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_STR
    };
}

struct ccli_expect vstr32(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vstr = (struct ccli_expect_val_str){
                .name = name,
                .out = out,
                .size = 32
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_STR
    };
}

struct ccli_expect vstr64(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vstr = (struct ccli_expect_val_str){
                .name = name,
                .out = out,
                .size = 64
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_STR
    };
}

struct ccli_expect vstr128(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vstr = (struct ccli_expect_val_str){
                .name = name,
                .out = out,
                .size = 128
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_STR
    };
}

struct ccli_expect vstr70(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vstr = (struct ccli_expect_val_str){
                .name = name,
                .out = out,
                .size = 70
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_STR
    };
}

struct ccli_expect vchar(
    const char* const name,

    char* const out
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vchar = (struct ccli_expect_val_char){
                .name = name,
                .out = out
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_CHAR
    };
}

struct ccli_expect vint(
    const char* const name,

    int* const out
) {
    return (struct ccli_expect){
        .data = (union ccli_expect_data){
            .vint = (struct ccli_expect_val_int){
                .name = name,
                .out = out
            }
        },
        .type = CCLI_EXPECT_TYPE_VAL_INT
    };
}
