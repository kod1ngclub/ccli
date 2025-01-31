#ifndef CCLI_ARG_FIND_H
#define CCLI_ARG_FIND_H

#include "cond/val.h"

// ==== out types
typedef char* const     out_val_str;
typedef char            out_val_char;
typedef int             out_val_int;
typedef char* const     out_val_filepath;
typedef char* const     out_val_dirpath;
typedef char* const     out_val_url;

// ==== API functions
void find_str_with_id(
    const unsigned long id,
    const out_val_str* const out
);

void find_char_with_id(
    const unsigned long id,
    const out_val_char* const out
);

void find_int_with_id(
    const unsigned long id,
    const out_val_int* const out
);

void find_filepath_with_id(
    const unsigned long id,
    const out_val_filepath* const out
);

void find_dirpath_with_id(
    const unsigned long id,
    const out_val_dirpath* const out
);

void find_url_with_id(
    const unsigned long id,
    const out_val_url* const out
);

#endif // CCLI_ARG_FIND_H
