#include <stdio.h>

int fact(int n) {
	int fact = 1;

	for(int i = 1; i <= n; i++) {
		fact *= i;
	}

	return fact;
}

int main() {
	int n, r, nCr;

	printf("Enter value of n: ");
	scanf("%d", &n);
	printf("Enter value of r: ");
	scanf("%d", &r);

	nCr = fact(n) / (fact(r) * fact(n - r));
	printf("Value of %dC%d = %d\n", n, r, nCr);

	return 0;
}
