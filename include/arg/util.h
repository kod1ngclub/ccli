#ifndef CCLI_ARG_UTIL_H
#define CCLI_ARG_UTIL_H

#include "expect.h"
#include "val.h"
#include "flag.h"

struct expectset cset(const struct expect* const expects, const int size);

struct expectset cset1(
    const struct expect e1
);

struct expectset cset2(
    const struct expect e1,
    const struct expect e2
);

struct expectset cset3(
    const struct expect e1,
    const struct expect e2,
    const struct expect e3
);

struct expectset cset4(
    const struct expect e1,
    const struct expect e2,
    const struct expect e3,
    const struct expect e4
);

struct expectset cseq(const struct expect* const expects, const int size);

struct expectset cseq1(
    const struct expect e1
);

struct expectset cseq2(
    const struct expect e1,
    const struct expect e2
);

struct expectset cseq3(
    const struct expect e1,
    const struct expect e2,
    const struct expect e3
);

struct expectset cseq4(
    const struct expect e1,
    const struct expect e2,
    const struct expect e3,
    const struct expect e4
);

struct expect flag(
    const char* const l,
    const char s,
    const out_catched_flag* const out
);

struct expect lflag(
    const char* const l,
    const out_catched_long_flag* const out
);

struct expect sflag(
    const char s,
    const out_catched_short_flag* const out
);

struct expect vstr(const char* const name, const out_catched_val_str* const out);
struct expect vchar(const char* const name, const out_catched_val_char* const out);
struct expect vint(const char* const name, const out_catched_val_int* const out);
struct expect vfile(const char* const name, const out_catched_val_filepath* const out);
struct expect vdir(const char* const name, const out_catched_val_dirpath* const out);
struct expect vurl(const char* const name, const out_catched_val_url* const out);

#endif // CCLI_ARG_UTIL_H
