#include <stdio.h>

int main() {
    int i = 2;

    printf("All even numbers 1 to 100: \n");

    do {
        printf("%d ", i);
        i += 2;
    } while (i <= 100);
    return 0;
}
