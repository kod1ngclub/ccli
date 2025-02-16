#include "../../include/select/util.h"

#include "../../include/select/index.h"

#include "stdio.h"
#include "stdlib.h"

// ==== utils of func select
unsigned long ccli_select1(
    const char* const message,

    const struct ccli_select_option opt1
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select1()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    const struct ccli_select_option options[1] = { opt1 };

    for (int i=0; i<1; i++) {
        if (options[i].message == NULL) {
            printf("[ccli] ==== ERROR\n");
            printf("[ccli] Parameter 'opt%d.message' cannot be NULL\n", (i+1));
            printf("[ccli] - funcname: ccli_select1()\n");
            printf("[ccli] - filename: %s\n", __FILE__);
            printf("[ccli] - line: %d\n", __LINE__);
            exit(-1);
        }
    }

    return ccli_select(message, options, 1);
}

unsigned long ccli_select2(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select2()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    const struct ccli_select_option options[2] = { opt1, opt2 };

    for (int i=0; i<2; i++) {
        if (options[i].message == NULL) {
            printf("[ccli] ==== ERROR\n");
            printf("[ccli] Parameter 'opt%d.message' cannot be NULL\n", (i+1));
            printf("[ccli] - funcname: ccli_select2()\n");
            printf("[ccli] - filename: %s\n", __FILE__);
            printf("[ccli] - line: %d\n", __LINE__);
            exit(-1);
        }
    }

    return ccli_select(message, options, 2);
}

unsigned long ccli_select3(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select3()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    const struct ccli_select_option options[3] = { opt1, opt2, opt3 };

    for (int i=0; i<3; i++) {
        if (options[i].message == NULL) {
            printf("[ccli] ==== ERROR\n");
            printf("[ccli] Parameter 'opt%d.message' cannot be NULL\n", (i+1));
            printf("[ccli] - funcname: ccli_select3()\n");
            printf("[ccli] - filename: %s\n", __FILE__);
            printf("[ccli] - line: %d\n", __LINE__);
            exit(-1);
        }
    }
    return ccli_select(message, options, 3);
}

unsigned long ccli_select4(
    const char* const message,

    const struct ccli_select_option opt1,
    const struct ccli_select_option opt2,
    const struct ccli_select_option opt3,
    const struct ccli_select_option opt4
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select4()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select5()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select6()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select7()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select8()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select9()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select10()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select11()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select12()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select13()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select14()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select15()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select16()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: sopt()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    __sopt_last_id__++;

    const struct ccli_select_option opt = {
        .message    = message,
        .id         = __sopt_last_id__
    };

    return opt;
}
