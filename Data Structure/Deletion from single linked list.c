#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

int main() {
	struct node *head = NULL, *temp, *newNode, *prev;
	int n, del;

	printf("Enter number of nodes: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		newNode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d", &newNode -> data);
		newNode->next = NULL;

		if(head == NULL)
			head = newNode;
		else {
			temp = head;
			while(temp -> next != NULL)
				temp = temp -> next;
			temp -> next = newNode;
		}
	}

	printf("Enter value to delete: ");
	scanf("%d", &del);

	temp = head;
	prev = NULL;

	if(temp != NULL && temp -> data == del) {
		head = temp -> next;
		free(temp);
	} else {
		while(temp != NULL && temp -> data != del) {
			prev = temp;
			temp = temp->next;
		}
		if(temp != NULL) {
			prev -> next = temp -> next;
			free(temp);
		}
	}

	printf("Updated List:\n");
	temp = head;
	while(temp != NULL) {
		printf("%d ", temp -> data);
		temp = temp->next;
	}

	return 0;
}
