#include <stdio.h>
#include <math.h>

int main() {
    long long n, bin = 0;
    int rem, i = 1;

    printf("Enter a decimal number: ");
    scanf("%lld", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    printf("%lld\n", bin);

    return 0;
}
