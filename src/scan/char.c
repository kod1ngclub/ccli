#include "../../include/scan/char.h"

#include "stdio.h"
#include "stdlib.h"

bool ccli_scan_char(
    const char* const message,
    ccli_out_scan_char* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_scan_char() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_scan_char() cannot be NULL");
        exit(-1);
    }

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_SCAN_CHAR_BUFFER_SIZE];
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

