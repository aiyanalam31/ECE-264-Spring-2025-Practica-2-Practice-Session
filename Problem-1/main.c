#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reverse.h"
#include "unittest.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

int test_reverse_basic() {
    int errors = 0;
    Node* a = create_node("A", 1);
    Node* b = create_node("B", 2);
    Node* c = create_node("C", 3);
    a->next = b;
    b->next = c;

    Node* head = reverse_list(a);

    errors += check_string("C", head->key);
    errors += check_integer(3, head->value);
    errors += check_string("B", head->next->key);
    errors += check_string("A", head->next->next->key);
    errors += check_null(head->next->next->next);

    // Free memory
    while (head) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return errors;
}

int main() {
    int total_errors = 0;

    printf("-- Starting test_reverse_basic --\n");
    int errors = test_reverse_basic();
    if (errors == 0) {
        printf("✅ Test PASSED\n\n");
    } else {
        printf("❌ Test FAILED with %d error(s)\n\n", errors);
    }

    total_errors += errors;

    return total_errors;
}
