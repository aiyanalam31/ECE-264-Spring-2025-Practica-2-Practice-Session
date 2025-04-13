#ifndef REVERSE_UNIT_TEST_H
#define REVERSE_UNIT_TEST_H

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define check_not_null(actual) _check_not_null(actual, #actual)
#define check_null(actual) _check_null(actual, #actual)

static inline int _check_not_null(const void* actual, const char* name) {
    if (actual == NULL) {
        printf("FAILED: %s is NULL\n", name);
        return 1;
    }
    return 0;
}

static inline int _check_null(const void* actual, const char* name) {
    if (actual != NULL) {
        printf("FAILED: %s should be NULL\n", name);
        return 1;
    }
    return 0;
}

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

#endif
