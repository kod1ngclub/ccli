#ifndef CCLI_SELECT_UTIL_H
#define CCLI_SELECT_UTIL_H

#include "model/option.h"

// ==== utils of func select
int ccli_select1(
    const char* const message,

    const struct ccli_select_option opt1,

    unsigned long* cursored
);

int ccli_select2(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,

    unsigned long* cursored
);

int ccli_select3(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,

    unsigned long* cursored
);

int ccli_select4(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,

    unsigned long* cursored
);

int ccli_select5(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,

    unsigned long* cursored
);

int ccli_select6(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,

    unsigned long* cursored
);

int ccli_select7(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,

    unsigned long* cursored
);

int ccli_select8(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7,
    const struct ccli_select_option opt8,

    unsigned long* cursored
);

int ccli_select9(
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

    unsigned long* cursored
);

int ccli_select10(
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

    unsigned long* cursored
);

int ccli_select11(
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

    unsigned long* cursored
);

int ccli_select12(
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

    unsigned long* cursored
);

int ccli_select13(
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

    unsigned long* cursored
);

int ccli_select14(
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

    unsigned long* cursored
);

int ccli_select15(
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

    unsigned long* cursored
);

int ccli_select16(
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
    const struct ccli_select_option opt16,

    unsigned long* cursored
);

// ==== util for selection_option
struct ccli_select_option sopt(const char* const message);

#endif // CCLI_SELECT_UTIL_H
