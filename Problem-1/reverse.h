#ifndef REVERSE_H
#define REVERSE_H

typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;

/**
 * Recursively reverses the linked list.
 * @param head The head of the linked list.
 * @return The new head of the reversed list.
 */
Node* reverse_list(Node* head);

#endif
