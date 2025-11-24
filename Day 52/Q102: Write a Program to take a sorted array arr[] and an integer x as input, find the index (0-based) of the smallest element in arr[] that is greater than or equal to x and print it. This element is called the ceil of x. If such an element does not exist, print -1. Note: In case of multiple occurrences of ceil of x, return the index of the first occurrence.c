#include <stdio.h>

int find_ceil_index(int n, int arr[], int key) {
    int l = 0;
    int h = n - 1;
    int res = -1;
    int m;

    while (l <= h) {
        m = l + (h - l) / 2;

        if (arr[m] == key) {
            res = m;
            h = m - 1;
        } else if (arr[m] > key) {
            res = m;
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, key, i;
    int ceil_idx;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element (x): ");
    scanf("%d", &key);

    ceil_idx = find_ceil_index(n, arr, key);

    printf("%d\n", ceil_idx);

    return 0;
}
