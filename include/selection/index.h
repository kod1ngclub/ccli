#ifndef CCLI_SELECT_INDEX_H
#define CCLI_SELECT_INDEX_H

#include "model/option.h"
#include "model/style.h"

unsigned long selection(
    const struct selection_option* const opts,
    const struct selection_config conf
);

#endif // CCLI_SELECT_INDEX_H
