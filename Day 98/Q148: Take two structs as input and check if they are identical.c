#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    int score;
};

int compare(struct Student s1, struct Student s2) {
    if (s1.id != s2.id) {
        return 0;
    }
    if (s1.score != s2.score) {
        return 0;
    }
    if (strcmp(s1.name, s2.name) != 0) {
        return 0;
    }
    return 1;
}

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    struct Student s1, s2;

    printf("Enter details for Student 1 (Name ID Score): ");
    scanf("%s %d %d", s1.name, &s1.id, &s1.score);

    printf("Enter details for Student 2 (Name ID Score): ");
    scanf("%s %d %d", s2.name, &s2.id, &s2.score);

    if (compare(s1, s2)) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }

    return 0;
}
