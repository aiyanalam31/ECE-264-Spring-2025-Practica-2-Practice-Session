#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "count.h"
#include "unittest.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

int test_count_nodes() {
    int errors = 0;

    Node* head = NULL;
    errors += check_integer(0, count_nodes(head));

    head = create_node("A", 1);
    head->next = create_node("B", 2);
    head->next->next = create_node("C", 3);

    errors += check_integer(3, count_nodes(head));

    // Free
    while (head) {
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }

    return errors;
}

int main() {
    int total_errors = 0;

    printf("-- Starting test_count_nodes --\n");
    int errors = test_count_nodes();
    if (errors == 0) {
        printf("✅ Test PASSED\n\n");
    } else {
        printf("❌ Test FAILED with %d error(s)\n\n", errors);
    }

    total_errors += errors;

    return total_errors;
}
