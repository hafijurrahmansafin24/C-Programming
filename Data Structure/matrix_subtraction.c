#include<stdio.h>

int main()
{
	int a[5][5], b[5][5], sub[5][5];
	int row, col;

	printf("Enter number of rows: ");
	scanf("%d", &row);

	printf("Enter number of column: ");
	scanf("%d", &col);

	printf("Enter first matrix:\n");
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter second matrix:\n");
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			sub[i][j] = a[i][j] - b[i][j];
		}
	}

	printf("Subtraction of two matrices:\n");
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			printf("%d\t", sub[i][j]);
		}
		printf("\n");
	}

	return 0;
}
