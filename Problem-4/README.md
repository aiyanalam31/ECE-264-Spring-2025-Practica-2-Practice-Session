# Count the Number of Nodes in a Linked List Recursively
## 1. Overview
This task involves writing a recursive function that counts the number of nodes in a singly linked list. This will strengthen your understanding of base cases and recursive calls in data structures.

## 2. Problem Description - count_nodes
Implement the function:

``
int count_nodes(Node* head);
``

The function returns the number of nodes in the list starting from head. If the list is empty (head == NULL), return 0. Your implementation must be recursive.

## 3. Struct Definitions
```
typedef struct node {
    char key[100];
    int value;
    struct node* next;
} Node;
```