#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    long long total_sum;
    long long sum_half;
    long long x_sq;
    long long x;
    double x_double;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    total_sum = n * (n + 1) / 2;

    if (total_sum % 2 != 0) {
        printf("-1\n");
        return 0;
    }

    sum_half = total_sum / 2;

    x_double = sqrt((double)sum_half);
    
    x = (long long)round(x_double);

    x_sq = x * x;

    if (x_sq == sum_half && x >= 1 && x <= n) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
