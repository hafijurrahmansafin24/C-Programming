#include <stdio.h>

int main() {
	int n, a[100], count = 0;
	int printed[100], printedCount = 0;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter elements: ");
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("Duplicate elements: ");
	for(int i = 0; i < n; i++) {
		int isDuplicate = 0;

		int alreadyPrinted = 0;
		for(int k = 0; k < printedCount; k++) {
			if(a[i] == printed[k]) {
				alreadyPrinted = 1;
				break;
			}
		}
		if(alreadyPrinted) continue;


		for(int j = i + 1; j < n; j++) {
			if(a[i] == a[j]) {
				isDuplicate = 1;
				break;
			}
		}

		if(isDuplicate) {
			printf("%d ", a[i]);
			printed[printedCount++] = a[i];
			count++;
		}
	}
	printf("\nTotal number of duplicate elements = %d\n", count);

	return 0;
}
