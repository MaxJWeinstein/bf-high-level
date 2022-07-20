#include "../include/main.h"


int main(int argc, char **argv)
{
        // Expect arguments of form [-o filename] filename
        // Pass arguments to other file, get source and output files
        FILE *source, *output;
        parse_args(argc, argv, &source, &output);
        // Pass source file to lexer, get token array
        // struct token_array *tokens = lex_file(source);
        // // Pass token array to parser, get AST
        // AST_T *ast = parse(tokens->tokens, tokens->size);
        // // Pass AST to semantic optimizer
        // // Pass AST and output file to code generator, place code in output file
        // generate_code(ast, output);
        // // Go through result and check for redundancies
        return 0;
}