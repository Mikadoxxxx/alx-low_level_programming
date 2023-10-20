/* *_strchr.c */
#include <unistd.h>

int *_strchr(char c)
{
    return write(1, &c, 1);
}
