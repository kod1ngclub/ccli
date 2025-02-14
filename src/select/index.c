#include "../../include/select/index.h"

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

enum __ccli_select_key__ {
    __CCLI_SELECT_KEY_NONE__,
    __CCLI_SELECT_KEY_J__,
    __CCLI_SELECT_KEY_K__,
    __CCLI_SELECT_KEY_RETURN__
};

#ifdef _WIN32

#include <conio.h>
// <conio.h> has getch()

#define __CCLI_SELECT_KEY_ASCII_J__         (106)
#define __CCLI_SELECT_KEY_ASCII_K__         (107)
#define __CCLI_SELECT_KEY_ASCII_RETURN__    (13)

enum __ccli_select_key__ __ccli_select_getch__() {
    int ch = getch();

    switch (ch) {
        case __CCLI_SELECT_KEY_ASCII_J__:
            return __CCLI_SELECT_KEY_J__;
        case __CCLI_SELECT_KEY_ASCII_K__:
            return __CCLI_SELECT_KEY_K__;
        case __CCLI_SELECT_KEY_ASCII_RETURN__:
            return __CCLI_SELECT_KEY_RETURN__;
    }

    return __CCLI_SELECT_KEY_NONE__;
}


static void __ccli_select_clear_line__(int n) {
    for (int i=0; i<n; i++) {
        printf("\33[1A");
        printf("\33[2K");
    }
    fflush(stdout);
}

#undef __CCLI_SELECT_KEY_ASCII_J__
#undef __CCLI_SELECT_KEY_ASCII_K__
#undef __CCLI_SELECT_KEY_ASCII_RETURN__

#else

#include <termios.h>
#include <unistd.h>

#define __CCLI_SELECT_KEY_ASCII_J__         (106)
#define __CCLI_SELECT_KEY_ASCII_K__         (107)
#define __CCLI_SELECT_KEY_ASCII_RETURN__    (10)

int __ccli_select_getch__(void) {
    struct termios oldt, newt;
    int ch;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    newt.c_lflag &= ~(ICANON | ECHO);
    newt.c_cc[VMIN] = 1;
    newt.c_cc[VTIME] = 0;

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

    switch (ch) {
        case __CCLI_SELECT_KEY_ASCII_J__:
            return __CCLI_SELECT_KEY_J__;
        case __CCLI_SELECT_KEY_ASCII_K__:
            return __CCLI_SELECT_KEY_K__;
        case __CCLI_SELECT_KEY_ASCII_RETURN__:
            return __CCLI_SELECT_KEY_RETURN__;
    }

    return __CCLI_SELECT_KEY_NONE__;
}


static void __ccli_select_clear_line__(int n) {
    for (int i=0; i<n; i++) {
        printf("\33[1A");
        printf("\33[2K");
    }
    fflush(stdout);
}

#undef __CCLI_SELECT_KEY_ASCII_J__
#undef __CCLI_SELECT_KEY_ASCII_K__
#undef __CCLI_SELECT_KEY_ASCII_RETURN__

#endif

static inline void __ccli_select_print__(
    int at,
    const struct ccli_select_option* const opts,
    const size_t size
) {
    for (int i=0; i<size; i++) {
        if (i == at) {
            printf("> %s\n", opts[i].message);
        } else {
            printf("  %s\n", opts[i].message);
        }
    }
}

unsigned long ccli_select(
    const char* const message,
    const struct ccli_select_option* const opts,
    const size_t size
) {
    printf("%s\n", message);

    int at = 0;
    __ccli_select_print__(at, opts, size);

    const int select_index_min = 0;
    const int select_index_max = (size-1);

    while (true) {
        switch (__ccli_select_getch__()) {
            case __CCLI_SELECT_KEY_J__:
                if (at == select_index_max) {
                    at = select_index_min;
                } else {
                    at++;
                }
                break;
            case __CCLI_SELECT_KEY_K__:
                if (at == select_index_min) {
                    at = select_index_max;
                } else {
                    at--;
                }
                break;
            case __CCLI_SELECT_KEY_RETURN__:
                return opts[at].id;
            case __CCLI_SELECT_KEY_NONE__:
                continue;
        }

        __ccli_select_clear_line__(size);
        __ccli_select_print__(at, opts, size);
   }

    return 0;
}
