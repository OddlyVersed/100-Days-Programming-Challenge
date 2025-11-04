#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, temp, rem, i;
    long long s = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        
        s += fact;
        temp /= 10;
    }

    if (s == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
