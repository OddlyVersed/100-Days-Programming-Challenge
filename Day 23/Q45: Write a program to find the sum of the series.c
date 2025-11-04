#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i;
    float s = 0.0, num, den;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        num = (float)(2 * i);
        den = (float)(4 * i - 1);
        s += num / den;
    }
    
    printf("Approximate sum: %.2f\n", s);

    return 0;
}
