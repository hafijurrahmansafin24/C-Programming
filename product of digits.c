#include <stdio.h>

int main() {
    int num, digit, product = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    int temp = (num == 0) ? 0 : num;
    do {
        digit = temp % 10;
        product = product * (digit == 0 ? 1 : digit);
        temp = temp / 10;
    } while (temp != 0);
    printf("Product of digits = %d\n", product);

    return 0;
}
