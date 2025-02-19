#ifndef CCLI_ARG_EQ_H
#define CCLI_ARG_EQ_H

#include "model/expect.h"
#include "model/stdarg.h"

#include "stddef.h"

int ccli_expect_eq(
    const struct ccli_stdarg arg,

    const struct ccli_expectset* const sets,
    const size_t size
);

#endif
