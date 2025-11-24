#include <stdio.h>

int main() {
    int n;
    int i;
    int nums[50];
    int candidate = 0;
    int count = 0;
    int final_count = 0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 50) {
        printf("-1\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("-1\n");
            return 0;
        }
    }
    
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            final_count++;
        }
    }

    if (final_count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
