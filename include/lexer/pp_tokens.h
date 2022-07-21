#ifndef PP_TOKENS_H
#define PP_TOKENS_H

typedef enum {
        PP_TK_CAT_HEADER_NAME,
        PP_TK_CAT_ID,
        PP_TK_CAT_NUMBER,
        PP_TK_CAT_CHAR,
        PP_TK_CAT_STRING,
        PP_TK_CAT_PUNCTUATOR,
        PP_TK_CAT_OTHER // This is basically in the specs
} PP_TOKEN_CATEGORY;

#endif