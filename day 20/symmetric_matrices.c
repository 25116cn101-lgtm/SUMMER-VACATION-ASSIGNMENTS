#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    // Input order of square matrix
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    // Display result
    if (flag)
        printf("Matrix is Symmetric");
    else
        printf("Matrix is Not Symmetric");

    return 0;
}