#include <stdio.h>
#include <string.h>

int bookID[50], issued[50], count=0;
char bookName[50][30], memberID[50][10];
int addBook(), viewBook(), issueReturnBook(), saveFile(), loadFile();

int main() {
	int choice;
	loadFile();

	printf("\n--- Library Menu ---\n");
	printf("1. Add Book\n");
	printf("2. View Books\n");
	printf("3. Search Book\n");
	printf("4. Delete Book\n");
	printf("5. Return Book\n");
	printf("6. Exit\n");

	while(1) {
		printf("Enter choice: ");
		scanf("%d", &choice);

		if(choice==1)
			addBook();
		else if(choice==2)
			viewBook();
		else if(choice==3) {
			int id, found=0;
			printf("Enter Book ID to Search: ");
			scanf("%d", &id);
			for(int i=0; i<count; i++) {
				if(bookID[i]==id) {
					printf("\nBook Found!\n");
					printf("ID: %d\n", bookID[i]);
					printf("Name: %s\n", bookName[i]);
					printf("Status: %s\n", issued[i]==0?"Available":"Issued");
					printf("Member: %s\n", memberID[i]);
					found=1;
					break;
				}
			}
			if(!found)
				printf("Book Not Found!\n");
		}
		else if(choice==4) {
			int id, found=0;
			printf("Enter Book ID to Delete: ");
			scanf("%d", &id);
			for(int i=0; i<count; i++) {
				if(bookID[i]==id) {
					for(int j=i; j<count-1; j++) {
						bookID[j]=bookID[j+1];
						strcpy(bookName[j], bookName[j+1]);
						issued[j]=issued[j+1];
						strcpy(memberID[j], memberID[j+1]);
					}
					count--;
					found=1;
					printf("Book Deleted Successfully!\n");
					break;
				}
			}
			if(!found)
				printf("Book Not Found!\n");
		}
		else if(choice==5)
			issueReturnBook();
		else if(choice==6) {
			saveFile();
			printf("Exiting...\n");
			break;
		}
		else
			printf("Invalid Choice!\n");
	}

	return 0;
}

int addBook() {
	printf("Enter Book ID: ");
	scanf("%d",&bookID[count]);
	printf("Enter Book Name: ");
	scanf(" %[^\n]", bookName[count]);
	issued[count]=0;
	strcpy(memberID[count],"None");
	count++;
	printf("Book Added Successfully!\n");
	return 1;
}

int viewBook() {
	if(count==0) {
		printf("No books found.\n");
		return 0;
	}
	printf("\n--- List of Books ---\n");
	for(int i=0; i<count; i++) {
		printf("ID: %d\n", bookID[i]);
		printf("Name: %s\n", bookName[i]);
		printf("Status: %s\n", issued[i]==0?"Available":"Issued");
		printf("Member: %s\n\n", memberID[i]);
	}
	return 1;
}

int issueReturnBook() {
	int id, found=0;
	printf("Enter Book ID to Return: ");
	scanf("%d",&id);
	for(int i=0; i<count; i++) {
		if(bookID[i]==id) {
			if(issued[i]==1) {
				issued[i]=0;
				strcpy(memberID[i],"None");
				printf("Book Returned Successfully!\n");
			} else {
				printf("Book is already available!\n");
			}
			found=1;
			break;
		}
	}
	if(!found)
		printf("Book Not Found!\n");
	return found;
}

int saveFile() {
	FILE *fp=fopen("library.txt","w");
	for(int i=0; i<count; i++)
		fprintf(fp,"%d %s %d %s\n", bookID[i], bookName[i], issued[i], memberID[i]);
	fclose(fp);
	return 1;
}

int loadFile() {
	FILE *fp=fopen("library.txt","r");
	if(fp==NULL)
	return 0;
	while(fscanf(fp,"%d %s %d %s",&bookID[count], bookName[count], &issued[count], memberID[count])!=EOF)
		count++;
	fclose(fp);
	return 1;
}
