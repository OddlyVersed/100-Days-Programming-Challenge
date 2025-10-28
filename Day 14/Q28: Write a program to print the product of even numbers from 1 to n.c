#include <stdio.h>

int main() {
    int n, i;
    long long prod = 1; 

    printf("Enter a number (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            prod *= i;
        }
    }

    printf("%lld\n", prod);

    return 0;
}

