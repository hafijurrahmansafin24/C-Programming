#include <stdio.h>

int main() {
    int n, i = 1, term = 1, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    do {
        sum += term;
        term = term * 10 + 1;
        i++;
    } while (i <= n);

    printf("Sum of series = %d\n", sum);
    return 0;
}
