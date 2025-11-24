#include <stdio.h>

int main() {
    int n;
    int target;
    int nums[100];
    int i;
    int j;
    int found = 0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n <= 1 || n > 100) {
        printf("-1 -1\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            printf("-1 -1\n");
            return 0;
        }
    }
    
    if (scanf("%d", &target) != 1) {
        printf("-1 -1\n");
        return 0;
    }
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                return 0;
            }
        }
    }

    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}
