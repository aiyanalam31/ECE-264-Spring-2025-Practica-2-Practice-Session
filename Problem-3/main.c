#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "append.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

void print_list(Node* head) {
    while (head) {
        printf("%s (%d) -> ", head->key, head->value);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    head = append(head, "Bruce", 1939);
    head = append(head, "Dick", 1940);
    head = append(head, "Jason", 1983);

    print_list(head);

    // Free memory
    while (head) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
