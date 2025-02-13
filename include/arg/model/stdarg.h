#ifndef CCLI_ARG_MODEL_STDARG_H
#define CCLI_ARG_MODEL_STDARG_H

#include "stddef.h"

typedef char* const argw;
struct ccli_stdarg {
    const argw* argv;
    const size_t argc;
};

#endif // CCLI_ARG_MODEL_STDARG_H
