#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "merge_sorted.h"
#include "unittest.h"

Node* create_node(const char* key, int value) {
    Node* node = malloc(sizeof(Node));
    strncpy(node->key, key, 99);
    node->key[99] = '\0';
    node->value = value;
    node->next = NULL;
    return node;
}

int test_merge_sorted() {
    int errors = 0;

    Node* a = create_node("Bruce", 1939);
    a->next = create_node("Jason", 1983);

    Node* b = create_node("Dick", 1940);
    b->next = create_node("Tim", 1989);

    Node* merged = merge_sorted(a, b);

    errors += check_string("Bruce", merged->key);
    errors += check_string("Dick", merged->next->key);
    errors += check_string("Jason", merged->next->next->key);
    errors += check_string("Tim", merged->next->next->next->key);

    while (merged) {
        Node* tmp = merged;
        merged = merged->next;
        free(tmp);
    }

    return errors;
}

int main() {
    int errors = test_merge_sorted();
    if (errors == 0) printf("✅ Test PASSED\n");
    else printf("❌ Test FAILED with %d error(s)\n", errors);
    return errors;
}
