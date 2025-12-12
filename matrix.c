#include <stdio.h>

int main() {
    int row, col, a[10][10];        // row, col = matrix size, a[][] = matrix

    printf("Enter rows and columns: ");
    scanf("%d %d", &row, &col);     // input rows and columns

    printf("Enter matrix elements:\n");
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &a[i][j]);  // input matrix elements

    printf("\nTranspose of the matrix:\n");
    for(int i = 0; i < col; i++) {  // loop through columns
        for(int j = 0; j < row; j++) {
            printf("%d ", a[j][i]); // print transposed element
        }
        printf("\n");
    }

    return 0;
}
