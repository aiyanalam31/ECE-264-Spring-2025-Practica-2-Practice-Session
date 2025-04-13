/*
 * append.c
 *
 * Recursively appends a new node with a given key and value to the end of a linked list.
 * 
 * Instructions:
 * - Do not change the Node struct.
 * - You must solve this recursively.
 * - Do not use loops.
 * - If head is NULL, create a new node and return it.
 * - Make sure to copy the key properly using strncpy.
 */

 #include <stdlib.h>
 #include <string.h>
 #include "append.h"
 #include "unittest.h"
 
 Node* append(Node* head, const char* key, int value) {
     if (head == NULL) {
         Node* new_node = malloc(sizeof(Node));
         if (new_node == NULL) return NULL;
         strncpy(new_node->key, key, 99);
         new_node->key[99] = '\0';
         new_node->value = value;
         new_node->next = NULL;
         return new_node;
     }
 
     head->next = append(head->next, key, value);
     return head;
 }
 