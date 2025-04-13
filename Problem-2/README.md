# Recursively Search for a Key in a Linked List
## 1. Overview
In this task, you will write a recursive function that searches for a string key in a singly linked list and returns whether it exists.

## 2 Problem Description - contains_key
Implement this function:

`
bool contains_key(Node* head, const char* target_key);
`

This function returns true if target_key is found in the list and false otherwise. It should be implemented recursively.

Return false if the list is NULL.

## 3 Struct Definitions
```
typedef struct node { 
    char key[100];
    int value;
    struct node* next;
} Node;
```