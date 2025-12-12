#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (((num % 5 == 0) || (num % 3 == 0)) && (num % 15 != 0)){
        printf("%d is divisible by 5 or 3 but not by 15.\n", num);
    }else{
        printf("%d does not satisfy the condition.\n", num);
    }

    return 0;
}
