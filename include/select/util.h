#ifndef CCLI_SELECT_UTIL_H
#define CCLI_SELECT_UTIL_H

#include "model/option.h"
#include "model/style.h"

// ==== utils of func select
static const struct select_style SELECT_DEFAULT_STYLE = {
    .prefix     = '>',
    .indent     = SELECT_INDENT_STYLE_SPACE01,
    .color      = SELECT_COLOR_STYLE_BLUE,
    .deco       = SELECT_DECO_STYLE_NONE
};

unsigned long selection1(
    const struct selection_option opt1    
);

unsigned long selection2(
    const struct selection_option opt1,
    const struct selection_option opt2
);

unsigned long selection3(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3
);

unsigned long selection4(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4    
);

unsigned long selection5(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5
);

unsigned long selection6(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6
);

unsigned long selection7(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7
);

unsigned long selection8(
    const struct selection_option opt1,
    const struct selection_option opt2,
    const struct selection_option opt3,
    const struct selection_option opt4,
    const struct selection_option opt5,
    const struct selection_option opt6,
    const struct selection_option opt7,
    const struct selection_option opt8    
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
    const struct selection_option opt9
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
    const struct selection_option opt10
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
    const struct selection_option opt11    
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
    const struct selection_option opt12    
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
    const struct selection_option opt13
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
    const struct selection_option opt14
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
    const struct selection_option opt15    
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
    const struct selection_option opt16
);

// ==== util for selection_option
struct selection_option sopt(const char* const message);

#endif // CCLI_SELECT_UTIL_H
