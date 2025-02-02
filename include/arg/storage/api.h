#ifndef CCLI_ARG_STORAGE_API_H
#define CCLI_ARG_STORAGE_API_H

#include "token.h"

#define STORAGE_NULL ((struct storage* const)0)

struct storage {
    const struct token* const tokens;
    const int size;
    const int version;
};

static struct storage* const data = STORAGE_NULL;

void storage_init(void);
void storage_free(void);
struct storage storage_read(void);
struct stroage storage_push(struct token data);

#undef STORAGE_NULL

#endif // CCLI_ARG_STORAGE_API_H
