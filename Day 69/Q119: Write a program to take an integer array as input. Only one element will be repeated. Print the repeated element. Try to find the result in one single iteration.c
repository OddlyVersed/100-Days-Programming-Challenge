#include <stdio.h>

int main() {
    int n;
    int nums[100];
    int i;
    long long expected_sum;
    long long actual_sum = 0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n <= 1 || n > 100) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 0;
        }
        actual_sum = actual_sum + nums[i];
    }
    
    expected_sum = (long long)(n - 1) * (n - 2) / 2;
    
    printf("%lld\n", actual_sum - expected_sum);

    return 0;
}
