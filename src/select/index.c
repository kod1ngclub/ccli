#include "../../include/select/index.h"

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

enum ccli_select_key {
    CCLI_SELECT_KEY_NONE,
    CCLI_SELECT_KEY_J,
    CCLI_SELECT_KEY_K,
    CCLI_SELECT_KEY_RETURN
};

#ifdef _WIN32

#include <conio.h>
// <conio.h> has getch()

#define CCLI_SELECT_KEY_ASCII_J         (106)
#define CCLI_SELECT_KEY_ASCII_K         (107)
#define CCLI_SELECT_KEY_ASCII_RETURN    (13)

enum ccli_select_key ccli_select_getch() {
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


static void ccli_select_clear_line(int n) {
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

#define CCLI_SELECT_KEY_ASCII_J         (106)
#define CCLI_SELECT_KEY_ASCII_K         (107)
#define CCLI_SELECT_KEY_ASCII_RETURN    (10)

int ccli_select_getch(void) {
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


static void ccli_select_clear_line(int n) {
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

static inline void ccli_select_print(
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
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_select()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (size == 0) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'size' cannot be 0\n");
        printf("[ccli] - funcname: ccli_select()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    for (int i=0; i<size; i++) {
        if (opts[i].message == NULL) {
            printf("[ccli] ==== ERROR\n");
            printf("[ccli] Parameter 'opts[%d].message' cannot be NULL\n", i);
            printf("[ccli] - funcname: ccli_select()\n");
            printf("[ccli] - filename: %s\n", __FILE__);
            printf("[ccli] - line: %d\n", __LINE__);
            exit(-1);
        }
    }

    printf("%s\n", message);

    int at = 0;
    ccli_select_print(at, opts, size);

    const int select_index_min = 0;
    const int select_index_max = (size-1);

    while (true) {
        switch (ccli_select_getch()) {
            case CCLI_SELECT_KEY_J:
                if (at == select_index_max) {
                    at = select_index_min;
                } else {
                    at++;
                }
                break;
            case CCLI_SELECT_KEY_K:
                if (at == select_index_min) {
                    at = select_index_max;
                } else {
                    at--;
                }
                break;
            case CCLI_SELECT_KEY_RETURN:
                return opts[at].id;
            case CCLI_SELECT_KEY_NONE:
                continue;
        }

        ccli_select_clear_line(size);
        ccli_select_print(at, opts, size);
   }

    return 0;
}
