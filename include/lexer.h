#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>
#include <stdlib.h>

#include "tokens.h"

struct token_array {
        size_t size;
        TOKEN_T *tokens;
};

struct token_array *lex_file(FILE *source);

#endif