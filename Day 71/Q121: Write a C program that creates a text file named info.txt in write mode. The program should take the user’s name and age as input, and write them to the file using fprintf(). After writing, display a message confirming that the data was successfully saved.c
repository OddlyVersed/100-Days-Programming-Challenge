#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("Name: %49[^,], Age: %d", name, &age) != 2) {
        return 0;
    }
    
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 0;
    }

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
