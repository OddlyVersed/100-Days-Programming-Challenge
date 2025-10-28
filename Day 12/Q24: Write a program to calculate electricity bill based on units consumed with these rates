#include <stdio.h>

int main() {
    int u;
    float bill = 0.0;
    int rem;
    int cnsmd;

    printf("Enter the total number of units consumed: ");
    
    if (scanf("%d", &u) != 1 || u < 0) {
        printf("Invalid input. Please enter a non-negative integer for units.\n");
        return 1;
    }

    rem = u;

    if (rem > 300) {
        cnsmd = rem - 300;
        bill += cnsmd * 12.0;
        rem = 300;
    }

    if (rem > 200) {
        cnsmd = rem - 200;
        bill += cnsmd * 10.0;
        rem = 200;
    }

    if (rem > 100) {
        cnsmd = rem - 100;
        bill += cnsmd * 7.0;
        rem = 100;
    }

    if (rem > 0) {
        bill += rem * 5.0;
    }

    printf("Bill: ₹%.0f\n", bill);

    return 0;
}
