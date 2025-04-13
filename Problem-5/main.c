#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "remove_all.h"
#include "unittest.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

int test_remove_all() {
    int errors = 0;
    Node* head = create_node("A", 1);
    head->next = create_node("B", 2);
    head->next->next = create_node("A", 3);
    head->next->next->next = create_node("C", 4);

    head = remove_all(head, "A");

    errors += check_string("B", head->key);
    errors += check_string("C", head->next->key);
    errors += check_null(head->next->next);

    while (head) {
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }

    return errors;
}

int main() {
    int errors = test_remove_all();
    if (errors == 0) printf("✅ Test PASSED\n");
    else printf("❌ Test FAILED with %d error(s)\n", errors);
    return errors;
}
