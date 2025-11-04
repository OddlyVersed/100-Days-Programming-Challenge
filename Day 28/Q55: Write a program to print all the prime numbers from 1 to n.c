#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i, j, is_p;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        is_p = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_p = 0;
                break;
            }
        }
        if (is_p == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
