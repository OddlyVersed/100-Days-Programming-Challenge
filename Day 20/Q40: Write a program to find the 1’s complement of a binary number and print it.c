#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    long long n, org;
    long long comp = 0;
    long long i = 1;
    int rem;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    org = n;

    while (n > 0) {
        rem = n % 10;
        
        if (rem == 0) {
            rem = 1;
        } else {
            rem = 0;
        }

        comp = comp + (rem * i);
        n = n / 10;
        i = i * 10;
    }

    printf("%lld\n", comp);

    return 0;
}
