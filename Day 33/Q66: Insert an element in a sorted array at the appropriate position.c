#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i, key, pos;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    pos = n;

    for (i = n - 1; i >= 0; i--) {
        if (arr[i] > key) {
            arr[i + 1] = arr[i];
            pos = i;
        } else {
            break;
        }
    }

    arr[pos] = key;
    n++; 

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
