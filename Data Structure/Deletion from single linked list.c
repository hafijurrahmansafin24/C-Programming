#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int info;
    struct ListNode *link;
};

struct ListNode *start = NULL;

struct ListNode* getNode(int value) {
    struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->info = value;
    node->link = NULL;
    return node;
}

void insertNode(int value) {

    struct ListNode *newNode = getNode(value);

    if (start == NULL) {
        start = newNode;
    }
    else {
        struct ListNode *ptr = start;

        while (ptr->link != NULL)
            ptr = ptr->link;

        ptr->link = newNode;
    }
}

void removeFirst() {

    if (start == NULL) {
        printf("Underflow! List is empty.\n");
        return;
    }

    struct ListNode *temp = start;
    start = start->link;
    free(temp);

    printf("First element removed successfully.\n");
}

void removeLast() {

    if (start == NULL) {
        printf("Underflow! List is empty.\n");
        return;
    }

    if (start->link == NULL) {
        free(start);
        start = NULL;
        printf("Last element removed successfully.\n");
        return;
    }

    struct ListNode *prev = NULL;
    struct ListNode *curr = start;

    while (curr->link != NULL) {
        prev = curr;
        curr = curr->link;
    }

    prev->link = NULL;
    free(curr);

    printf("Last element removed successfully.\n");
}

void removeAtPos(int position) {

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (position == 1) {
        removeFirst();
        return;
    }

    struct ListNode *curr = start;
    struct ListNode *prev = NULL;

    for (int i = 1; i < position && curr != NULL; i++) {
        prev = curr;
        curr = curr->link;
    }

    if (curr == NULL) {
        printf("Invalid position!\n");
        return;
    }

    prev->link = curr->link;
    free(curr);

    printf("Node at position %d removed.\n", position);
}

void removeByKey(int key) {

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct ListNode *curr = start;
    struct ListNode *prev = NULL;

    while (curr != NULL && curr->info != key) {
        prev = curr;
        curr = curr->link;
    }

    if (curr == NULL) {
        printf("Value not found in list.\n");
        return;
    }

    if (prev == NULL) {
        start = curr->link;
    } else {
        prev->link = curr->link;
    }

    free(curr);

    printf("Node containing %d removed.\n", key);
}

void showList() {

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct ListNode *temp = start;

    printf("Updated List: ");
    while (temp != NULL) {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main() {

    int total, value, option, pos, key;

    printf("Enter total number of nodes: ");
    scanf("%d", &total);

    for (int i = 1; i <= total; i++) {
        printf("Input value for node %d: ", i);
        scanf("%d", &value);
        insertNode(value);
    }

    while (1) {

        showList();

        printf("\n--- Deletion Options ---\n");
        printf("1. Remove First\n");
        printf("2. Remove Last\n");
        printf("3. Remove by Position\n");
        printf("4. Remove by Value\n");
        printf("5. Exit\n");

        printf("Choose option: ");
        scanf("%d", &option);

        switch (option) {

            case 1:
                removeFirst();
                break;

            case 2:
                removeLast();
                break;

            case 3:
                printf("Enter position: ");
                scanf("%d", &pos);
                removeAtPos(pos);
                break;

            case 4:
                printf("Enter value: ");
                scanf("%d", &key);
                removeByKey(key);
                break;

            case 5:
                printf("Program terminated.\n");
                exit(0);

            default:
                printf("Invalid selection!\n");
        }
    }

    return 0;
}
