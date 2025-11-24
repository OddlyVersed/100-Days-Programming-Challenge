#include <stdio.h>

int main() {
    int n;
    int k;
    int arr[100];
    int i;
    int j;
    int first_negative;
    int found;

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
    
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 0;
    }
    
    for (i = 0; i <= n - k; i++) {
        first_negative = 0;
        found = 0;
        
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                found = 1;
                break;
            }
        }
        
        printf("%d", first_negative);
        
        if (i < n - k) {
            printf(" ");
        }
    }
    
    printf("\n");

    return 0;
}
