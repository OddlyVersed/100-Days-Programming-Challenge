#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s[20];
    char dd[3] = {'\0'};
    char mm[3] = {'\0'};
    char yyyy[5] = {'\0'};
    int m_num;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", s); 

    dd[0] = s[0];
    dd[1] = s[1];
    
    mm[0] = s[3];
    mm[1] = s[4];
    
    yyyy[0] = s[6];
    yyyy[1] = s[7];
    yyyy[2] = s[8];
    yyyy[3] = s[9];
    
    sscanf(mm, "%d", &m_num);

    printf("%s-", dd);

    switch (m_num) {
        case 1: printf("Jan"); break;
        case 2: printf("Feb"); break;
        case 3: printf("Mar"); break;
        case 4: printf("Apr"); break;
        case 5: printf("May"); break;
        case 6: printf("Jun"); break;
        case 7: printf("Jul"); break;
        case 8: printf("Aug"); break;
        case 9: printf("Sep"); break;
        case 10: printf("Oct"); break;
        case 11: printf("Nov"); break;
        case 12: printf("Dec"); break;
        default: printf("???"); break;
    }

    printf("-%s\n", yyyy);

    return 0;
}
