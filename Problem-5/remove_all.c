/*
 * remove_all.c - recursively remove all nodes with matching key
 */

#include <stdlib.h>
#include <string.h>
#include "remove_all.h"

Node* remove_all(Node* head, const char* target_key) {
    if (head == NULL) return NULL;

    if (strcmp(head->key, target_key) == 0) {
        Node* next = head->next;
        free(head);
        return remove_all(next, target_key);
    }

    head->next = remove_all(head->next, target_key);
    return head;
}
