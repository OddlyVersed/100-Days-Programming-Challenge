#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[200];
    int i = 0;
    int start = 0;
    int end;
    int j;
    char temp_c;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", s); 

    while (1) {
        if (s[i] == ' ' || s[i] == '\0') {
            end = i - 1;
            
            j = start;
            while (j < end) {
                temp_c = s[j];
                s[j] = s[end];
                s[end] = temp_c;
                j++;
                end--;
            }

            if (s[i] == '\0') {
                break;
            }
            
            start = i + 1;
        }
        i++;
    }

    printf("%s\n", s);

    return 0;
}
