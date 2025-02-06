#ifndef CCLI_ARG_HAS_H
#define CCLI_ARG_HAS_H

#include "expect.h"
#include "stdarg.h"

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

#endif // CCLI_ARG_HAS_H
