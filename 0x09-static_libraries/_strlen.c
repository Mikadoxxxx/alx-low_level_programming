/* _strlen.c */
#include <unistd.h>

int _strlen(char c)
{
    return write(1, &c, 1);
}

