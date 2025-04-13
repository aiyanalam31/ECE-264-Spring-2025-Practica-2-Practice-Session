# Append a Node to a Linked List Recursively
## 1. Overview
In this problem, you will implement a recursive function to append a node to the end of a linked list.

## 2. Problem Description - append
Implement the following function:

``
Node* append(Node* head, const char* key, int value);
``

This function returns the head of a new list that contains all original nodes and one new node at the end with the provided key and value. If the input list is NULL, it returns a new list with just one node.

This must be implemented recursively.

## 3. Struct Definitions
```
typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;
```