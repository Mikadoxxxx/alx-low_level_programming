/* *_strncpy.c */
#include <unistd.h>

int *_strncpy(char c)
{
    return write(1, &c, 1);
}

