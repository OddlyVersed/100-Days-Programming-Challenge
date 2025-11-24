#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp_in;
    FILE *fp_out;
    int ch;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    fp_in = fopen("input.txt", "r");
    if (fp_in == NULL) {
        printf("Error: Input file 'input.txt' not found.\n");
        return 0;
    }

    fp_out = fopen("output.txt", "w");
    if (fp_out == NULL) {
        printf("Error: Could not open output file 'output.txt'.\n");
        fclose(fp_in);
        return 0;
    }

    while ((ch = fgetc(fp_in)) != EOF) {
        ch = toupper(ch);
        fputc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);
    
    printf("Content successfully converted to uppercase and written to output.txt\n");

    return 0;
}
