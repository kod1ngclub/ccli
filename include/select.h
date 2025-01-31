#ifndef CCLI_SELECT_H
#define CCLI_SELECT_H

// ==== option config
struct option {
    const char* const message;
    const unsigned long id;
};

struct optionset {
    const option* const options;
    const int size;
};

enum select_indentset {
    SELECT_INDENTSET_SPACE01,
    SELECT_INDENTSET_SPACE02,
    SELECT_INDENTSET_SPACE03,
    SELECT_INDENTSET_SPACE04,
    SELECT_INDENTSET_TAB01
};

enum select_colorset {
    SELECT_COLORSET_NONE,
    SELECT_COLORSET_RED,
    SELECT_COLORSET_BLUE
};

enum select_decoset {
    SELECT_DECOSET_NONE,
    SELECT_DECOSET_UNDERLINE,
    SELECT_DECOSET_BOLD
};

struct select_conf {
    const char prefix;
    const enum select_indentset indent;
    const enum select_colorset color;
    const enum select_decoset deco;
};

// ==== select config - default
static const struct select_conf SELECT_DEFAULT = {
    .prefix     = '>',
    .indent     = SELECT_INDENTSET_SPACE01,
    .color      = SELECT_COLORSET_BLUE,
    .deco       = SELECT_DECOSET_NONE
};

// ==== API functions
unsigned long select(
    const optionset optset,
    const struct select_conf conf
);

#endif // CCLI_SELECT_H
