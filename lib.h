// lib.h file

#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 1024
#define MAX_WORD 128
#define MAX_CHAR 128

#define VERSION "0.0.1" // indev version
#define AUTHOR "Jack Spencer" // colack
#define YEAR "2023"
#define LICENSE "MIT"
#define INFO "A programming language written in C"
#define PROGRAM_NAME "apples"
#define DOCS "https://github.com/colack/applesdocs"
#define GITHUB "https://github.com/colack/applesC"
#define ABOUT "A programming language written in C"
#define AUTHOR_EMAIL "colackalpha@gmail.com"

typedef struct {
    char *word;
    int count;
} Word;

typedef struct {
    Word *words;
    int size;
} WordArray;

typedef struct {
    char *line;
    int count;
} Line;

typedef struct {
    Line *lines;
    int size;
} LineArray;

#endif