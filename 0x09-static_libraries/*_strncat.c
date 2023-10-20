/* *_strncat.c */
#include <unistd.h>

int *_strncat(char c)
{
    return write(1, &c, 1);
}

