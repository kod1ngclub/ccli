#ifndef CCLI_SELECT_INDEX_H
#define CCLI_SELECT_INDEX_H

#include "model/option.h"
#include "model/style.h"

unsigned long ccli_select(
    const struct ccli_select_option* const opts,
    const struct ccli_select_style style
);

#endif // CCLI_SELECT_INDEX_H
