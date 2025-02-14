#include "../../include/select/util.h"

#include "../../include/select/index.h"

// ==== utils of func select
unsigned long ccli_select1(
    const char* const message,

    const struct ccli_select_option opt1
) {
    const struct ccli_select_option options[1] = { opt1 };
    return ccli_select(message, options, 1);
}

unsigned long ccli_select2(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2
) {
    const struct ccli_select_option options[2] = { opt1, opt2 };
    return ccli_select(message, options, 2);
}

unsigned long ccli_select3(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3
) {
    const struct ccli_select_option options[3] = { opt1, opt2, opt3 };
    return ccli_select(message, options, 3);
}

unsigned long ccli_select4(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4
) {
    const struct ccli_select_option options[4] = { opt1, opt2, opt3, opt4 };
    return ccli_select(message, options, 4);
}

unsigned long ccli_select5(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5
) {
    const struct ccli_select_option options[5] = { opt1, opt2, opt3, opt4, opt5 };
    return ccli_select(message, options, 5);
}

unsigned long ccli_select6(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6
) {
    const struct ccli_select_option options[6] = {
        opt1,
        opt2,
        opt3,
        opt4,
        opt5,
        opt6
    };

    return ccli_select(message, options, 6);
}

unsigned long ccli_select7(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4,
    const struct ccli_select_option opt5,
    const struct ccli_select_option opt6,
    const struct ccli_select_option opt7
) {
    const struct ccli_select_option options[7] = {
        opt1,
        opt2,
        opt3,
        opt4,
        opt5,
        opt6,
        opt7
    };

    return ccli_select(message, options, 7);
}

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
) {
    const struct ccli_select_option options[8] = {
        opt1,
        opt2,
        opt3,
        opt4,
        opt5,
        opt6,
        opt7,
        opt8
    };

    return ccli_select(message, options, 8);
}

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
) {
    const struct ccli_select_option options[9] = {
        opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9
    };

    return ccli_select(message, options, 9);
}

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
) {
    const struct ccli_select_option options[10] = {
        opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10
    };

    return ccli_select(message, options, 10);

}

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
) {
    const struct ccli_select_option options[11] = {
        opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10, opt11
    };

    return ccli_select(message, options, 11);
}

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
) {
    const struct ccli_select_option options[12] = {
        opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10, opt11, opt12
    };

    return ccli_select(message, options, 12);
}

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
) {
    const struct ccli_select_option options[13] = {
        opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10, opt11, opt12, opt13
    };

    return ccli_select(message, options, 13);
}

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
) {
    const struct ccli_select_option options[14] = {
        opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10, opt11, opt12, opt13, opt14
    };

    return ccli_select(message, options, 14);
}

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
) {
    const struct ccli_select_option options[15] = {
        opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10, opt11, opt12, opt13, opt14, opt15
    };

    return ccli_select(message, options, 15);
}

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
) {
    const struct ccli_select_option options[16] = {
        opt1,
        opt2,
        opt3,
        opt4,
        opt5,
        opt6,
        opt7,
        opt8,
        opt9,
        opt10,
        opt11,
        opt12,
        opt13,
        opt14,
        opt15,
        opt16
    };

    return ccli_select(message, options, 16);
}

// ==== util for selection_option
static int __sopt_last_id__ = 0;

struct ccli_select_option sopt(const char* const message) {
    __sopt_last_id__++;

    const struct ccli_select_option opt = {
        .message    = message,
        .id         = __sopt_last_id__
    };

    return opt;
}
