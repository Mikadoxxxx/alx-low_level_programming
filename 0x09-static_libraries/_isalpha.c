#include "main.h"
#include <unistd.h>

int _isalpha(int c) {
    return write(1, &c, 1);
}
