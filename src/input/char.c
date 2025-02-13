#include "../../include/input/char.h"

#include "stdio.h"
#include "stdlib.h"

void ccli_input_char(
    const char* const message,
    char* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_char()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_char()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_INPUT_CHAR_BUFFER_SIZE];
    char* fgetbuf = fgets(buffer, sizeof(buffer), stdin);

    if (fgetbuf == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Failed to get buffer from stdin\n");
        printf("[ccli] - funcname: ccli_input_char()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        printf("[ccli] * bufsize: %d\n", CCLI_INPUT_CHAR_BUFFER_SIZE);
        exit(-1);
    }

    char data;
    int scancnt = sscanf(buffer, "%c", &data);

    if (scancnt != 1) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Failed to scan char from buffer\n");
        printf("[ccli] - funcname: ccli_input_char()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    (*out) = data;
}
