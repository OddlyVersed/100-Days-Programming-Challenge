#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    long long n;
    long long prod = 1;
    int rem;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n > 0) {
        rem = n % 10;
        if (rem % 2 != 0) {
            prod = prod * rem;
        }
        n = n / 10;
    }

    printf("%lld\n", prod);

    return 0;
}
