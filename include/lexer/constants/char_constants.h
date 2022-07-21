#ifndef CHAR_CONSTANTS_H
#define CHAR_CONSTANTS_H

#include <stdbool.h>

typedef enum {
        CCE_DEFAULT,
        CCE_UTF8,
        CCE_WCHAR,
        CCE_UTF16,
        CCE_UTF32
} CHAR_CONST_ENCODING_T;

typedef struct {

} CHAR_CONST_T;

CHAR_CONST_ENCODING_T char_const_read_prefix(char first, int second);

bool is_character_constant(char start);

CHAR_CONST_T *find_char_constant(char *buf);

#endif