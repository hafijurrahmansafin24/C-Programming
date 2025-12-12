#include <stdio.h>

int fun(int n) {
    int i, j, sum = 0;

    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            sum++;
        }
    }
    return sum;
}

int main() {
    printf("%d", fun(5));

    return 0;
}
