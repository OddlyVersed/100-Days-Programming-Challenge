#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int v = 0, cn = 0;
    int i = 0;
    char ch;

    printf("Enter a string: ");
    
    scanf(" %[^\n]", s); 

    while (s[i] != '\0') {
        ch = s[i];
        
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                v++;
            } else {
                cn++;
            }
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", v, cn);

    return 0;
}
