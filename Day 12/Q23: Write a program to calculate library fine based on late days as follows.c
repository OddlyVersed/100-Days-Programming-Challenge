#include <stdio.h>

int main() {
    
    int days_late;
    int fine = 0;

    printf("Enter the number of days the book is late: ");
    if (scanf("%d", &days_late) != 1 || days_late < 0) {
        printf("Invalid input.");
        return 1;
    }
    
    if (days_late > 30) {
        printf("Membership Cancelled\n");
    } 
    else if (days_late > 10) {

        fine += 5 * 2; 
        
        fine += 5 * 4;
        
        fine += (days_late - 10) * 6;
        
        printf("Fine ₹%d\n", fine);
    } 
    else if (days_late > 5) {

        fine += 5 * 2;
        
        fine += (days_late - 5) * 4;
        
        printf("Fine ₹%d\n", fine);
    } 
    else {
        fine = days_late * 2;
        printf("Fine ₹%d\n", fine);
    }

    return 0;
}
