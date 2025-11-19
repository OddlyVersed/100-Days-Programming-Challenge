#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int i = 0;

    printf("Enter a full name: ");
    scanf(" %[^\n]", s); 

    if (s[0] != '\0') {
        printf("%c.", s[0]);
    }

    while (s[i] != '\0') {
        if (s[i] == ' ' && s[i + 1] != '\0') {
            printf("%c.", s[i + 1]);
        }
        i++;
    }
    printf("\n");

    return 0;
}
