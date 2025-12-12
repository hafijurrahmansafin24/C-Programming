#include <stdio.h>

int main() {
    int i = 1;

    printf("All Numbers from 1 to 100:\n");

    do {
        printf("%d ", i);
        i++;
    } while(i <= 100);

    return 0;
}
