#ifndef COUNT_UNIT_TEST_H
#define COUNT_UNIT_TEST_H

#include <stdio.h>

static inline int check_integer(int expected, int actual) {
    if (expected != actual) {
        printf("FAILED: expected %d, got %d\n", expected, actual);
        return 1;
    }
    return 0;
}

#endif
