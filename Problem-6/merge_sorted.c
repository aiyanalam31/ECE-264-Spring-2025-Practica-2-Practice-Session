/*
 * merge_sorted.c - recursively merge two sorted linked lists
 */

#include <stdlib.h>
#include <string.h>
#include "merge_sorted.h"

Node* merge_sorted(Node* a, Node* b) {
    // Base case: if one of the lists is empty, return the other list
    if (a == NULL) {
        return b;
    }
    if (b == NULL) {
        return a;
    }

    Node* result;

    // Compare the keys of the two nodes and choose the smaller one
    if (strcmp(a->key, b->key) < 0) {
        result = a;
        result->next = merge_sorted(a->next, b);
    } else {
        result = b;
        result->next = merge_sorted(a, b->next);
    }

    return result;
}
