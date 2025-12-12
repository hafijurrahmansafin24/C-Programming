#include <stdio.h>

int main() {
    float s, a;

    printf("Enter length of one side: ");
    scanf("%f", &s);

    a = s * s;
    printf("Area of Square: %.2f\n", a);

    return 0;
}
