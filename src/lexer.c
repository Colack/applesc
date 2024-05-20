#include "lexer.h"

char init_lexer(char source)
{
    // Run through the source code and tokenize it
    while (source != '\0') {
    }
}

char returnTokenCharacter(char type)
{
    if (type == '\0') {
        return TOKEN_EOF;
    } else if (type == 'integer') {
        return TOKEN_INTEGER;
    } else if (type == 'string') {
        return TOKEN_STRING;
    } else if (type == 'character') {
        return TOKEN_CHARACTER;
    } else if (type == 'boolean') {
        return TOKEN_BOOLEAN;
    } else if (type == 'undefined') {
        return TOKEN_UNDEFINED;
    } else if (type == '(') {
        return TOKEN_LEFT_PAREN;
    } else if (type == ')') {
        return TOKEN_RIGHT_PAREN;
    } else if (type == '[') {
        return TOKEN_LEFT_BRACKET;
    } else if (type == ']') {
        return TOKEN_RIGHT_BRACKET;
    } else if (type == '{') {
        return TOKEN_LEFT_BRACE;
    } else if (type == '}') {
        return TOKEN_RIGHT_BRACE;
    } else if (type == '.') {
        return TOKEN_PERIOD;
    } else if (type == ',') {
        return TOKEN_COMMA;
    } else if (type == '+') {
        return TOKEN_PLUS;
    } else if (type == '-') {
        return TOKEN_MINUS;
    } else if (type == '*') {
        return TOKEN_STAR;
    } else if (type == '/') {
        return TOKEN_SLASH;
    }
}