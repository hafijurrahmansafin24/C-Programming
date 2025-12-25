#include <stdio.h>
#include <string.h>

int bookID[50];
int issued[50];

char bookName[50][30];
char authorName[50][30];
char memberID[50][10];

int count = 0;

int addBook();
int viewBook();
int issueReturnBook();
int saveFile();
int loadFile();

int main()
{
	int choice;

	loadFile();

	while (1)
	{
		printf("\n--- Library Menu ---\n");
		printf("1. Add Book\n");
		printf("2. View Books\n");
		printf("3. Search Book\n");
		printf("4. Delete Book\n");
		printf("5. Issue / Return Book\n");
		printf("6. Exit\n");

		printf("Enter choice: ");
		if (scanf("%d", &choice) != 1) {
			printf("Invalid input! Please enter a number.\n");
			while(getchar() != '\n');
			continue;
		}

		switch (choice)
		{
		case 1:
			addBook();
			break;
		case 2:
			viewBook();
			break;
		case 3:
		{
			int id, found = 0;
			printf("Enter Book ID to Search: ");
			scanf("%d", &id);

			for (int i = 0; i < count; i++)
			{
				if (bookID[i] == id)
				{
					printf("\nBook Found!\n");
					printf("ID: %d\n", bookID[i]);
					printf("Name: %s\n", bookName[i]);
					printf("Author: %s\n", authorName[i]);
					printf("Status: %s\n", issued[i] == 0 ? "Available" : "Issued");
					printf("Member: %s\n", memberID[i]);
					found = 1;
					break;
				}
			}

			if (!found)
			{
				printf("Book Not Found!\n");
			}
			break;
		}
		case 4:
		{
			int id, found = 0;
			printf("Enter Book ID to Delete: ");
			scanf("%d", &id);

			for (int i = 0; i < count; i++)
			{
				if (bookID[i] == id)
				{
					for (int j = i; j < count - 1; j++)
					{
						bookID[j] = bookID[j + 1];
						strcpy(bookName[j], bookName[j + 1]);
						strcpy(authorName[j], authorName[j + 1]);
						issued[j] = issued[j + 1];
						strcpy(memberID[j], memberID[j + 1]);
					}
					count--;
					found = 1;
					printf("Book Deleted Successfully!\n");
					break;
				}
			}

			if (!found)
			{
				printf("Book Not Found!\n");
			}
			break;
		}
		case 5:
			issueReturnBook();
			break;
		case 6:
			saveFile();
			printf("Exiting...\n");
			return 0;
		default:
			printf("Invalid Choice!\n");
		}
	}

	return 0;
}

int addBook()
{
	if (count >= 50)
	{
		printf("Library Full! Cannot add more books.\n");
		return 0;
	}

	printf("Enter Book ID: ");
	scanf("%d", &bookID[count]);
	getchar();

	printf("Enter Book Name: ");
	fgets(bookName[count], sizeof(bookName[count]), stdin);
	bookName[count][strcspn(bookName[count], "\n")] = 0;

	printf("Enter Author Name: ");
	fgets(authorName[count], sizeof(authorName[count]), stdin);
	authorName[count][strcspn(authorName[count], "\n")] = 0;

	issued[count] = 0;
	strcpy(memberID[count], "None");

	count++;

	printf("Book Added Successfully!\n");
	return 1;
}

int viewBook()
{
	if (count == 0)
	{
		printf("No books found.\n");
		return 0;
	}

	printf("\n--- List of Books ---\n");

	for (int i = 0; i < count; i++)
	{
		printf("ID: %d\n", bookID[i]);
		printf("Name: %s\n", bookName[i]);
		printf("Author: %s\n", authorName[i]);
		printf("Status: %s\n", issued[i] == 0 ? "Available" : "Issued");
		printf("Member: %s\n\n", memberID[i]);
	}

	return 1;
}

int issueReturnBook()
{
	int id, found = 0;

	printf("Enter Book ID: ");
	scanf("%d", &id);

	for (int i = 0; i < count; i++)
	{
		if (bookID[i] == id)
		{
			if (issued[i] == 0)
			{
				printf("Enter Member ID: ");
				scanf("%s", memberID[i]);
				issued[i] = 1;
				printf("Book Issued Successfully!\n");
			}
			else
			{
				issued[i] = 0;
				strcpy(memberID[i], "None");
				printf("Book Returned Successfully!\n");
			}
			found = 1;
			break;
		}
	}

	if (!found)
	{
		printf("Book Not Found!\n");
	}

	return found;
}

int saveFile()
{
	FILE *fp = fopen("library.txt", "w");
	if (!fp) return 0;

	for (int i = 0; i < count; i++)
	{
		fprintf(fp, "%d|%s|%s|%d|%s\n",
		        bookID[i],
		        bookName[i],
		        authorName[i],
		        issued[i],
		        memberID[i]);
	}

	fclose(fp);
	return 1;
}

int loadFile()
{
	FILE *fp = fopen("library.txt", "r");
	if (!fp) return 0;

	char line[200];
	while (fgets(line, sizeof(line), fp))
	{
		sscanf(line, "%d|%29[^|]|%29[^|]|%d|%9[^\n]",
		       &bookID[count],
		       bookName[count],
		       authorName[count],
		       &issued[count],
		       memberID[count]);
		count++;
	}

	fclose(fp);
	return 1;
}
