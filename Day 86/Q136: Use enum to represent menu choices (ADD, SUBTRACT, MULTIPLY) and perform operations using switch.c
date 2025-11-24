#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation op;
    char input_op[10];
    int num1;
    int num2;
    int result = 0;
    int current_op = -1;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("%9s %d %d", input_op, &num1, &num2) != 3) {
        printf("Invalid input format.\n");
        return 0;
    }
    
    if (strcmp(input_op, "ADD") == 0) current_op = ADD;
    else if (strcmp(input_op, "SUBTRACT") == 0) current_op = SUBTRACT;
    else if (strcmp(input_op, "MULTIPLY") == 0) current_op = MULTIPLY;
    else {
        printf("Invalid operation.\n");
        return 0;
    }

    op = (enum Operation)current_op;

    switch (op) {
        case ADD:
            result = num1 + num2;
            break;
        case SUBTRACT:
            result = num1 - num2;
            break;
        case MULTIPLY:
            result = num1 * num2;
            break;
        default:
            printf("Invalid operation.\n");
            return 0;
    }

    printf("%d\n", result);

    return 0;
}
