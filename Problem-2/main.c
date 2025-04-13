#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "search.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

int main() {
    Node* head = create_node("Bruce", 1);
    head->next = create_node("Clark", 2);
    head->next->next = create_node("Diana", 3);

    printf("Searching for 'Clark': %s\n", contains_key(head, "Clark") ? "FOUND" : "NOT FOUND");
    printf("Searching for 'Barry': %s\n", contains_key(head, "Barry") ? "FOUND" : "NOT FOUND");

    // Free memory
    while (head) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
