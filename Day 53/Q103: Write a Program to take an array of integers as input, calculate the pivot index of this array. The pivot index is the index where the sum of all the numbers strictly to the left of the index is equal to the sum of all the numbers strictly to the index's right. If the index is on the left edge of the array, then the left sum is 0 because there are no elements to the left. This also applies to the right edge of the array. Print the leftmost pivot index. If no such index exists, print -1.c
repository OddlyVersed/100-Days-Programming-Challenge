#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i;
    int total_sum = 0;
    int l_sum = 0;
    int r_sum;
    int pivot_idx = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total_sum += arr[i];
    }

    for (i = 0; i < n; i++) {
        r_sum = total_sum - l_sum - arr[i];

        if (l_sum == r_sum) {
            pivot_idx = i;
            break;
        }

        l_sum += arr[i];
    }

    printf("%d\n", pivot_idx);

    return 0;
}
