#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, sum;
    printf("Enter number 1:");
    scanf("%lf", &num1);

    printf("Enter number 2:");
    scanf("%lf", &num2);

    sum = num1 + num2;
    printf("The sum is %lf", sum);
    return 0;
}
