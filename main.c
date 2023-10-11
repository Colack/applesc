// Path: src/main.c
// Author: Jack Spencer

// Apples programming language
// Apples *Monch* *Monch* *Monch*

// Include Libaries
#include "lib.h"

// Header Files
#include "lib/std.h"
#include "lib/time.h"
#include "lib/math.h"
#include "lib/str.h"

#include "core/lexer.h"
#include "core/parser.h"
#include "core/interpreter.h"
#include "core/compiler.h"
#include "core/tokens.h"

#include "utils/str.h"
#include "utils/arr.h"
#include "utils/obj.h"
#include "utils/num.h"
#include "utils/error.h"

// Function Prototypes
void printHelp();
void printVersion();
void printCredits();
void printLicense();
void printInfo();
void printUsage();
void printExample();
void printDocs();

int main(int argc, char *argv[]);

// Function Definitions

void printHelp() {
    printUsage();
    printExample();
    printInfo();
    printDocs();
    printCredits();
    printLicense();
    printVersion();
}

void printVersion() {
    printf("Version: %s\n", VERSION);
}

void printCredits() {
    printf("Author: %s\n", AUTHOR);
    printf("Year: %s\n", YEAR);
}

void printLicense() {
    printf("License: %s\n", LICENSE);
}

void printInfo() {
    printf("Info: %s\n", INFO);
}

void printUsage() {
    printf("Usage: %s [options] [file]\n", PROGRAM_NAME);
}

void printExample() {
    printf("Example: %s -v -h -f file\n", PROGRAM_NAME);
}

void printDocs() {
    printf("Docs: %s\n", DOCS);
}