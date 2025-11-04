#include <stdio.h>
#include <math.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n, temp, l, f, d = 0;
    int p, new_n;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    l = n % 10;
    
    while (temp > 0) {
        temp /= 10;
        d++;
    }

    if (d <= 1) {
        printf("%d\n", n);
        return 0;
    }

    p = (int)pow(10, d - 1);
    f = n / p;
    
    new_n = l * p;
    new_n += n % p;
    new_n -= l;
    new_n += f;

    printf("%d\n", new_n);

    return 0;
}
