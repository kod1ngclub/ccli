#ifndef CCLI_ARG_COND_H
#define CCLI_ARG_COND_H

#include "cond/condset.h"
#include "cond/flag.h"
#include "cond/val.h"

struct condset cset(const struct cond* const conds, const int size);
struct condset cseq(const struct cond* const conds, const int size);

struct cond flag(const char* const l, const char s);
struct cond lflag(const char* const l);
struct cond sflag(const char s);

struct cond vstr(const unsigned long id);
struct cond vchar(const unsigned long id);
struct cond vint(const unsigned long id);
struct cond vfile(const unsigned long id);
struct cond vdir(const unsigned long id);
struct cond vurl(const unsigned long id);

#endif // CCLI_ARG_COND_H
