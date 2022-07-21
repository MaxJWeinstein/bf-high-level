#ifndef CONSTANTS_H
#define CONSTANTS_H

#include "integer_constants.h"
#include "float_constants.h"
#include "char_constants.h"

typedef enum {
    CONST_INTEGER,
    CONST_FLOAT,
    CONST_ENUM, // Just an identifier
    CONST_CHAR,
    CONST_PREDEF
} CONSTANTS_T;



#endif