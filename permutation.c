#include <stdio.h>

int fact(int n) {
	int fact = 1;

	for(int i = 1; i <= n; i++) {
		fact *= i;
	}

	return fact;
}

int p(int n, int r) {
	return fact(n) / fact(n - r);
}

int main(){
	int n, r;

	printf("Enter value of n: ");
	scanf("%d", &n);
	printf("Enter value of r: ");
	scanf("%d", &r);

	if(r > n){
		printf("r cannot be greater than n!\n");
	}else {
		printf("Permutation = %d\n", p(n, r));
	}

	return 0;
}
