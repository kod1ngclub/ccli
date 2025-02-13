#include "../../include/input/int.h"

#include "stdio.h"
#include "stdlib.h"

void ccli_input_int(
    const char* const message,
    int* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_int()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_int()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_INPUT_INT_BUFFER_SIZE];
    char* fgetbuf = fgets(buffer, sizeof(buffer), stdin);

    if (fgetbuf == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Failed to get buffer from stdin\n");
        printf("[ccli] - funcname: ccli_input_int()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        printf("[ccli] * bufsize: %d\n", CCLI_INPUT_INT_BUFFER_SIZE);
        exit(-1);
    }

    int data;
    int scancnt = sscanf(buffer, "%d", &data);

    if (scancnt != 1) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Failed to scan int from buffer\n");
        printf("[ccli] - funcname: ccli_input_int()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    (*out) = data;
}
