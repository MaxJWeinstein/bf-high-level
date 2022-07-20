#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>

#include "ast.h"
#include "tokens.h"

AST_T *parse(TOKEN_T tokens[], size_t size);

#endif