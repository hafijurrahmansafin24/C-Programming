#include <stdio.h>

#define SIZE 8

int queue[SIZE];
int front = -1, rear = -1;

void enqueue() {
    int value;

    if ((rear + 1) % SIZE == front) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;

    rear = (rear + 1) % SIZE;
    queue[rear] = value;

    printf("Inserted: %d\n", value);
}

void dequeue() {

    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % SIZE;
}

void display() {

    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    int i = front;

    printf("Queue elements: ");

    while (1) {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main() {

    int choice;

    while (1) {

        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program Successfully End. Thank you!\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
