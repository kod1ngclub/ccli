#ifndef CCLI_ARG_HAS_H
#define CCLI_ARG_HAS_H

#include "model/expect.h"
#include "model/stdarg.h"

bool expect_has(
    const struct stdarg arg,

    const struct expectset* const sets,
    const int size
);

#endif // CCLI_ARG_HAS_H
