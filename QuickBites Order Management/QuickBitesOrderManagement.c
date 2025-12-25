#include <stdio.h>
#include <string.h>

#define MAX_ORDERS 100

typedef struct {
	int orderID;
	char customerName[50];
	char foodItem[50];
	int quantity;
	float price;
	char deliveryAddress[100];
	char status[20];
} Order;

Order orders[MAX_ORDERS];
int orderCount = 0;

void AddOrder() {
	if (orderCount >= MAX_ORDERS) {
		printf("Order limit reached.\n");
		return;
	}
	printf("Enter Order ID: ");
	scanf("%d", &orders[orderCount].orderID);
	printf("Enter Customer Name: ");
	getchar();
	fgets(orders[orderCount].customerName, 50, stdin);
	orders[orderCount].customerName[strcspn(orders[orderCount].customerName, "\n")] = '\0';

	printf("Enter Food Item: ");
	fgets(orders[orderCount].foodItem, 50, stdin);
	orders[orderCount].foodItem[strcspn(orders[orderCount].foodItem, "\n")] = '\0';

	printf("Enter Quantity: ");
	scanf("%d", &orders[orderCount].quantity);
	printf("Enter Price: ");
	scanf("%f", &orders[orderCount].price);

	printf("Enter Delivery Address: ");
	getchar();
	fgets(orders[orderCount].deliveryAddress, 100, stdin);
	orders[orderCount].deliveryAddress[strcspn(orders[orderCount].deliveryAddress, "\n")] = '\0';

	printf("Enter Order Status: ");
	fgets(orders[orderCount].status, 20, stdin);
	orders[orderCount].status[strcspn(orders[orderCount].status, "\n")] = '\0';

	orderCount++;
	printf("Order added successfully!\n");
}

void UpdateOrder() {
	int id, found = 0;
	printf("Enter Order ID to update: ");
	scanf("%d", &id);
	for (int i = 0; i < orderCount; i++) {
		if (orders[i].orderID == id) {
			found = 1;
			printf("Enter new Quantity: ");
			scanf("%d", &orders[i].quantity);
			printf("Enter new Delivery Address: ");
			getchar();
			fgets(orders[i].deliveryAddress, 100, stdin);
			orders[i].deliveryAddress[strcspn(orders[i].deliveryAddress, "\n")] = '\0';
			printf("Enter new Status: ");
			fgets(orders[i].status, 20, stdin);
			orders[i].status[strcspn(orders[i].status, "\n")] = '\0';
			printf("Order updated successfully!\n");
			break;
		}
	}
	if (!found) {
		printf("Order ID not found.\n");
	}
}

void DeleteOrder() {
	int id, found = 0;
	printf("Enter Order ID to delete: ");
	scanf("%d", &id);
	for (int i = 0; i < orderCount; i++) {
		if (orders[i].orderID == id) {
			found = 1;
			for (int j = i; j < orderCount - 1; j++) {
				orders[j] = orders[j + 1];
			}
			orderCount--;
			printf("Order deleted successfully!\n");
			break;
		}
	}
	if (!found) {
		printf("Order ID not found.\n");
	}
}

void DisplayOrders() {
	if (orderCount == 0) {
		printf("No orders to display.\n");
		return;
	}
	for (int i = 0; i < orderCount; i++) {
		printf("\nOrder #%d\n", i + 1);
		printf("Order ID: %d\n", orders[i].orderID);
		printf("Customer Name: %s\n", orders[i].customerName);
		printf("Food Item: %s\n", orders[i].foodItem);
		printf("Quantity: %d\n", orders[i].quantity);
		printf("Price: %.2f\n", orders[i].price);
		printf("Delivery Address: %s\n", orders[i].deliveryAddress);
		printf("Status: %s\n", orders[i].status);
	}
}

int main() {
	int choice;
	do {
		printf("\n--- QuickBites Order Management ---\n");
		printf("1. Add New Order\n");
		printf("2. Update Existing Order\n");
		printf("3. Delete Order\n");
		printf("4. Display All Orders\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			AddOrder();
			break;
		case 2:
			UpdateOrder();
			break;
		case 3:
			DeleteOrder();
			break;
		case 4:
			DisplayOrders();
			break;
		case 5:
			printf("Thank you for using QuickBites Order Management System!\n");
			printf("Have a nice day!\n");
			break;
		default:
			printf("Invalid choice. Try again.\n");
		}
	} while (choice != 5);

	return 0;
}
