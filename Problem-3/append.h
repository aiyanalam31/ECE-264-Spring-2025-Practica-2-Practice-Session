#ifndef APPEND_H
#define APPEND_H

typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;

/**
 * Recursively appends a new node with the given key and value to the list.
 * @param head The head of the list.
 * @param key The key for the new node.
 * @param value The value for the new node.
 * @return The head of the new list.
 */
Node* append(Node* head, const char* key, int value);

#endif
