#include "../../include/input/char.h"

#include "stdio.h"
#include "stdlib.h"

bool ccli_input_char(
    const char* const message,
    ccli_out_input_char* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_char() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_char() cannot be NULL");
        exit(-1);
    }

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_INPUT_CHAR_BUFFER_SIZE];
    char data;

    if (fgets(buffer, sizeof(buffer), stdin)) {
        if (sscanf(buffer, "%c", &data) == 1) {
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

