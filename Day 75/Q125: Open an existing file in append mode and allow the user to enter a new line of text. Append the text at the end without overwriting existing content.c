#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[100];
    char filename[] = "data.txt";

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }
    
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    fputs(line, fp);

    if (line[strlen(line) - 1] != '\n') {
        fputc('\n', fp);
    }

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
