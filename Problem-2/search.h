#ifndef SEARCH_H
#define SEARCH_H

#include <stdbool.h>

typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;

/**
 * Recursively checks if the key exists in the linked list.
 * @param head The head of the linked list.
 * @param target_key The key to search for.
 * @return true if found, false otherwise.
 */
bool contains_key(Node* head, const char* target_key);

#endif
