/* _strspn.c */
#include <unistd.h>

int _strspn(char c)
{
    return write(1, &c, 1);
}

