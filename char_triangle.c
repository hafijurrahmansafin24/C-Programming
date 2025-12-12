#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter n: ");
    scanf("%d", &n);

    char ch = 'A';
    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
