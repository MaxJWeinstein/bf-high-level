#ifndef TOKENS_H
#define TOKENS_H

#include <stdio.h>
#include <stdlib.h>
#include "c_keywords.h"


typedef enum {
        TK_CAT_KEYWORD,
        TK_CAT_ID,
        TK_CAT_CONSTANT,
        TK_CAT_STR_LIT,
        TK_CAT_PUNCTUATOR
} TOKEN_CATEGORY;

typedef enum {
        TK_ID,

        TK_LBRACE,
        TK_RBRACE,

        TK_LPAREN,
        TK_RPAREN,

        TK_LBRACKET,
        TK_RBRACKET,

        TK_SEMICOLON,

        TK_COMMA,

        TK_INT,
        TK_CHAR,
        TK_STR,
        TK_FLOAT,
        TK_BOOL,

        TK_PLUS,
        TK_MINUS,
        TK_STAR,
        TK_SLASH,
        TK_PERCENT,
        TK_AMPERSAND,
        TK_EXCLAMATION,
        TK_QUESTION,
        TK_COLON,
        TK_PIPE,
        TK_CARET,
        TK_TILDE,

        TK_INC,
        TK_DEC,

        TK_LSHIFT,
        TK_RSHIFT,

        TK_LESS_THAN,
        TK_GREATER_THAN,
        TK_LESS_THAN_EQUAL,
        TK_GREATER_THAN_EQUAL,

        TK_EQUAL_COMP,
        TK_NOT_EQUAL,

        TK_AND,
        TK_OR,

        TK_DOUBLE_COLON,

        TK_ELLIPSIS,

        TK_EQUALS,
        TK_STAR_EQUALS,
        TK_SLASH_EQUALS,
        TK_PERCENT_EQUALS,
        TK_PLUS_EQUALS,
        TK_MINUS_EQUALS,
        TK_LSHIFT_EQUALS,
        TK_RSHIFT_EQUALS,
        TK_AMPERSAND_EQUALS,
        TK_CARET_EQUALS,
        TK_PIPE_EQUALS,

        TK_HASH,
        TK_DOUBLE_HASH,

        TK_PERIOD,
        TK_ARROW,

        TK_KEYWORD
} TOKEN_LBL;


typedef struct {
        // TOKEN_LBL
        // content - union of name (str), key (enum), and value (union)
} TOKEN_T;

struct token_array {
        size_t size;
        TOKEN_T *tokens;
};

struct token_array *init_token_array();

void add_token(struct token_array *tokens, TOKEN_T token);

#endif