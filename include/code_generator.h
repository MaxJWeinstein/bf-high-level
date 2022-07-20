#ifndef CODE_GENERATOR_H
#define CODE_GENERATOR_H

#include <stdio.h>
#include <stdlib.h>

#include "ast.h"

void generate_code(AST_T *ast, FILE *output);

#endif