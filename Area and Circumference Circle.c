#include <stdio.h>

int main() {
    float a, PI = 3.1416;

    printf("Enter radius: ");
    scanf("%f", &a);

    printf("Area: %.2f\n", PI * a * a);
    printf("Circumference: %.2f\n", 2 * PI * a);

    return 0;
}
