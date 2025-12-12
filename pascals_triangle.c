#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i; j++){
            printf(" ");
        }

        k = 1;

        for (j = 0; j <= i; j++){
            if(j == 0){
                k = 1;
            }else{
                k = k * (i - j + 1) / j;
            }
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
