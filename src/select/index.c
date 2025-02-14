#include "../../include/select/index.h"

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

enum __ccli_select_key__ {
    CCLI_SELECT_KEY_NONE,
    CCLI_SELECT_KEY_J,
    CCLI_SELECT_KEY_K,
    CCLI_SELECT_KEY_RETURN
};

#ifdef _WIN32

#include <conio.h>
// <conio.h> has getch()

#define CCLI_SELECT_KEY_ASCII_J        (106)
#define CCLI_SELECT_KEY_ASCII_K        (107)
#define CCLI_SELECT_KEY_ASCII_RETURN   (13)

enum __ccli_select_key__ __ccli_select_getch__() {
    int ch = getch();

    switch (ch) {
        case CCLI_SELECT_KEY_ASCII_J:
            return CCLI_SELECT_KEY_J;
        case CCLI_SELECT_KEY_ASCII_K:
            return CCLI_SELECT_KEY_K;
        case CCLI_SELECT_KEY_ASCII_RETURN:
            return CCLI_SELECT_KEY_RETURN;
    }

    return CCLI_SELECT_KEY_NONE;
}


static void __ccli_select_clear_line__(int n) {
    for (int i=0; i<n; i++) {
        printf("\33[1A");
        printf("\33[2K");
    }
    fflush(stdout);
}

#undef CCLI_SELECT_KEY_ASCII_J
#undef CCLI_SELECT_KEY_ASCII_K
#undef CCLI_SELECT_KEY_ASCII_RETURN

#else

#include <termios.h>
#include <unistd.h>

#define CCLI_SELECT_KEY_ASCII_J        (106)
#define CCLI_SELECT_KEY_ASCII_K        (107)
#define CCLI_SELECT_KEY_ASCII_RETURN   (10)

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
        case CCLI_SELECT_KEY_ASCII_J:
            return CCLI_SELECT_KEY_J;
        case CCLI_SELECT_KEY_ASCII_K:
            return CCLI_SELECT_KEY_K;
        case CCLI_SELECT_KEY_ASCII_RETURN:
            return CCLI_SELECT_KEY_RETURN;
    }

    return CCLI_SELECT_KEY_NONE;
}


static void __ccli_select_clear_line__(int n) {
    for (int i=0; i<n; i++) {
        printf("\33[1A");
        printf("\33[2K");
    }
    fflush(stdout);
}

#undef CCLI_SELECT_KEY_ASCII_J
#undef CCLI_SELECT_KEY_ASCII_K
#undef CCLI_SELECT_KEY_ASCII_RETURN

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

    const int SELECT_MIN = 0;
    const int SELECT_MAX = (size-1);

    while (true) {
        switch (__ccli_select_getch__()) {
            case CCLI_SELECT_KEY_J:
                if (at == SELECT_MAX) {
                    at = SELECT_MIN;
                } else {
                    at++;
                }
                break;
            case CCLI_SELECT_KEY_K:
                if (at == SELECT_MIN) {
                    at = SELECT_MAX;
                } else {
                    at--;
                }
                break;
            case CCLI_SELECT_KEY_RETURN:
                return opts[at].id;
            case CCLI_SELECT_KEY_NONE:
                continue;
        }

        __ccli_select_clear_line__(size);
        __ccli_select_print__(at, opts, size);
   }

    return 0;
}
