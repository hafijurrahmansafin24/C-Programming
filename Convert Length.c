#include <stdio.h>

int main() {
    float cm;

    printf("Enter length in cm: ");
    scanf("%f", &cm);

    printf("Meters: %.2f m\n", cm / 100);
    printf("Kilometers: %.5f km\n", cm / 100000);


    return 0;
}
