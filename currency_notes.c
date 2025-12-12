#include <stdio.h>

int main() {
    int i, amount, total;
    int den[] = {100, 50, 20, 10, 5, 2, 1};

    printf("Enter an amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 7; i++) {
        total = amount / den[i];
        printf("%d notes of %d required, remains: %d\n", total, den[i], amount % den[i]);
        amount %= den[i];
    }

    return 0;
}
