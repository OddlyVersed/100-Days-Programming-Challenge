#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r1, c1, r2, c2;
    int i, j, k;
    int sum;

    printf("Enter rows and columns for Matrix A (r1 c1): ");
    scanf("%d %d", &r1, &c1);

    int arr1[r1][c1];

    printf("Enter %d elements for Matrix A:\n", r1 * c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter rows and columns for Matrix B (r2 c2): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: Matrices cannot be multiplied. Columns of A (%d) must equal rows of B (%d).\n", c1, r2);
        return 1;
    }

    int arr2[r2][c2];
    int res[r1][c2];

    printf("Enter %d elements for Matrix B:\n", r2 * c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            sum = 0;
            for (k = 0; k < c1; k++) {
                sum += arr1[i][k] * arr2[k][j];
            }
            res[i][j] = sum;
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
