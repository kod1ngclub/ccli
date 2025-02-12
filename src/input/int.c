#include "../../include/input/int.h"

#include "stdio.h"
#include "stdlib.h"

bool ccli_input_int(
    const char* const message,
    ccli_out_input_int* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_int() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_int() cannot be NULL");
        exit(-1);
    }

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_INPUT_INT_BUFFER_SIZE];
    int data;

    if (fgets(buffer, sizeof(buffer), stdin)) {
        if (sscanf(buffer, "%d", &data) == 1) {
            goto scanned;
        } else {
            goto failed;
        }
    } else {
        goto failed;
    }

scanned:
    (*out) = data;
    return true;

failed:
    return false;
}

