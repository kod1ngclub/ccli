#ifndef CCLI_ARG_MODEL_STDARG_H
#define CCLI_ARG_MODEL_STDARG_H

typedef const char* const ccli_argw;

struct ccli_stdarg {
    const ccli_argw* const argv;
    const int argc;
};

#endif // CCLI_ARG_MODEL_STDARG_H
