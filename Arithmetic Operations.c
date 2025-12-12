#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum: %.2f\n", a + b);
    printf("Sub: %.2f\n", a - b);
    printf("Multi: %.2f\n", a * b);

    if(b != 0)
        printf("Div: %.2f\n", a / b);

    else
        printf("Zero not allowed\n");


    return 0;
}
