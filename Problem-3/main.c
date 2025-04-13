#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "append.h"
#include "unittest.h"

int test_append_basic() {
    int errors = 0;

    Node* head = NULL;
    head = append(head, "Bruce", 1939);
    head = append(head, "Dick", 1940);
    head = append(head, "Jason", 1983);

    errors += check_string("Bruce", head->key);
    errors += check_string("Dick", head->next->key);
    errors += check_string("Jason", head->next->next->key);
    errors += check_null(head->next->next->next);

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

    printf("-- Starting test_append_basic --\n");
    int errors = test_append_basic();
    if (errors == 0) {
        printf("✅ Test PASSED\n\n");
    } else {
        printf("❌ Test FAILED with %d error(s)\n\n", errors);
    }

    total_errors += errors;

    return total_errors;
}
