#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    long long sum = 0;
    int count = 0;
    double average = 0.0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("Error: File numbers.txt not found or could not be opened.\n");
        return 0;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum = sum + num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        average = (double)sum / count;
    }

    printf("Sum = %lld\n", sum);
    printf("Average = %.2lf\n", average);

    return 0;
}
