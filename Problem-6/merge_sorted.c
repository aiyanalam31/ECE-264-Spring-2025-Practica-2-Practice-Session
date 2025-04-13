/*
 * merge_sorted.c - recursively merge two sorted linked lists
 */

#include <stdlib.h>
#include <string.h>
#include "merge_sorted.h"

Node* merge_sorted(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;

    if (a->value < b->value) {
        a->next = merge_sorted(a->next, b);
        return a;
    } else {
        b->next = merge_sorted(a, b->next);
        return b;
    }
}
