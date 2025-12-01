#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[50];
    int id;
    int score;
};

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    struct Student *s_ptr;

    s_ptr = (struct Student *)malloc(sizeof(struct Student));

    if (s_ptr == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    printf("Enter details for Student (Name ID Score): ");
    scanf("%s %d %d", s_ptr->name, &s_ptr->id, &s_ptr->score);

    printf("Name: %s | Roll: %d | Marks: %d\n", s_ptr->name, s_ptr->id, s_ptr->score);

    free(s_ptr);

    return 0;
}
