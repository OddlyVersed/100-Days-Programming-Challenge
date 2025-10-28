#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int odd = 1;

    printf("Enter the number of odd numbers (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        sum += odd;
        odd += 2;
    }

    printf("%d\n", sum);

    return 0;
}
