/* _abs.c */
#include <unistd.h>

int _abs(char c)
{
    return write(1, &c, 1);
}

