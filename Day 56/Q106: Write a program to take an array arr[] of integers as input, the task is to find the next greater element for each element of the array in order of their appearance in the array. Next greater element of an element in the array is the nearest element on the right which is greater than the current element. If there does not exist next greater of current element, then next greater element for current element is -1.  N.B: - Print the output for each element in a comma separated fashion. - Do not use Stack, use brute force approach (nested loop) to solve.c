#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int arr[100];
    int i;
    int j;
    int next_greater;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 0;
        }
    }

    for (i = 0; i < n; i++) {
        next_greater = -1;
        
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        
        printf("%d", next_greater);
        
        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");

    return 0;
}
