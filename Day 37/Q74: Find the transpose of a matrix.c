#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r, c;
    int i, j;

    printf("Enter the number of rows and columns (r c): ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter %d elements (%d rows and %d columns):\n", r * c, r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose Matrix:\n");
    for (j = 0; j < c; j++) {
        for (i = 0; i < r; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
