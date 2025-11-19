#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i;
    int max, s_max;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Error: Array size must be at least 2.\n");
        return 1;
    }

    max = arr[0];
    s_max = arr[1];

    if (s_max > max) {
        int temp = max;
        max = s_max;
        s_max = temp;
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > max) {
            s_max = max;
            max = arr[i];
        } else if (arr[i] > s_max && arr[i] != max) {
            s_max = arr[i];
        }
    }

    printf("%d\n", s_max);

    return 0;
}
