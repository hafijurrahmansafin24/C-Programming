#include <stdio.h>
#include <string.h>

#define MAX 30

struct Menu {
    char name[30];
    int price;
};

struct Menu menu[] = {
    {"Burger",150}, {"Pizza",300}, {"Pasta",200},
    {"Sandwich",120}, {"Coffee",80},
    {"Chicken Fries",100}, {"Juice",90},
    {"Fried Chicken",250}, {"French Fries",110},
    {"Soft Drink",60}, {"Ice Cream",130},
    {"Hot Dog",140}, {"Noodles",180},
    {"Shawarma",220}, {"Milkshake",160}
};

int menuSize = 15;

int queue[MAX], front = -1, rear = -1;
int stack[MAX], top = -1;
int orderItems[MAX];
int orderID = 0;


void enqueue(int id) {
    if(rear == MAX-1) {
        printf("Queue Full!\n");
        return;
    }
    if(front == -1) front = 0;

    queue[++rear] = id;
}

int dequeue() {
    if(front == -1 || front > rear) return -1;
    return queue[front++];
}


void push(int id) {
    if(top == MAX-1) return;
    stack[++top] = id;
}

int pop() {
    if(top == -1) return -1;
    return stack[top--];
}

void removeByID(int id) {
    for(int i = front; i <= rear; i++) {
        if(queue[i] == id) {
            for(int j = i; j < rear; j++) {
                queue[j] = queue[j+1];
            }
            rear--;
            break;
        }
    }
}

void showMenu() {
    printf("\n------ MENU ------\n");
    for(int i=0; i<menuSize; i++) {
        printf("%d. %s - %d TK\n", i, menu[i].name, menu[i].price);
    }
}

void showOrders() {
    printf("\n--- All Orders ---\n");

    if(front == -1 || front > rear) {
        printf("No orders.\n");
        return;
    }

    for(int i = front; i <= rear; i++) {
        int id = queue[i];
        printf("%s\n", menu[orderItems[id]].name);
    }
}

int main() {
    int choice, item, n;

    printf("=== Restaurant Management System ===\n");

    while(1) {
        printf("\n1. Show Menu\n");
        printf("2. Take Multiple Orders\n");
        printf("3. Serve Order\n");
        printf("4. Cancel Last Order\n");
        printf("5. Show Orders\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {

        case 1:
            showMenu();
            break;

        case 2:
            printf("How many items you want to order: ");
            scanf("%d",&n);

            for(int i=0; i<n; i++) {
                showMenu();
                printf("Select item: ");
                scanf("%d",&item);

                if(item >= 0 && item < menuSize) {
                    int id = orderID++;

                    orderItems[id] = item;

                    enqueue(id);
                    push(id);

                    printf("Added: %s\n", menu[item].name);
                } else {
                    printf("Invalid item!\n");
                }
            }
            break;

        case 3: {
            int id = dequeue();
            if(id != -1) {
                printf("Served: %s\n", menu[orderItems[id]].name);
            } else {
                printf("No orders to serve.\n");
            }
            break;
        }

        case 4: {
            int id = pop();
            if(id != -1) {
                removeByID(id);
                printf("Cancelled: %s\n", menu[orderItems[id]].name);
            } else {
                printf("No order to cancel.\n");
            }
            break;
        }

        case 5:
            showOrders();
            break;

        case 6:
            printf("Thank You for your order and vist again😊 !\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
