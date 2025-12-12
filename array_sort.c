#include <stdio.h>

int main() {
    int i, j, x;
    int arr[] = {3, 1, 2, 4, 6, 5, 8, 10, 9, 7};

    for (i = 1; i < 10; i++) {
        x = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > x) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = x;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
