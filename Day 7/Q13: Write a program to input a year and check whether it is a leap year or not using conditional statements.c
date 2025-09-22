#include <stdio.h>

int main() {
    int a;
    printf("Enter the year you want to check:");
    scanf("%d",&a);
    if ( a%4 == 0 && a%100 != 0 )
    {
        printf("The year %d is leap year");
    }
    else if ( a%400 == 0)
    {
        printf("The year %d is a leap year");
    }
    else 
    {
        printf("The year %d is not a leap year");
    }
    return 0;
}
