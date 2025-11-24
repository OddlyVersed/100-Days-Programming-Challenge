#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int i;
    int current_max;
    int max_so_far;

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
    
    if (n == 0) {
        return 0;
    }
    
    max_so_far = arr[0];
    current_max = arr[0];

    for (i = 1; i < n; i++) {
        
        if (arr[i] > current_max + arr[i]) {
            current_max = arr[i];
        } else {
            current_max = current_max + arr[i];
        }

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }
    
    printf("%d\n", max_so_far);

    return 0;
}
