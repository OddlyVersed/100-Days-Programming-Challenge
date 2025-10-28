#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
