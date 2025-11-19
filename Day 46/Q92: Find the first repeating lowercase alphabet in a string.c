#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int seen[26] = {0};
    int i = 0;
    char found = '\0';

    printf("Enter a string: ");
    scanf(" %[^\n]", s); 

    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int index = s[i] - 'a';
            if (seen[index] == 1) {
                found = s[i];
                break;
            }
            seen[index] = 1;
        }
        i++;
    }

    if (found != '\0') {
        printf("%c\n", found);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
