#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[100];
    int i = 0, j = 0;
    char c;

    printf("Enter a string: ");
    scanf(" %[^\n]", s); 

    while (s[i] != '\0') {
        c = s[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    
    s[j] = '\0';

    printf("%s\n", s);

    return 0;
}
