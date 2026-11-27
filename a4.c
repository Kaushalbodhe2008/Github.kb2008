#include <stdio.h>

int main() {
    int rows, cols;
    int a[10][10], b[10][10], sum[10][10];

    // 1. Input the dimensions of the matrices
    printf("Enter the number of rows (1 to 10): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (1 to 10): ");
    scanf("%d", &cols);

    // Validate dimensions
    if (rows <= 0 || rows > 10 || cols <= 0 || cols > 10) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    // 2. Input elements for the first matrix
    printf("\nEnter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Input elements for the second matrix
    printf("\nEnter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // 4. Add the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // 5. Display the resultant matrix
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}