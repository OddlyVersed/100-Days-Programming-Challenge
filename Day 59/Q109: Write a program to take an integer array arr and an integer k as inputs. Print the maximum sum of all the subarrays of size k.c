#include <stdio.h>

int main() {
    int n;
    int k;
    int arr[100];
    int i;
    int current_sum = 0;
    int max_sum;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("0\n");
        return 0;
    }

    if (n > 0) {
        for (i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                printf("0\n");
                return 0;
            }
        }
    }
    
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("0\n");
        return 0;
    }
    
    for (i = 0; i < k; i++) {
        current_sum = current_sum + arr[i];
    }
    
    max_sum = current_sum;

    for (i = k; i < n; i++) {
        current_sum = current_sum + arr[i] - arr[i - k];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("%d\n", max_sum);

    return 0;
}
