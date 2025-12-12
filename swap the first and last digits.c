#include <stdio.h>

int main() {
    int num, first, last, div = 1;
    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;
    int temp = num;
    do {
        first = temp;
        if (temp >= 10) div *= 10;
        temp /= 10;
    } while (temp != 0);

    temp = num % div;
    temp /= 10;
    int swapped = last * div + temp * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);
    return 0;
}
