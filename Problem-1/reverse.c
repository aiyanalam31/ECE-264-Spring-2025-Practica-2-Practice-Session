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
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* new_head = reverse_list(head->next);
    head->next->next = head;
    head->next = NULL;

    return new_head;
}
