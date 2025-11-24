#include <stdio.h>

int main() {
    FILE *fp_source;
    FILE *fp_dest;
    char source_filename[100];
    char dest_filename[100];
    int ch;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%99s %99s", source_filename, dest_filename) != 2) {
        return 0;
    }
    
    fp_source = fopen(source_filename, "r");
    if (fp_source == NULL) {
        return 0;
    }
    
    fp_dest = fopen(dest_filename, "w");
    if (fp_dest == NULL) {
        fclose(fp_source);
        return 0;
    }

    while ((ch = fgetc(fp_source)) != EOF) {
        fputc(ch, fp_dest);
    }
    
    fclose(fp_source);
    fclose(fp_dest);
    
    printf("File copied successfully to destination.txt\n");

    return 0;
}
