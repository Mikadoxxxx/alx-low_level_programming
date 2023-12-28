/* *_memset.c */
#include <unistd.h>

int *_memset(char c)
{
    return write(1, &c, 1);
}
