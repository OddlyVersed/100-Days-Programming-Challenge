#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[100];

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: File info.txt not found or could not be opened.\n");
        return 0;
    }

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
