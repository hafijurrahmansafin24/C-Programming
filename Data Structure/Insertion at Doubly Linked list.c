#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* prev;
	struct node* next;
};

int main() {
	struct node *head = NULL, *temp, *newNode;
	int n;

	printf("Enter number of nodes: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		newNode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newNode -> data);
		newNode -> prev = NULL;
		newNode -> next = NULL;

		if(head == NULL) {
			head = newNode;
		}else {
			temp = head;
			while(temp -> next != NULL)
				temp = temp -> next;
			temp -> next = newNode;
			newNode -> prev = temp;
		}
	}

	printf("Doubly Linked List:\n");
	temp = head;
	while(temp != NULL) {
		printf("%d ", temp -> data);
		temp = temp -> next;
	}

	return 0;
}
