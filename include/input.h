#ifndef CCLI_INPUT_H
#define CCLI_INPUT_H

#include "stdbool.h"

// ==== input config
enum input_indentset {
    INPUT_INDENTSET_SPACE01,
    INPUT_INDENTSET_SPACE02,
    INPUT_INDENTSET_SPACE03,
    INPUT_INDENTSET_SPACE04,
    INPUT_INDENTSET_TAB01
};

enum input_lineset {
    INPUT_LNIESET_NONE,
    INPUT_LINESET_NEWLINE01,
    INPUT_LINESET_NEWLINE02
};

struct input_conf {
    const char prefix;
    const enum input_indentset indent;
    const enum input_lineset line;
};

// ==== input config - default
static const struct input_conf INPUT_DEFAULT = {
    .prefix     = '>',
    .indent     = INPUT_INDENTSET_SPACE01,
    .line       = INPUT_LINESET_NEWLINE01
};

// ==== out types
typedef char* const     out_input_str;
typedef char            out_input_char;
typedef int             out_input_int;
typedef char* const     out_input_filepath;
typedef char* const     out_input_dirpath;
typedef char* const     out_input_url;

// ==== API functions
void input_str(
    const char* const message,
    const struct input_conf conf,

    const out_input_str* const out
);

void input_char(
    const char* const message,
    const struct input_conf conf,

    const out_input_char* const out
);

void input_int(
    const char* const message,
    const struct input_conf conf,

    const out_input_int* const out
);

void input_filepath(
    const char* const message,
    const struct input_conf conf,

    const out_input_filepath* const out
);

void input_dirpath(
    const char* const message,
    const struct input_conf conf,

    const out_input_dirpath* const out
);

void input_url(
    const char* const message,
    const struct input_conf conf,

    const out_input_url* const out
);

#endif // CCLI_INPUT_H
