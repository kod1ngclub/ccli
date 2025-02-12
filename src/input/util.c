#include "../../include/input/util.h"

#include "../../include/input/str.h"

#include "stdio.h"
#include "stdlib.h"

bool ccli_input_str8(
    const char* const message,

    ccli_out_input_str* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_str8() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_str8() cannot be NULL");
        exit(-1);
    }

    return ccli_input_str(message, out, 8);
}

bool ccli_input_str16(
    const char* const message,

    ccli_out_input_str* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_str16() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_str16() cannot be NULL");
        exit(-1);
    }

    return ccli_input_str(message, out, 16);
}

bool ccli_input_str32(
    const char* const message,

    ccli_out_input_str* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_str32() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_str32() cannot be NULL");
        exit(-1);
    }

    return ccli_input_str(message, out, 32);
}

bool ccli_input_str64(
    const char* const message,

    ccli_out_input_str* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_str32() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_str32() cannot be NULL");
        exit(-1);
    }

    return ccli_input_str(message, out, 32);
}

bool ccli_input_str128(
    const char* const message,

    ccli_out_input_str* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_str128() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_str128() cannot be NULL");
        exit(-1);
    }

    return ccli_input_str(message, out, 128);
}

bool ccli_input_str70(
    const char* const message,

    ccli_out_input_str* const out
) {
    if (message == NULL) {
        printf("[ccli] parameter 'message' of ccli_input_str70() cannot be NULL");
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] parameter 'out' of ccli_input_str70() cannot be NULL");
        exit(-1);
    }

    return ccli_input_str(message, out, 70);
}