#include "main.h"

char *_strncpy(char *dest, char *src, int n) {
    char *original = dest;

    while (n-- > 0 && (*dest++ = *src++))
        ;

    return original;
}

