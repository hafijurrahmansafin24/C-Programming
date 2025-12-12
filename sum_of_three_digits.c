#include <stdio.h>
int main()
{
    int num, n1, n2, n3, temp;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    n3 = num % 10;
    temp = num / 10;
    n2 = temp % 10;
    n1 = temp / 10;

    printf("Sum is: %d\n", n1 + n2 + n3);
    return 0;
}
