#ifndef CCLI_ARG_COND_VAL_H
#define CCLI_ARG_COND_VAL_H

#include "shared/uid.h"
#include "shared/str.h"

struct val_str {
    const uid id;
};

struct val_char {
    const uid id;
};

struct val_int {
    const uid id;
};

struct val_filepath {
    const uid id;
};

struct val_dirpath {
    const uid id;
};

struct val_url {
    const uid id;
};

#endif // CCLI_ARG_COND_VAL_H
