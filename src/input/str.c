#include "../../include/input/str.h"

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

static const int CCLI_INPUT_STR_ERROR_NONE                                 = 0;

static const int CCLI_INPUT_STR_ERROR_PARAMETER_MESSAGE_NULL               = -1;
static const int CCLI_INPUT_STR_ERROR_PARAMETER_OUT_NULL                   = -2;
static const int CCLI_INPUT_STR_ERROR_PARAMETER_SIZE_ZERO                  = -3;
static const int CCLI_INPUT_STR_ERROR_FAILED_TO_FGETS_BUFFER_FROM_STDIN    = -4;


static const char CCLI_INPUT_STR_NEWLINE_CHAR = '\n';
static const char* const CCLI_INPUT_STR_NEWLINE_STR = "\n";
static const char CCLI_INPUT_STR_ENDLINE_CHAR = '\0';

int ccli_input_str(
    const char* const message,

    char* const out,
    const size_t size
) {
    if (message == NULL) return CCLI_INPUT_STR_ERROR_PARAMETER_MESSAGE_NULL;
    if (out == NULL) return CCLI_INPUT_STR_ERROR_PARAMETER_OUT_NULL;
    if (size == 0) return CCLI_INPUT_STR_ERROR_PARAMETER_SIZE_ZERO;

    printf("%s\n", message);
    printf("> ");

    char buffer[size];
    char* fgetbuf = fgets(buffer, sizeof(buffer), stdin);

    if (fgetbuf == NULL) return CCLI_INPUT_STR_ERROR_FAILED_TO_FGETS_BUFFER_FROM_STDIN;

    // change last 'newline' to NULL
    // ['a' 'b' 'c' '\n' '\0'] ==> ['a' 'b' 'c' '\0' '\0']
    buffer[strcspn(buffer, CCLI_INPUT_STR_NEWLINE_STR)] = CCLI_INPUT_STR_ENDLINE_CHAR;

    // copy buffer to out & ensure last NULL
    strncpy(out, buffer, size -1);
    out[size-1] = CCLI_INPUT_STR_ENDLINE_CHAR;

    return CCLI_INPUT_STR_ERROR_NONE;
}

/*
 * Why not use '\n\r' in 'prinf' and 'strcspn' for representing newline
 * => cuz they compensate '\n' automactically
 * => If windows, they automatically change LF to LFRF
 */
