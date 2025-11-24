#include <stdio.h>
#include <string.h>

enum Month {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main() {
    enum Month month;
    char input_month[4];
    int current_month = -1;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("%3s", input_month) != 1) {
        return 0;
    }
    
    if (strcmp(input_month, "JAN") == 0) current_month = JAN;
    else if (strcmp(input_month, "FEB") == 0) current_month = FEB;
    else if (strcmp(input_month, "MAR") == 0) current_month = MAR;
    else if (strcmp(input_month, "APR") == 0) current_month = APR;
    else if (strcmp(input_month, "MAY") == 0) current_month = MAY;
    else if (strcmp(input_month, "JUN") == 0) current_month = JUN;
    else if (strcmp(input_month, "JUL") == 0) current_month = JUL;
    else if (strcmp(input_month, "AUG") == 0) current_month = AUG;
    else if (strcmp(input_month, "SEP") == 0) current_month = SEP;
    else if (strcmp(input_month, "OCT") == 0) current_month = OCT;
    else if (strcmp(input_month, "NOV") == 0) current_month = NOV;
    else if (strcmp(input_month, "DEC") == 0) current_month = DEC;
    else {
        printf("Invalid month abbreviation.\n");
        return 0;
    }

    month = (enum Month)current_month;

    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
    }

    return 0;
}
