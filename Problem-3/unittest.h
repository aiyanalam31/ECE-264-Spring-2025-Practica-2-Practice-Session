#ifndef APPEND_UNIT_TEST_H
#define APPEND_UNIT_TEST_H

#include <stdbool.h>
#include <string.h>
#include <stdio.h>

static inline int check_string(const char* expected, const char* actual) {
    if (strcmp(expected, actual) != 0) {
        printf("FAILED: expected \"%s\", got \"%s\"\n", expected, actual);
        return 1;
    }
    return 0;
}

static inline int check_integer(int expected, int actual) {
    if (expected != actual) {
        printf("FAILED: expected %d, got %d\n", expected, actual);
        return 1;
    }
    return 0;
}

static inline int check_null(const void* actual) {
    if (actual != NULL) {
        printf("FAILED: %p should be NULL\n", actual);
        return 1;
    }
    return 0;
}

#endif
