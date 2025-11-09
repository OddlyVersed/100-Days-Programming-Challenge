#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n1, n2, i, n3;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements for array 1:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter %d elements for array 2:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    n3 = n1 + n2;
    int arr3[n3];

    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    for (i = 0; i < n3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
