#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i, j;

    printf("Enter the number of rows/columns (n): ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
