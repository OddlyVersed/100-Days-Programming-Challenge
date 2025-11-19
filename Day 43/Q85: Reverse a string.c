#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int len = 0, i, j;
    char temp;

    printf("Enter a string: ");
    
    scanf(" %[^\n]", s); 

    i = 0;
    while (s[i] != '\0') {
        len++;
        i++;
    }

    i = 0;
    j = len - 1;

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    printf("%s\n", s);

    return 0;
}
