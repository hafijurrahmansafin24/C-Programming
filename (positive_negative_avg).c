#include <stdio.h>

int main() {
    int n, i;
    int posCount = 0, negCount = 0;
    float num, posSum = 0, negSum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Input number of %d: ", i);
        scanf("%f", &num);

        if(num > 0) {
            posSum += num;
            posCount++;
        } else if(num < 0) {
            negSum += num;
            negCount++;
        }
    }

    printf("positive numbers: %d\n", posCount);
    printf("negative numbers: %d\n", negCount);

    if(posCount > 0)
        printf("Average of positive = %.2f\n", posSum / posCount);
    if(negCount > 0)
        printf("Average of negative = %.2f\n", negSum / negCount);

    return 0;
}
