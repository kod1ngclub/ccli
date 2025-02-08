#ifndef CCLI_ARG_EQ_H
#define CCLI_ARG_EQ_H

#include "model/expect.h"
#include "model/stdarg.h"

bool expect_eq(
    const struct stdarg arg,

    const struct expectset* const sets,
    const int size
);

#endif
