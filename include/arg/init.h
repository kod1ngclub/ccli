#ifndef CCLI_ARG_INIT_H
#define CCLI_ARG_INIT_H

typedef char* const argword;

struct stdarg {
    const argword* const argv;
    const int argc;
};

void init(const stdarg arg);
void free(void);

#endif // CCLI_ARG_INIT_H
