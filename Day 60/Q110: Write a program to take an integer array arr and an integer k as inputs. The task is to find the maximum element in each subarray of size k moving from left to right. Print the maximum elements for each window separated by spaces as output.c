#include <stdio.h>

int main() {
    int n;
    int k;
    int arr[100];
    int i;
    int j;
    int max_element;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        return 0;
    }

    if (n > 0) {
        for (i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                return 0;
            }
        }
    }
    
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        return 0;
    }
    
    for (i = 0; i <= n - k; i++) {
        max_element = arr[i];
        
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max_element) {
                max_element = arr[i + j];
            }
        }
        
        printf("%d", max_element);
        
        if (i < n - k) {
            printf(" ");
        }
    }
    
    printf("\n");

    return 0;
}
