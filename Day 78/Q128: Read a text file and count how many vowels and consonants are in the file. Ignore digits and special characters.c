#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowel_count = 0;
    int consonant_count = 0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("Error: File text.txt not found or could not be opened.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowel_count);
    printf("Consonants: %d\n", consonant_count);

    return 0;
}
