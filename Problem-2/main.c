#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "search.h"
#include "unittest.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

int test_search_key() {
    int errors = 0;
    Node* head = create_node("Bruce", 1);
    head->next = create_node("Clark", 2);
    head->next->next = create_node("Diana", 3);

    errors += check_bool(true, contains_key(head, "Clark"));
    errors += check_bool(false, contains_key(head, "Barry"));

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

    printf("-- Starting test_search_key --\n");
    int errors = test_search_key();
    if (errors == 0) {
        printf("✅ Test PASSED\n\n");
    } else {
        printf("❌ Test FAILED with %d error(s)\n\n", errors);
    }

    total_errors += errors;

    return total_errors;
}
