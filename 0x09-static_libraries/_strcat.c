#include "main.h"

char *_strcat(char *dest, char *src) {
    char *original = dest;

    while (*dest)
        dest++;

    while ((*dest++ = *src++))
        ;

    return original;
}

