#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};
    printf("Enter any number: ");
    scanf("%d", &num);

    int temp = num;

    do {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    } while (num != 0);

    printf("\nFrequency of each digit in %d:\n", temp);
    for (int i = 0; i < 10; i++) {
        printf("Digit %d = %d times\n", i, freq[i]);
    }

    return 0;
}
