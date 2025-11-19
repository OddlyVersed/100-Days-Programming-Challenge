#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int len = 0, i, j;
    int is_p = 1;

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
        if (s[i] != s[j]) {
            is_p = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_p) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
