#ifndef CCLI_ARG_HAS_H
#define CCLI_ARG_HAS_H

#include "model/expect.h"
#include "model/stdarg.h"

#include "stddef.h"

bool ccli_expect_has(
    const struct ccli_stdarg arg,

    const struct ccli_expectset* const sets,
    const size_t size
);

#endif // CCLI_ARG_HAS_H
