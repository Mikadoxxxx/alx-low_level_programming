/* _islower.c */
#include <unistd.h>

int _islower(char c)
{
    return write(1, &c, 1);
}
