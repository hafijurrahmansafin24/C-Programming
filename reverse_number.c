#include <stdio.h>

int main() {
    int n, rev = 0, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        count = n % 10;
        rev = rev * 10 + count;
        n = n / 10;
    }

    printf("Reversed number: %d\n", rev);
    return 0;
}
