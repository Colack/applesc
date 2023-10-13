#ifndef TOKENS_H
#define TOKENS_H

#include "../lib.h"

#define MAX_TOKENS 1024

typedef enum {
    TOKEN_EOF,
    TOKEN_NEWLINE,
    TOKEN_WORD,
    TOKEN_NUMBER,
    TOKEN_STRING,
    TOKEN_OPERATOR,
    TOKEN_PUNCTUATION,
    TOKEN_KEYWORD,
    TOKEN_IDENTIFIER,
    TOKEN_COMMENT,
    TOKEN_UNKNOWN
} TokenType;

typedef struct {
    TokenType type;
    char *value;
} Token;

typedef struct {
    Token *tokens;
    int size;
} TokenArray;

TokenArray *tokenize(char *source);

#endif