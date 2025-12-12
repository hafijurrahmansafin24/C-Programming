#include <stdio.h>

int fact(int n) {
	int fact = 1;
	for(int i = 1; i <= n; i++) {
		fact *= i;
	}
	return fact;
}

int com(int n, int r) {
	return fact(n) / (fact(r) * fact(n - r));
}

int pas(int rows) {
	for(int i = 0; i < rows; i++) {
		for(int s = 0; s < rows - i; s++){
			printf(" ");
		}
		for(int j = 0; j <= i; j++){
			printf("%d ", com(i, j));
		}
		printf("\n");
	}
}

int main() {
	int rows;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	pas(rows);

	return 0;
}
