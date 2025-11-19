#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int l = 0, i, j, k;

    printf("Enter a string: ");
    scanf("%s", s); 
    
    while (s[l] != '\0') {
        l++;
    }

    for (i = 0; i < l; i++) {
        for (j = i; j < l; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            if (i != l - 1 || j != l - 1) {
                printf(",");
            }
        }
    }
    printf("\n");

    return 0;
}
