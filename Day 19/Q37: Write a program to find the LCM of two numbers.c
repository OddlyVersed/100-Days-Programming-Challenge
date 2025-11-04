#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int n1, n2, a, b, temp, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    a = n1;
    b = n2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    hcf = a;
    lcm = (n1 * n2) / hcf;

    printf("%d\n", lcm);

    return 0;
}
