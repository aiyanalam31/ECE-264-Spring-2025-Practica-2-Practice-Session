#ifndef MERGE_SORTED_H
#define MERGE_SORTED_H

typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;

Node* merge_sorted(Node* a, Node* b);

#endif
