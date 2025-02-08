#ifndef CCLI_ARG_MODEL_STDARG_H
#define CCLI_ARG_MODEL_STDARG_H

typedef char* const argword;

struct stdarg {
    const argword* const argv;
    const int argc;
};

#endif // CCLI_ARG_MODEL_STDARG_H
