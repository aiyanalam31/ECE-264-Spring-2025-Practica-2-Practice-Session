/*
 * remove_all.c - recursively remove all nodes with matching key
 */

#include <stdlib.h>
#include <string.h>
#include "remove_all.h"

Node* remove_all(Node* head, const char* target_key) {
    // Base case: if the list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    // Recursively remove nodes from the rest of the list
    head->next = remove_all(head->next, target_key);

    // Check if the current node's key matches the target key
    if (strcmp(head->key, target_key) == 0) {
        // If it matches, free the current node and return the next node
        free(head);
        return head->next; // Return the next node, effectively removing the current one
    }

    // If it doesn't match, return the current node
    return head;
}