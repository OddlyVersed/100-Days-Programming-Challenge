#include <stdio.h>

int main() {
    float radius,area,circumference;
    printf("Enter Radius = ");
    scanf("%f%",&radius);
    area= 3.14*radius*radius;
    circumference= 2*3.14*radius;
    printf( "The Area is = %f\n The Circumference is = %f",area,circumference);

    return 0;
}
