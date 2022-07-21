#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>
#include <stdlib.h>

#include "pp_tokens.h"
#include "tokens.h"

/*
Want to pass a buffer around, that updates with each token read
This should be in a struct, with a fixed pointer to start, the size, the
        current index, and the farthest index read
This can be in a separate utility file
Make get_next_buffer function which operates like getline, returns number of
        characters read
Need a comment-tracking mechanism, since buffer doesn't always line up well with
        comment bounds. I want to keep the comment stuff in the comment file, so
        I think the only way is a global/static variable
        Actually, what if the comment file directly updates the buffer? It would
        likely be good to have a static variable in get_next_buffer tracking the
        last opened file, so that we can get buffers from multiple files, and
        that way we don't have to track the source file into the comment
        -matching function, nor do we have to stop partway through a comment
Hell, we could just run a whitespace eraser immediately after get_next_buffer,
        which returns the next buffer which doesn't start with whitespace. This
        way, no global/static variables are needed, and this is more thread-safe

*/

struct token_array *lex_file(FILE *source);

#endif