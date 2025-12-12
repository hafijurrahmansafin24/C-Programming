#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, total;
    float avg;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    total = num1 + num2 + num3 + num4 + num5;
    avg = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    return 0;
}
