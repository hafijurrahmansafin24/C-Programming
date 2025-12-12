#include <stdio.h>
#include <math.h>

int main() {
	int n, a[100];          // number of elements and array
	float mean, median, sd = 0, sum = 0; // mean, median, std dev, sum

	printf("Enter number of elements: ");
	scanf("%d", &n);        // input n

	printf("Enter elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);       // input elements
		sum += a[i];             // add to sum
	}
	mean = sum / n;         // calculate mean

	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	if(n % 2 == 0)
		median = (a[n/2 - 1] + a[n/2]) / 2.0;   // median
	else
		median = a[n/2];

	for(int i = 0; i < n; i++)
		sd += pow(a[i] - mean, 2);   // standard deviation
	sd = sqrt(sd / n);

	printf("Mean = %.2f\n", mean);
	printf("Median = %.2f\n", median);
	printf("Standard Deviation = %.2f\n", sd);

	return 0;
}
