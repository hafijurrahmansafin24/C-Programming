#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9}, evenSum = 0, oddSum = 0;

    for(int i = 0; i < 9; i++) {
        if(i % 2 == 0) {
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }
    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    printf("Result is: %d", abs(oddSum - evenSum));

    return 0;
}
