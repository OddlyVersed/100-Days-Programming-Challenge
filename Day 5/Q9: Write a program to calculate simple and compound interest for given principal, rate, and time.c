#include <stdio.h>
#include <math.h>
int main() {
    float p,r,t,CI,SI,amount;
    printf("Enter Principle, Rate, Time =");
    scanf("%f%f%f",&p,&r,&t);
    amount= p*(pow((1+r/100),t));
    CI=amount-p;
    SI= (p*r*t)/100;
    printf("Simple Interest = %f\nCompound Interest = %f",SI,CI);
    

    return 0;
}

