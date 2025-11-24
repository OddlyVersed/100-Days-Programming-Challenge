#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1 = {"Asha", 101, 85};
    struct Student s2 = {"Ravi", 102, 92};
    struct Student temp_student;
    FILE *fp;
    
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 0;
    }

    fprintf(fp, "%s %d %d\n", s1.name, s1.roll, s1.marks);
    fprintf(fp, "%s %d %d\n", s2.name, s2.roll, s2.marks);

    fclose(fp);
    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 0;
    }

    while (fscanf(fp, "%s %d %d", temp_student.name, &temp_student.roll, &temp_student.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", temp_student.name, temp_student.roll, temp_student.marks);
    }

    fclose(fp);

    return 0;
}
