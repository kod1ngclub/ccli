#include "../../include/scan/str.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

static const char CCLI_SCAN_STR_NEWLINE_CHAR = '\n';
static const char* const CCLI_SCAN_STR_NEWLINE_STR = "\n";
static const char CCLI_SCAN_STR_ENDLINE_CHAR = '\0';

bool ccli_scan_str(
    const char* const message,

    ccli_out_scan_str* const out,
    const int out_size
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_scan_str() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_scan_str() cannot be NULL");
        exit(-1);
    }

    if ((*out) == NULL) {
        printf("[ccli] origin of parameter 'out' of ccli_scan_str() cannot be NULL");
        printf("[ccli] Expected: (*out) != NULL");
        exit(-1);
    }

    if (out_size <= 0) {
        printf("[ccli] parameter 'out_size' of ccli_scan_str() cannot be 0 or lessor");
        exit(-1);
    }

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_SCAN_STR_BUFFER_SIZE];
    char* const data;

    if (fgets(buffer, sizeof(buffer), stdin)) {
        // cut newline character
        buffer[strcspn(buffer, CCLI_SCAN_STR_NEWLINE_STR)] = CCLI_SCAN_STR_ENDLINE_CHAR;

        // copy buffer to out
        strncpy((*out), buffer, out_size -1);

        // ensure last NULL
        (*out)[out_size-1] = CCLI_SCAN_STR_ENDLINE_CHAR;

        return true;
    } else {
        return false;
    }
}

/*
 * Why not use '\n\r' in 'prinf' and 'strcspn' for representing newline
 * => cuz they compensate '\n' automactically
 * => If windows, they automatically change LF to LFRF
 */