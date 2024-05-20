#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <time.h>
#include <assert.h>

#define DEBUG_PRINT_TOKENS 0
#define DEBUG_PRINT_AST 0 

#define APPLESC_PREFIX "apples"
#define APPLESC_VERSION "0.0.1"

#define APPLESC_ERROR 1
#define APPLESC_SUCCESS 0

#define APPLESC_MAX_FILE_SIZE 1024 * 1024 * 1024 // 1GB.

#define APPLESC_MAX_LINE_SIZE 1024
#define APPLESC_MAX_IDENTIFIER_SIZE 256