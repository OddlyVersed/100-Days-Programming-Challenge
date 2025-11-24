#include <stdio.h>

int main() {
    int n;
    int nums[100];
    int i;
    long long expected_sum;
    long long actual_sum = 0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 0;
        }
    }
    
    expected_sum = (long long)n * (n + 1) / 2;
    
    for (i = 0; i < n; i++) {
        actual_sum = actual_sum + nums[i];
    }
    
    printf("%lld\n", expected_sum - actual_sum);

    return 0;
}
