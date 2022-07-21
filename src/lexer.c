#include "../include/lexer/lexer.h"

TOKEN_T get_next_token(FILE *source)
{
        // Initialize a token
        // Read a character, use that to get into some specifics
        // Branch into different functions
}

struct token_array *lex_file(FILE *source)
{
        // Maybe token array should be a linked list
        // Not sure if it's worth memory costs; maybe look at others
        // Initialize token array
        // Pass to function which returns next token
        // Make add_token function
}
