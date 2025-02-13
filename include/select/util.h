#ifndef CCLI_SELECT_UTIL_H
#define CCLI_SELECT_UTIL_H

#include "model/option.h"

// ==== utils of func select
unsigned long ccli_select1(
    const char* const message,

    const struct ccli_select_option opt1
);

unsigned long ccli_select2(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2
);

unsigned long ccli_select3(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3
);

unsigned long ccli_select4(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4
);

unsigned long ccli_select5(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5
);

unsigned long ccli_select6(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6
);

unsigned long ccli_select7(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7
);

unsigned long ccli_select8(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8
);

unsigned long ccli_select9(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9
);

unsigned long ccli_select10(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9,
    const struct ccli_select_option opt10
);

unsigned long ccli_select11(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9,
    const struct ccli_select_option opt10,
    const struct ccli_select_option opt11
);

unsigned long ccli_select12(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9,
    const struct ccli_select_option opt10,
    const struct ccli_select_option opt11,
    const struct ccli_select_option opt12
);

unsigned long ccli_select13(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9,
    const struct ccli_select_option opt10,
    const struct ccli_select_option opt11,
    const struct ccli_select_option opt12,
    const struct ccli_select_option opt13
);

unsigned long ccli_select14(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9,
    const struct ccli_select_option opt10,
    const struct ccli_select_option opt11,
    const struct ccli_select_option opt12,
    const struct ccli_select_option opt13,
    const struct ccli_select_option opt14
);

unsigned long ccli_select15(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9,
    const struct ccli_select_option opt10,
    const struct ccli_select_option opt11,
    const struct ccli_select_option opt12,
    const struct ccli_select_option opt13,
    const struct ccli_select_option opt14,
    const struct ccli_select_option opt15
);

unsigned long ccli_select16(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,
    const struct ccli_select_option opt9,
    const struct ccli_select_option opt10,
    const struct ccli_select_option opt11,
    const struct ccli_select_option opt12,
    const struct ccli_select_option opt13,
    const struct ccli_select_option opt14,
    const struct ccli_select_option opt15,
    const struct ccli_select_option opt16
);

// ==== util for selection_option
struct ccli_select_option sopt(const char* const message);

#endif // CCLI_SELECT_UTIL_H
