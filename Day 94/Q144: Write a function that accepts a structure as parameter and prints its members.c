#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    int num_students;
    int i;
    int max_marks = -1;
    int topper_index = -1;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("%d", &num_students) != 1 || num_students <= 0 || num_students > 5) {
        printf("Invalid number of students.\n");
        return 0;
    }

    for (i = 0; i < num_students; i++) {
        if (scanf("%49s %d %d", students[i].name, &students[i].roll_no, &students[i].marks) != 3) {
            return 0;
        }
    }
    
    for (i = 0; i < num_students; i++) {
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
            topper_index = i;
        }
    }

    if (topper_index != -1) {
        printf("Topper: %s (Marks: %d)\n", students[topper_index].name, students[topper_index].marks);
    } else {
        printf("No students found.\n");
    }

    return 0;
}
