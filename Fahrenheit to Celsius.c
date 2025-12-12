#include <stdio.h>

int main() {
    float f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Celsius: %.2f\n", (f - 32) * 5/9);


    return 0;
}
