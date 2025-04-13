# Reverse a Linked List Recursively
## 1 Overview
In this problem, you will write a recursive function to reverse a singly linked list. Each node contains a key (a string) and a value (an integer). This exercise is intended to help you practice recursive pointer manipulation in linked data structures.

## 2 Problem Description - reverse_list
You are to implement the function:

``
Node* reverse_list(Node* head);
``

This function takes the head of a singly linked list and returns the head of a new list where all elements are in reverse order. Your solution must be implemented recursively.

If the input list is NULL, return NULL. You should not modify the values within nodes—only their next pointers should be changed to reverse the list.

## 3 Struct Definitions

```
typedef struct node {

    char key[100];
    int value;
    struct node* next;
    
} Node;
```

