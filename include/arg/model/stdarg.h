#ifndef CCLI_ARG_MODEL_STDARG_H
#define CCLI_ARG_MODEL_STDARG_H

#include "stddef.h"

struct ccli_stdarg {
    const char** argv;
    const int argc;
};

/*
 * ==== Why not using typedef for argword
 * To keep original form of argument values
 *
 * int main(char** argv, int argc) { ... }
 */

#endif // CCLI_ARG_MODEL_STDARG_H
