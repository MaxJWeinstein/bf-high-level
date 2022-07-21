#ifndef INTEGER_CONSTANTS_H
#define INTEGER_CONSTANTS_H

#include <stdbool.h>
#include <string.h>

#include "../../types/int.h"

typedef enum {
    INT_CONST_INVALID,
    INT_CONST_DECIMAL,
    INT_CONST_OCTAL,
    INT_CONST_HEX,
    INT_CONST_BINARY
} INT_CONST_BASES;

bool is_nonzero_digit(char c);

bool is_octal_digit(char c);

bool is_hexadecimal_digit(char c);

bool is_binary_digit(char c);

bool integer_constant_suffix(char *so_far, char next, GENERAL_INT_T *value);

bool integer_constant_continue(char *so_far, char next,
    INT_CONST_BASES *base, GENERAL_INT_T *value);

INT_CONST_BASES integer_constant_prefix(char *first, char *second);

bool is_integer_constant_init(char start);

#endif