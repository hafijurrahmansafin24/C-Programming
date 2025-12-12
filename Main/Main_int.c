#include <stdio.h>>
#include <stdlib.h>

int main()
{
    int num1, num2, sum;
    printf("Enter number 1:");
    scanf("%d", &num1);

    printf("Enter number 2:");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum is %d", sum);
    return 0;
}
