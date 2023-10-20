/* _isalpha.c */
#include <unistd.h>

int _isalpha(char c)
{
    return write(1, &c, 1);
}
