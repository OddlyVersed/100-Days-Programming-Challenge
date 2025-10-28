#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i, is_p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        is_p = 0;
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                is_p = 0;
                break;
            }
        }
    }

    if (is_p) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
