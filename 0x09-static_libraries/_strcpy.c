#include "main.h"

char *_strcpy(char *dest, char *src) {
    char *copy = dest;
    while ((*dest++ = *src++))
        ;
    return copy;
}
