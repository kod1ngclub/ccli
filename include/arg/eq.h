#ifndef CCLI_ARG_EQ_H
#define CCLI_ARG_EQ_H

#include "expect.h"
#include "stdarg.h"

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

#endif
