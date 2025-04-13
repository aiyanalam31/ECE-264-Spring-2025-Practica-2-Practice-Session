#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "count.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

int main() {
    Node* head = NULL;
    printf("Node count (empty list): %d\n", count_nodes(head));

    head = create_node("A", 1);
    head->next = create_node("B", 2);
    head->next->next = create_node("C", 3);

    printf("Node count (3 nodes): %d\n", count_nodes(head));

    // Free memory
    while (head) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
