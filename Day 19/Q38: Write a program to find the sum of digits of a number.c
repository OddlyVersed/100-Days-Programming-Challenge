#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    printf("%d\n", sum);

    return 0;
}
