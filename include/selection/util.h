#ifndef CCLI_SELECT_UTIL_H
#define CCLI_SELECT_UTIL_H

#include "model/option.h"
#include "model/style.h"

// ==== utils of func selection
unsigned long selection1(
    const struct selection_option opt1,

    const struct selection_config conf
);

unsigned long selection2(
    const struct selection_option opt1,
    const struct selection_option opt2,

    const struct selection_config conf
);

unsigned long selection3(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,

    const struct selection_config conf
);

unsigned long selection4(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,

    const struct selection_config conf
);

unsigned long selection5(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,

    const struct selection_config conf
);

unsigned long selection6(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,

    const struct selection_config conf
);

unsigned long selection7(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,

    const struct selection_config conf
);

unsigned long selection8(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,

    const struct selection_config conf
);

unsigned long selection9(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,

    const struct selection_config conf
);

unsigned long selection10(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,
    const struct selection_option opt10,

    const struct selection_config conf
);

unsigned long selection11(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,
    const struct selection_option opt10,
    const struct selection_option opt11,

    const struct selection_config conf
);

unsigned long selection12(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,
    const struct selection_option opt10,
    const struct selection_option opt11,
    const struct selection_option opt12,

    const struct selection_config conf
);

unsigned long selection13(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,
    const struct selection_option opt10,
    const struct selection_option opt11,
    const struct selection_option opt12,
    const struct selection_option opt13,

    const struct selection_config conf
);

unsigned long selection14(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,
    const struct selection_option opt10,
    const struct selection_option opt11,
    const struct selection_option opt12,
    const struct selection_option opt13,
    const struct selection_option opt14,

    const struct selection_config conf
);

unsigned long selection15(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,
    const struct selection_option opt10,
    const struct selection_option opt11,
    const struct selection_option opt12,
    const struct selection_option opt13,
    const struct selection_option opt14,
    const struct selection_option opt15,

    const struct selection_config conf
);

unsigned long selection16(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8,
    const struct selection_option opt9,
    const struct selection_option opt10,
    const struct selection_option opt11,
    const struct selection_option opt12,
    const struct selection_option opt13,
    const struct selection_option opt14,
    const struct selection_option opt15,
    const struct selection_option opt16,

    const struct selection_config conf
);

// ==== util for selection_option
struct selection_option sopt(const char* const message);

// ==== default style
static const struct selection_config DEFAULT_SELECTION_STYLE = {
    .prefix     = '>',
    .indent     = SELECTION_INDENT_STYLE_SPACE01,
    .color      = SELECTION_COLOR_STYLE_RED,
    .deco       = SELECTION_DECO_STYLE_NONE
};

#endif // CCLI_SELECT_UTIL_H
