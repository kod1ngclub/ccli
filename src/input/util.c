#include "../../include/input/util.h"

#include "../../include/input/str.h"

#include "stdio.h"
#include "stdlib.h"

void ccli_input_str8(
    const char* const message,

    char* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str8()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str8()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    return ccli_input_str(message, out, 8);
}

void ccli_input_str16(
    const char* const message,

    char* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str16()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str16()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    return ccli_input_str(message, out, 16);
}

void ccli_input_str32(
    const char* const message,

    char* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str32()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str32()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    return ccli_input_str(message, out, 32);
}

void ccli_input_str64(
    const char* const message,

    char* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str64()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str64()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    return ccli_input_str(message, out, 64);
}

void ccli_input_str128(
    const char* const message,

    char* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str128()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str128()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    return ccli_input_str(message, out, 128);
}

void ccli_input_str70(
    const char* const message,

    char* const out
) {
    if (message == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'message' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str70()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    if (out == NULL) {
        printf("[ccli] ==== ERROR\n");
        printf("[ccli] Parameter 'out' cannot be NULL\n");
        printf("[ccli] - funcname: ccli_input_str70()\n");
        printf("[ccli] - filename: %s\n", __FILE__);
        printf("[ccli] - line: %d\n", __LINE__);
        exit(-1);
    }

    return ccli_input_str(message, out, 70);
}
