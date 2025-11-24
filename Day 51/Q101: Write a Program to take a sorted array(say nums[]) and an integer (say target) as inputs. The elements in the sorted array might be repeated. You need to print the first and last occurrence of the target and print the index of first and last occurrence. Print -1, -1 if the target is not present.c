#include <stdio.h>

int find_first(int n, int arr[], int key) {
    int l = 0;
    int h = n - 1;
    int res = -1;
    int m;

    while (l <= h) {
        m = l + (h - l) / 2;

        if (arr[m] == key) {
            res = m;
            h = m - 1;
        } else if (arr[m] < key) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return res;
}

int find_last(int n, int arr[], int key) {
    int l = 0;
    int h = n - 1;
    int res = -1;
    int m;

    while (l <= h) {
        m = l + (h - l) / 2;

        if (arr[m] == key) {
            res = m;
            l = m + 1;
        } else if (arr[m] < key) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return res;
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, key, i;
    int first_idx, last_idx;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &key);

    first_idx = find_first(n, arr, key);
    last_idx = find_last(n, arr, key);

    printf("%d,%d\n", first_idx, last_idx);

    return 0;
}
