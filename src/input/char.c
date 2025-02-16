#include "../../include/input/char.h"

#include "stdio.h"
#include "stdlib.h"

static const int CCLI_INPUT_CHAR_ERROR_NONE                                 = 0;
static const int CCLI_INPUT_CHAR_ERROR_PARAMETER_MESSAGE_NULL               = 1;
static const int CCLI_INPUT_CHAR_ERROR_PARAMETER_OUT_NULL                   = 2;
static const int CCLI_INPUT_CHAR_ERROR_FAILED_TO_FGETS_BUFFER_FROM_STDIN    = 3;
static const int CCLI_INPUT_CHAR_ERROR_FAILED_TO_SSCANF_CHAR_FROM_BUFFER    = 4;


int ccli_input_char(const char* const message, char* const out) {
    if (message == NULL) return CCLI_INPUT_CHAR_ERROR_PARAMETER_MESSAGE_NULL;
    if (out == NULL) return CCLI_INPUT_CHAR_ERROR_PARAMETER_OUT_NULL;

    printf("%s\n", message);
    printf("> ");

    char buffer[CCLI_INPUT_CHAR_BUFFER_SIZE];
    char* fgetbuf = fgets(buffer, sizeof(buffer), stdin);

    if (fgetbuf == NULL) return CCLI_INPUT_CHAR_ERROR_FAILED_TO_FGETS_BUFFER_FROM_STDIN;

    char data;
    int scancnt = sscanf(buffer, "%c", &data);

    if (scancnt != 1) return CCLI_INPUT_CHAR_ERROR_FAILED_TO_SSCANF_CHAR_FROM_BUFFER;

    (*out) = data;
    return CCLI_INPUT_CHAR_ERROR_NONE;
}
