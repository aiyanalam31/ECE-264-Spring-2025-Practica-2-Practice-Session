#ifndef SEARCH_UNIT_TEST_H
#define SEARCH_UNIT_TEST_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

static inline int check_bool(bool expected, bool actual) {
    if (expected != actual) {
        printf("FAILED: expected %s, got %s\n", expected ? "true" : "false", actual ? "true" : "false");
        return 1;
    }
    return 0;
}

#endif
