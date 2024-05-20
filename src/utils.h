#ifndef UTILS_H
#define UTILS_H

#include "common.h"

bool readFile(char *path, char **buffer);
bool writeFile(char *path, char **buffer);

char applesError(char *message);

#endif