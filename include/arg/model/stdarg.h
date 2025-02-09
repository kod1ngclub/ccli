#ifndef CCLI_ARG_MODEL_STDARG_H
#define CCLI_ARG_MODEL_STDARG_H

typedef char* const ccli_argword;

struct ccli_stdarg {
    const ccli_argword* const argv;
    const int argc;
};

#endif // CCLI_ARG_MODEL_STDARG_H
