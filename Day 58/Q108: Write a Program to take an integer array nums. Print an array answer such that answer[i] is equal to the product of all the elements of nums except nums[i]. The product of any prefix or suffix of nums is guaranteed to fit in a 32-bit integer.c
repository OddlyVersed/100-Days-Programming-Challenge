#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int nums[100];
    int result[100];
    int i;
    int prefix_product;
    int suffix_product;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 0;
        }
        result[i] = 1;
    }

    prefix_product = 1;
    for (i = 0; i < n; i++) {
        result[i] = prefix_product;
        prefix_product = prefix_product * nums[i];
    }

    suffix_product = 1;
    for (i = n - 1; i >= 0; i--) {
        result[i] = result[i] * suffix_product;
        suffix_product = suffix_product * nums[i];
    }
    
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
