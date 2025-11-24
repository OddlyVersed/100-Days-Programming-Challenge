#include <stdio.h>
#include <string.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;
    char input_role[10];
    int current_role = -1;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("%9s", input_role) != 1) {
        return 0;
    }
    
    if (strcmp(input_role, "ADMIN") == 0) current_role = ADMIN;
    else if (strcmp(input_role, "USER") == 0) current_role = USER;
    else if (strcmp(input_role, "GUEST") == 0) current_role = GUEST;
    else {
        printf("Invalid role input.\n");
        return 0;
    }

    role = (enum UserRole)current_role;

    switch (role) {
        case ADMIN:
            printf("Welcome Administrator! Full access granted.\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
