/*
 * count.c
 *
 * Recursively counts the number of nodes in a linked list.
 * 
 * Instructions:
 * - Do not change the Node struct.
 * - You must solve this recursively.
 * - Do not use loops.
 * - If the list is empty, return 0.
 * - Otherwise, return 1 + the count of the rest of the list.
 */

 #include "count.h"
 #include "unittest.h"

 int count_nodes(Node* head) {
        // Base case: if the list is empty, return 0
        if (head == NULL) {
            return 0; // Base case: reached the end of the list
        }
    
        // Recursive case: count the current node and the rest of the list
        return 1 + count_nodes(head->next);
 }
 