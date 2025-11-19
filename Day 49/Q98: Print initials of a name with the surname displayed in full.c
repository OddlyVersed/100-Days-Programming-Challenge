#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int i = 0, j;
    int l = 0;
    int last_s = -1;

    printf("Enter a full name: ");
    scanf(" %[^\n]", s); 

    while (s[l] != '\0') {
        if (s[l] == ' ') {
            last_s = l;
        }
        l++;
    }

    if (l == 0) {
        return 0;
    }

    if (last_s == -1) {
        printf("%s\n", s);
        return 0;
    }

    if (s[0] != '\0') {
        printf("%c.", s[0]);
    }
    
    i = 0;
    while (i < last_s) {
        if (s[i] == ' ' && s[i + 1] != '\0' && i + 1 < last_s) {
            printf("%c.", s[i + 1]);
        }
        i++;
    }

    printf(" %s\n", s + last_s + 1);

    return 0;
}
