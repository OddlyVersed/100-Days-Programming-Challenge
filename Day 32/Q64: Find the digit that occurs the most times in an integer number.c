#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    long long n, temp;
    int freq[10] = {0};
    int rem, i;
    int max_c = 0;
    int mode_d = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &n);

    temp = n;

    if (temp == 0) {
        printf("0\n");
        return 0;
    }

    while (temp != 0) {
        rem = temp % 10;
        freq[rem]++;
        temp /= 10;
    }

    for (i = 0; i <= 9; i++) {
        if (freq[i] > max_c) {
            max_c = freq[i];
            mode_d = i;
        }
    }

    printf("%d\n", mode_d);

    return 0;
}
