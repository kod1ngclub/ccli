#include "../../include/input/util.h"

#include "../../include/input/str.h"

#include "stdio.h"
#include "stdlib.h"

int ccli_input_str8(const char* const message, char* const out) {
    return ccli_input_str(message, out, 8);
}

int ccli_input_str16(const char* const message, char* const out) {
    return ccli_input_str(message, out, 16);
}

int ccli_input_str32(const char* const message, char* const out) {
    return ccli_input_str(message, out, 32);
}

int ccli_input_str64(const char* const message, char* const out) {
    return ccli_input_str(message, out, 64);
}

int ccli_input_str128(const char* const message, char* const out) {
    return ccli_input_str(message, out, 128);
}

int ccli_input_str70(const char* const message, char* const out) {
    return ccli_input_str(message, out, 70);
}
