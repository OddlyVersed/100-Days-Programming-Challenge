#include <stdio.h>

int main() {
    int n;
    long long fact = 1;
    int i;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n > 20) {
        printf("Input is too large.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%lld\n", fact);
    }

    return 0;
}
