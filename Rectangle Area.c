#include <stdio.h>

int main() {
    float h, w, a;

    printf("Enter height: ");
    scanf("%f", &h);
    printf("Enter width: ");
    scanf("%f", &w);

    a = h * w;
    printf("Area of Rectangle: %.2f\n", a);

    return 0;
}
