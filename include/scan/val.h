#ifndef CCLI_SCAN_VAL_H
#define CCLI_SCAN_VAL_H

#include "stdbool.h"

// ==== scan config
enum scan_indentset {
    INPUT_INDENTSET_SPACE01,
    INPUT_INDENTSET_SPACE02,
    INPUT_INDENTSET_SPACE03,
    INPUT_INDENTSET_SPACE04,
    INPUT_INDENTSET_TAB01
};

enum scan_lineset {
    INPUT_LNIESET_NONE,
    INPUT_LINESET_NEWLINE01,
    INPUT_LINESET_NEWLINE02
};

struct scan_conf {
    const char prefix;
    const enum scan_indentset indent;
    const enum scan_lineset line;
};

// ==== input config - default
static const struct scan_conf INPUT_DEFAULT = {
    .prefix     = '>',
    .indent     = INPUT_INDENTSET_SPACE01,
    .line       = INPUT_LINESET_NEWLINE01
};

// ==== out types
typedef char* const     out_scan_str;
typedef char            out_scan_char;
typedef int             out_scan_int;
typedef char* const     out_scan_filepath;
typedef char* const     out_scan_dirpath;
typedef char* const     out_scan_url;

// ==== API functions
void scan_str(
    const char* const message,
    const struct scan_conf conf,

    const out_scan_str* const out
);

void scan_char(
    const char* const message,
    const struct scan_conf conf,

    const out_scan_char* const out
);

void scan_int(
    const char* const message,
    const struct scan_conf conf,

    const out_scan_int* const out
);

void scan_filepath(
    const char* const message,
    const struct scan_conf conf,

    const out_scan_filepath* const out
);

void scan_dirpath(
    const char* const message,
    const struct scan_conf conf,

    const out_scan_dirpath* const out
);

void scan_url(
    const char* const message,
    const struct scan_conf conf,

    const out_scan_url* const out
);

#endif // CCLI_SCAN_VAL_H
