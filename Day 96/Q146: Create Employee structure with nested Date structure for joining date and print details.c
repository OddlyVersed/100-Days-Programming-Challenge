#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;
    char temp_name[50];
    int temp_id;
    int d, m, y;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    
    if (scanf("Employee: %49[^ ] | ID: %d | Joining Date: %d %d %d", 
             emp.name, 
             &emp.id, 
             &emp.joining_date.day, 
             &emp.joining_date.month, 
             &emp.joining_date.year) != 5) {
        return 0;
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           emp.name, 
           emp.id, 
           emp.joining_date.day, 
           emp.joining_date.month, 
           emp.joining_date.year);

    return 0;
}
