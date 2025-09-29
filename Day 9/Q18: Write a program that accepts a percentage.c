#include <stdio.h>

int main() {
    int percentage;

    printf("Enter the student's percentage: ");

    scanf("%d", &percentage);

    if (percentage < 0 || percentage > 100) 
    {
        printf("Invalid input. Percentage must be between 0 and 10.");
    }
    else if (percentage >= 90)
    {
        printf("Grade A");
    }

    else if (percentage >= 80) 
    {
        printf("Grade B");
    }

    else if (percentage >= 70)
    {
        printf("Grade C");
    }

    else if (percentage >= 60) 
    {
        printf("Grade D");
    }

    else {
        printf("Grade F");
    }

    return 0;
}
