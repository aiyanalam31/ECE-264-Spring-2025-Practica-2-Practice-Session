/*
 * search.c
 *
 * Implements a recursive function to search for a key in a linked list.
 * 
 * Instructions:
 * - Do not change the Node struct.
 * - You must solve this recursively.
 * - Do not use loops.
 * - Return true if the key is found, false otherwise.
 * 
 * Tip:
 * Use strcmp to compare strings.
 */

 #include <string.h>
 #include "search.h"
 
 bool contains_key(Node* head, const char* target_key) {
    // Base case: if the list is empty, return false
    if (head == NULL) {
        return false; // Base case: reached the end of the list
    }

    // Check if the current node's key matches the target key
    if (strcmp(head->key, target_key) == 0) {
        return true; // Key found
    }

    // Recursively check the next node
    return contains_key(head->next, target_key);
 }
 