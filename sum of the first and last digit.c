#include <stdio.h>

int main() {
    int num, first, last;
    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;
    int temp = num;
    do {
        first = temp;
        temp /= 10;
    } while (temp != 0);

    printf("Sum of first and last digit = %d\n", first + last);
    return 0;
}
