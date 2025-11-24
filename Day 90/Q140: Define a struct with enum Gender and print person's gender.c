#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input_gender[10];
    int current_gender = -1;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("Gender=%9s", input_gender) != 1) {
        return 0;
    }
    
    if (strcmp(input_gender, "MALE") == 0) current_gender = MALE;
    else if (strcmp(input_gender, "FEMALE") == 0) current_gender = FEMALE;
    else if (strcmp(input_gender, "OTHER") == 0) current_gender = OTHER;
    else {
        printf("Invalid gender input.\n");
        return 0;
    }

    p.gender = (enum Gender)current_gender;

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}
