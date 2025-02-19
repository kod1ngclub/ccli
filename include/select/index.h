#ifndef CCLI_SELECT_INDEX_H
#define CCLI_SELECT_INDEX_H

#include "model/option.h"

#include "stddef.h"

int ccli_select(
    const char* const message,
    const struct ccli_select_option* const opts,
    const size_t size,

    unsigned long* cursored
);

#endif // CCLI_SELECT_INDEX_H
