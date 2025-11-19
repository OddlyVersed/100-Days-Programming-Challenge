#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r, c;
    int i, j;
    int is_distinct = 1;

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
        printf("Error: Matrix must be square to check main diagonal distinctness.\n");
        is_distinct = 0; 
    } else {
        int diag[r];
        
        for (i = 0; i < r; i++) {
            diag[i] = arr[i][i];
        }

        for (i = 0; i < r; i++) {
            for (j = i + 1; j < r; j++) {
                if (diag[i] == diag[j]) {
                    is_distinct = 0;
                    goto print_result; 
                }
            }
        }
    }

print_result:
    if (is_distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
