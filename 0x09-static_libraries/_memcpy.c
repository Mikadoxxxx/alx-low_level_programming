#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original = dest;

    while (n-- > 0) {
        *dest++ = *src++;
    }

    return original;
}

