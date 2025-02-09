#ifndef CCLI_SELECT_INDEX_H
#define CCLI_SELECT_INDEX_H

#include "model/option.h"
#include "model/style.h"

unsigned long select(
    const struct select_option* const opts,
    const struct select_style style
);

#endif // CCLI_SELECT_INDEX_H
