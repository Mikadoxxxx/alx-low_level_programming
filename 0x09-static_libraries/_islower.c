#include "main.h"
#include <unistd.h>

int _islower(int c) {
    return write(1, &c, 1);
}

