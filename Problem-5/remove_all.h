#ifndef REMOVE_ALL_H
#define REMOVE_ALL_H

typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;

Node* remove_all(Node* head, const char* target_key);

#endif
