#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];
    int res[100];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of right rotations (k): ");
    scanf("%d", &k);

    if (n > 0) {
        k = k % n;
        
        for (i = 0; i < n; i++) {
            res[(i + k) % n] = arr[i];
        }

        for (i = 0; i < n; i++) {
            printf("%d ", res[i]);
        }
        printf("\n");
    }

    return 0;
}
