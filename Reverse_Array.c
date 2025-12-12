#include <stdio.h>

int main()
{
    int n, i, start, end, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    start = 0;
    end = n - 1;

    while(start < end){
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int n, i, j, k, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    j = 0;
    k = n - 1;

    while(j < k){
        temp = a[j];
        a[j] = a[k];
        a[k] = temp;
        j++;
        k--;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
