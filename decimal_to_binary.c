#include <stdio.h>

void decToBin(int n) {
	int bin[32], i = 0;
	while (n > 0) {
		bin[i++] = n % 2;
		n /= 2;    // divide by 2
	}
	for (int j = i - 1; j >= 0; j--) { // print in reverse
		printf("%d", bin[j]);
	}
}

int main() {
	int num;                 // user input

	printf("Enter a Decimal number: ");
	scanf("%d", &num);       // read number
	printf("Binary number: ");
	decToBin(num);    // call function

	return 0;
}
