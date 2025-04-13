#ifndef MERGE_SORTED_UNIT_TEST_H
#define MERGE_SORTED_UNIT_TEST_H

#include <string.h>
#include <stdio.h>

static inline int check_string(const char* expected, const char* actual) {
    if (strcmp(expected, actual) != 0) {
        printf("FAILED: expected "%s", got "%s"\n", expected, actual);
        return 1;
    }
    return 0;
}

#endif
