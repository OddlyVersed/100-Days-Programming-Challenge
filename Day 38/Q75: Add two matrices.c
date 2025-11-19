#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter dimensions of Matrix 1 (r c): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter dimensions of Matrix 2 (r c): ");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Error: Matrices must have the same dimensions for addition.\n");
        return 1;
    }

    int arr1[r1][c1];
    int arr2[r2][c2];
    int res[r1][c1];

    printf("Enter elements of Matrix 1 (%d rows and %d columns):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2 (%d rows and %d columns):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Sum Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            res[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
