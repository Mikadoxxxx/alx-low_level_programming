#include "main.h"
#include <unistd.h>

int _isupper(int c) {
    return write(1, &c, 1);
}

