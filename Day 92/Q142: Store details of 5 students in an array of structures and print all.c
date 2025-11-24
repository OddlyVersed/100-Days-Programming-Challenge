#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    for (i = 0; i < 5; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }

    printf("Roll | Name           | Marks\n");
    printf("-----|----------------|------\n");
    
    for (i = 0; i < 5; i++) {
        printf("%4d | %-14s | %5d\n", students[i].roll_no, students[i].name, students[i].marks);
    }

    return 0;
}
