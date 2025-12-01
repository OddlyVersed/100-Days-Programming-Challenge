#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void write_data(const char *filename) {
    struct Employee emp_arr[3] = {
        {101, "Alice", 60000.0},
        {102, "Bob", 75000.0},
        {103, "Charlie", 50000.0}
    };
    int count = 3;
    FILE *fp;

    fp = fopen(filename, "wb");

    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fwrite(emp_arr, sizeof(struct Employee), count, fp);

    fclose(fp);
    printf("Successfully wrote %d employee records to %s\n", count, filename);
}

void read_data(const char *filename) {
    struct Employee emp;
    FILE *fp;
    int read_count;

    fp = fopen(filename, "rb");

    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    printf("\nData read from file:\n");
    printf("ID\tName\t\tSalary\n");
    printf("--------------------------------------\n");

    while (1) {
        read_count = fread(&emp, sizeof(struct Employee), 1, fp);

        if (read_count == 0) {
            break;
        }

        printf("%d\t%s\t\t%.2f\n", emp.id, emp.name, emp.salary);
    }

    fclose(fp);
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    const char *filename = "employee_records.dat";

    write_data(filename);
    
    read_data(filename);

    return 0;
}
