#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student students[], int num_students) {
    int i;
    int max_marks = -1;
    int topper_index = 0;

    for (i = 0; i < num_students; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            topper_index = i;
        }
    }

    return students[topper_index];
}

int main() {
    struct Student students[5];
    struct Student topper;
    int num_students;
    int i;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("%d", &num_students) != 1 || num_students <= 0 || num_students > 5) {
        return 0;
    }

    for (i = 0; i < num_students; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }
    
    topper = findTopper(students, num_students);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", topper.name, topper.roll_no, topper.marks);

    return 0;
}
