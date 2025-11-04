#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n1, n2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 || i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }

    printf("%d\n", hcf);

    return 0;
}
