#include <stdio.h>

int main() {
    float c;

    printf("Enter temperature in Celsius: ");

    scanf("%f", &c);
    printf("Fahrenheit: %.2f\n", (c * 9/5) + 32);


    return 0;
}
