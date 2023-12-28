/* *_strcat.c */
#include <unistd.h>

int *_strcat(char c)
{
    return write(1, &c, 1);
}
