/* _atoi.c */
#include <unistd.h>

int _atoi(char c)
{
    return write(1, &c, 1);
}
