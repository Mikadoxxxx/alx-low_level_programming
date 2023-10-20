/* *_memcpy.c */
#include <unistd.h>

int *_memcpy(char c)
{
    return write(1, &c, 1);
}
