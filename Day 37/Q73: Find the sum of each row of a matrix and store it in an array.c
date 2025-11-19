#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r, c;
    int i, j;
    int current_row_sum;

    printf("Enter the number of rows and columns (r c): ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int row_sum[r];

    printf("Enter %d elements (%d rows and %d columns):\n", r * c, r, c);
    for (i = 0; i < r; i++) {
        current_row_sum = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            current_row_sum += arr[i][j];
        }
        row_sum[i] = current_row_sum;
    }

    for (i = 0; i < r; i++) {
        printf("%d ", row_sum[i]);
    }
    printf("\n");

    return 0;
}
