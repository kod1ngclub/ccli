#ifndef CCLI_ARG_FIND_H
#define CCLI_ARG_FIND_H

#include "cond/val.h"

typedef char* const     datatype_val_str;
typedef char            datatype_val_char;
typedef int             datatype_val_int;
typedef char* const     datatype_val_filepath;
typedef char* const     datatype_val_dirpath;
typedef char* const     datatype_val_url;

void find_str_with_id(const unsigned long id, const datatype_val_str* const out);
void find_char_with_id(const unsigned long id, const datatype_val_char* const out);
void find_int_with_id(const unsigned long id, const datatype_val_int* const out);
void find_filepath_with_id(const unsigned long id, const datatype_val_filepath* const out);
void find_dirpath_with_id(const unsigned long id, const datatype_val_dirpath* const out);
void find_url_with_id(const unsigned long id, const datatype_val_url* const out);

#endif // CCLI_ARG_FIND_H
