#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, i;
    float s = 0.0, num, den;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    if (n >= 1) {
        s = 1.0;
    }

    for (i = 2; i <= n; i++) {
        num = (float)(2 * i - 1);
        den = (float)(2 * i);
        s += num / den;
    }
    
    printf("Approximate sum: %.1f\n", s);

    return 0;
}
