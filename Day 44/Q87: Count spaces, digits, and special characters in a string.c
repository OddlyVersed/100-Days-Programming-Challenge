#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int i = 0;
    int spaces = 0;
    int digits = 0;
    int special = 0;

    printf("Enter a string: ");
    
    scanf(" %[^\n]", s); 

    while (s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            digits++;
        } else if (s[i] == ' ') {
            spaces++;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            
        } else {
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
