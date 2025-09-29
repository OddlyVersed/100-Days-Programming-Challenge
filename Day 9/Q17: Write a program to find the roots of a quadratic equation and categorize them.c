#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant;
    double root1, root2;
    double real_part, imaginary_part;

    printf("Enter the coefficients a, b, and c: ");

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) 
    {
        printf("Error: 'a' cannot be zero for a quadratic equation");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different: %lf, %lf\n", root1, root2);
    }

    else if (discriminant == 0) 
    {

        root1 = -b / (2 * a);
        
        printf("Roots are real and same: %lf\n", root1);
    }

    else
    {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex\n");
        printf("Root 1 = %lf + i%lf\n", real_part, imaginary_part);
        printf("Root 2 = %lf - i%lf\n", real_part, imaginary_part);
    }

    return 0;
}
