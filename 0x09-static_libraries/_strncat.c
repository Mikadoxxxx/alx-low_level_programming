#include "main.h"

char *_strncat(char *dest, char *src, int n) {
    char *original = dest;

    while (*dest)
        dest++;

    while (n-- > 0 && (*dest++ = *src++))
        ;

    return original;
}

