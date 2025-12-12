#include <stdio.h>

int main() {
    int n, a[100], visited[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);                     // input n

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);              // input elements

    // count frequency of each element
    for(int i = 0; i < n; i++) {
        if(visited[i] == 0) {
            int count = 1;

            for(int j = i+1; j < n; j++) {
                if(a[i] == a[j]) {
                    count++;      // increment count if duplicate found
                    visited[j] = 1;     // mark as visited
                }
            }

            printf("Element %d occurs %d times\n", a[i], count);
// print frequency
        }
    }

    return 0;
}
