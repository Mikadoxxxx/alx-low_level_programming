/* _isdigit.c */
#include <unistd.h>

int _isdigit(char c)
{
    return write(1, &c, 1);
}

