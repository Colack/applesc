#ifndef LEXER_H
#define LEXER_H

#include "common.h"

typedef enum {
    TOKEN_EOF,

    TOKEN_INTEGER,
    TOKEN_DECIMAL,
    TOKEN_STRING,
    TOKEN_CHARACTER,
    TOKEN_BOOLEAN,
    TOKEN_UNDEFINED,

    TOKEN_LEFT_PAREN,
    TOKEN_RIGHT_PAREN,
    TOKEN_LEFT_BRACE,
    TOKEN_RIGHT_BRACE,
    TOKEN_LEFT_BRACKET,
    TOKEN_RIGHT_BRACKET,

    TOKEN_PERIOD,
    TOKEN_COMMA,

    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_STAR,
    TOKEN_SLASH,
    TOKEN_PERCENT,
    
    TOKEN_COL,
    TOKEN_SEMICOL,

    TOKEN_EQUAL,
    TOKEN_NOT_EQUAL,
    TOKEN_LESS,
    TOKEN_GREAT,
    
    TOKEN_AND,
    TOKEN_OR,
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_WHILE,
    TOKEN_FOR,
    TOKEN_RETURN,
    TOKEN_BREAK,
    TOKEN_CONTINUE,

    TOKEN_IDENTIFIER,
    TOKEN_ASSIGN,
    TOKEN_INCLUDE,

    TOKEN_FUNCTION,
    TOKEN_STATIC,
    TOKEN_CLASS,
    TOKEN_FINAL
} TokenType;

typedef struct {
    TokenType type;
    char *start;
    int length;
    int line;
} Token;

char init_lexer(char source);
char returnTokenCharacter(char type);

#endif