/* _strcmp.c */
#include <unistd.h>

int _strcmp(char c)
{
    return write(1, &c, 1);
}
