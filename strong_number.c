#include <stdio.h>

int fact(int n) {
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f = f * i;
	}
	return f;
}

int main() {
	int num, temp, rem, sum = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	temp = num;

	while (temp > 0) {
		rem = temp % 10;
		sum = sum + fact(rem);
		temp = temp / 10;
	}

	if (sum == num) {
		printf("%d is a Strong number.\n", num);
	} else {
		printf("%d is not a Strong number.\n", num);
	}

	return 0;
}
