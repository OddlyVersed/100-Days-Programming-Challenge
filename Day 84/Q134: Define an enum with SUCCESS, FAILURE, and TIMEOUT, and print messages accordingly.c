#include <stdio.h>
#include <string.h>

enum OperationStatus {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum OperationStatus status;
    char input_status[10];
    int current_status = -1;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("%9s", input_status) != 1) {
        return 0;
    }
    
    if (strcmp(input_status, "SUCCESS") == 0) current_status = SUCCESS;
    else if (strcmp(input_status, "FAILURE") == 0) current_status = FAILURE;
    else if (strcmp(input_status, "TIMEOUT") == 0) current_status = TIMEOUT;
    else {
        printf("Invalid status input.\n");
        return 0;
    }

    status = (enum OperationStatus)current_status;

    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
