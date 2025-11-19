#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int l = 0;
    int i = 0;

    printf("Enter a string: ");
    
    scanf(" %[^\n]", s); 

    while (s[i] != '\0') {
        l++;
        i++;
    }

    printf("%d\n", l);

    return 0;
}
