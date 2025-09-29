#include <stdio.h>
#include <math.h>
int main(void) {
    int a,b,c, sum=0;
    printf("Enter the values for a,b,c = ");
    scanf("%d%d%d",&a,&b,&c);
    int h,perpendicular,base;
     if((a>b)&&(a>c))
    {
     h =a;
       perpendicular = b;
      base = c;
     }
    else if((b>a)&&(b>c))
    {
        h =b;
        perpendicular = a;
        base = c;
    }
    else
    {
       h =c;
       perpendicular = a;
      base = b;
      }
      if ((a > 0 && b > 0 && c > 0) &&
     (a + b > c) && (b + c > a) && (a + c > b))
     {
        if((a==b)&&(b==c))
        {
           printf("Equilateral");
         }
         else if((a==b)||(b==c)||a==c)
        {
               printf("Isosceles");
        }
        else if((h*h)==(perpendicular*perpendicular)+(base*base))
        {
         printf("Right Angled traingle");
        }
         else
       {
     printf("Scalene");
   }

    }
   else {
        printf("The triangle is not valid.\n");
    }
    return 0;
}
