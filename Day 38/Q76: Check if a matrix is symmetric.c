#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r, c;
    int i, j;
    int is_sym = 1;

    printf("Enter the number of rows and columns (r c): ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter %d elements (%d rows and %d columns):\n", r * c, r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r != c) {
        is_sym = 0;
    } else {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (arr[i][j] != arr[j][i]) {
                    is_sym = 0;
                    goto end_loops; 
                }
            }
        }
    }

end_loops: 
    if (is_sym) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
