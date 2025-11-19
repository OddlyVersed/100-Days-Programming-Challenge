#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    char c;
    int i = 0;
    int count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", s); 

    printf("Enter the character to count: ");
    scanf(" %c", &c);

    while (s[i] != '\0') {
        if (s[i] == c) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
