// Path: src/lib.h
// Author: Jack Spencer

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
#define YEAR "2024"
#define LICENSE "MIT"
#define INFO "A programming language written in C"
#define PROGRAM_NAME "apples"
#define DOCS "https://github.com/colack/applesdocs"
#define GITHUB "https://github.com/colack/applesC"
#define ABOUT "A programming language written in C"
#define AUTHOR_EMAIL "colackalpha@gmail.com"
#define FUNNY_MESSAGE "If this shows up, something went wrong. :/"
#define AUTHOR_GITHUB "https://github.com/colack"
#define APPLES_WEBSITE "https://colack.github.io/applesc"
#define APPLES_DOCS_WEBSITE "https://colack.github.io/applesc/docs"
#define APPLES_GAF_WEBSITE "https://colack.github.io/applesc/gaf"

#define TRUE 1
#define FALSE 0

#define DEBUG FALSE

#define VERSION_COMMAND "version"
#define AUTHOR_COMMAND "author"
#define YEAR_COMMAND "year"
#define LICENSE_COMMAND "license"
#define INFO_COMMAND "info"
#define PROGRAM_NAME_COMMAND "program_name"
#define DOCS_COMMAND "docs"
#define GITHUB_COMMAND "github"
#define ABOUT_COMMAND "about"

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
