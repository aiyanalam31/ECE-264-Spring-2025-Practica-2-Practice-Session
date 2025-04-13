#ifndef COUNT_H
#define COUNT_H

typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;

/**
 * Recursively counts the number of nodes in the list.
 * @param head The head of the list.
 * @return The number of nodes.
 */
int count_nodes(Node* head);

#endif
