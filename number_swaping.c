#include <stdio.h>

void swap (int *addr1, int *addr2) {
    int temp;
    temp = *addr1;
    *addr1 = *addr2;
    *addr2 = temp;
}

int main()
{
    int x = 5, y = 10;
    printf("Before swaping: x = %d, y = %d\n", x, y);

    swap (&x, &y);
    printf("After swaping: x = %d, y = %d", x, y);

    return 0;
}
