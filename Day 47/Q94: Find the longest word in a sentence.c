#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int i = 0;
    int ml = 0;
    int cl = 0;
    int ms = 0;
    int cs = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", s); 

    while (s[i] != '\0') {
        if (s[i] != ' ') {
            cl++;
        } else {
            if (cl > ml) {
                ml = cl;
                ms = cs;
            }
            cl = 0;
            cs = i + 1;
        }
        i++;
    }

    if (cl > ml) {
        ml = cl;
        ms = cs;
    }

    for (i = 0; i < ml; i++) {
        printf("%c", s[ms + i]);
    }
    printf("\n");

    return 0;
}
