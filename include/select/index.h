#ifndef CCLI_SELECT_INDEX_H
#define CCLI_SELECT_INDEX_H

#include "model/option.h"

#include "stddef.h"

unsigned long ccli_select(
    const char* const message,

    const struct ccli_select_option* const opts,
    const size_t size
);

#endif // CCLI_SELECT_INDEX_H
