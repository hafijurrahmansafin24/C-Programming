#include <stdio.h>

int main() {
	int n, a[100], i = 0;

	printf("Enter a decimal number: ");
	scanf("%d", &n);               // input decimal number

	// convert decimal to binary
	while(n > 0) {
		a[i] = n % 2;              // store remainder (binary digit)
		n = n / 2;                 // divide n by 2
		i++;                        // move to next index
	}

	printf("Binary = ");
	for(int j = i-1; j >= 0; j--)  // print array in reverse
		printf("%d", a[j]);

	return 0;
}
