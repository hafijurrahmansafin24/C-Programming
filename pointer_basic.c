#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;

    printf("a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("value using pointer = %d\n", *p);

    return 0;
}
