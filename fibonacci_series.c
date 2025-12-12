#include <stdio.h>

int main() {
    int n, j = 0, k = 1, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series: ", n);

    for (i = j; i <= n;) {
        printf("%d ", i);
        i = j + k;
        j = k;
        k = i;
    }

    return 0;
}
