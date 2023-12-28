/* *_strpbrk.c */
#include <unistd.h>

int *_strpbrk(char c)
{
    return write(1, &c, 1);
}
