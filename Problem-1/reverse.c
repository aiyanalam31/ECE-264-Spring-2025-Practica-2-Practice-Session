/*
 * reverse.c
 *
 * Implements a recursive function to reverse a singly linked list.
 * 
 * Instructions:
 * - Do not change the Node struct.
 * - You must solve this recursively.
 * - You are not allowed to use loops.
 * - You may not use any global or static variables.
 * 
 * Example:
 * Input list: "A" -> "B" -> "C" -> NULL
 * Output list: "C" -> "B" -> "A" -> NULL
 */

#include <stdlib.h>
#include <string.h>
#include "reverse.h"

Node* reverse_list(Node* head) {
    // Base case: if the list is empty or has only one node, return it as is
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursive case: reverse the rest of the list
    Node* new_head = reverse_list(head->next);

    // Link the current node to the end of the reversed list
    head->next->next = head;
    head->next = NULL;

    return new_head;
}
