#include "../../include/input/str.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

static const char __CCLI_INPUT_STR_NEWLINE_CHAR__ = '\n';
static const char* const __CCLI_INPUT_STR_NEWLINE_STR__ = "\n";
static const char __CCLI_INPUT_STR_ENDLINE_CHAR__ = '\0';

void ccli_input_str(
    const char* const message,

    char* const out,
    const size_t size
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (size == 0) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'size' cannot be 0");
        printf("[ccli] - funcname: ccli_input_str()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_INPUT_STR_BUFFER_SIZE];
    char* fgetbuf = fgets(buffer, sizeof(buffer), stdin);

    if (fgetbuf == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Failed to get buffer from stdin\n");
        printf("[ccli] - funcname: ccli_input_str()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        printf("[ccli] * bufsize: %d\n", CCLI_INPUT_STR_BUFFER_SIZE);
        exit(-1);
    }

    // change last 'newline' to NULL
    // ['a' 'b' 'c' '\n' '\0'] ==> ['a' 'b' 'c' '\0' '\0']
    buffer[strcspn(buffer, __CCLI_INPUT_STR_NEWLINE_STR__)] = __CCLI_INPUT_STR_ENDLINE_CHAR__;

    // copy buffer to out
    strncpy(out, buffer, size -1);

    // ensure last NULL
    out[size-1] = __CCLI_INPUT_STR_ENDLINE_CHAR__;
}

/*
 * Why not use '\n\r' in 'prinf' and 'strcspn' for representing newline
 * => cuz they compensate '\n' automactically
 * => If windows, they automatically change LF to LFRF
 */
