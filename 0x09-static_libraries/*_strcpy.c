/* *_strcpy.c */
#include <unistd.h>

int *_strcpy(char c)
{
    return write(1, &c, 1);
}

