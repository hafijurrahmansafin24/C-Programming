#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n == 1){
        printf("Fibonacci number: %d\n", a);
    }else if(n == 2){
        printf("Fibonacci number: %d\n", b);
    }else{
        for(i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Fibonacci number: %d\n", b);
    }

    return 0;
}
