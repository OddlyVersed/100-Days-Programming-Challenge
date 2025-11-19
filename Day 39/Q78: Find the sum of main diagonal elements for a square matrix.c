#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r, c;
    int i, j;
    int sum = 0;

    printf("Enter the number of rows and columns (r c): ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Error: Matrix must be square to find the main diagonal sum.\n");
        return 1;
    }

    int arr[r][c];

    printf("Enter %d elements (%d rows and %d columns):\n", r * c, r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum += arr[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
