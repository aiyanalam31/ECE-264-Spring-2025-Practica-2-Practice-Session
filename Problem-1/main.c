#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reverse.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

void print_list(Node* head) {
    while (head != NULL) {
        printf("%s (%d) -> ", head->key, head->value);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = create_node("A", 1);
    head->next = create_node("B", 2);
    head->next->next = create_node("C", 3);

    printf("Original list:\n");
    print_list(head);

    Node* reversed = reverse_list(head);

    printf("Reversed list:\n");
    print_list(reversed);

    // Free memory
    while (reversed) {
        Node* temp = reversed;
        reversed = reversed->next;
        free(temp);
    }

    return 0;
}
