#include <stdio.h>

int main() {
    int m;
    int n;
    int nums1[100];
    int nums2[100];
    int merged[200];
    int i;
    int j;
    int k;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &m) != 1 || m < 0 || m > 100) {
        return 0;
    }

    for (i = 0; i < m; i++) {
        if (scanf("%d", &nums1[i]) != 1) {
            return 0;
        }
    }
    
    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &nums2[i]) != 1) {
            return 0;
        }
    }
    
    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k] = nums1[i];
            i++;
        } else {
            merged[k] = nums2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = nums2[j];
        j++;
        k++;
    }
    
    for (i = 0; i < m + n; i++) {
        printf("%d", merged[i]);
        if (i < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
