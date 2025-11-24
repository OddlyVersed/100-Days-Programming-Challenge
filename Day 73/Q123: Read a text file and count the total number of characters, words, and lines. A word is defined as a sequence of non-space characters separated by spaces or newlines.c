#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: File sample.txt not found or could not be opened.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
        }

        if (isspace(ch) || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }

    if (char_count > 0 && line_count == 0) {
        line_count = 1;
    }

    fclose(fp);

    printf("Characters: %d\n", char_count);
    printf("Words: %d\n", word_count);
    printf("Lines: %d\n", line_count);

    return 0;
}
