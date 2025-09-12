#include<stdio.h>

int main()
{
	float Celsius,Fahrenheit;
	printf("Enter the temperature in celsius = ");
	scanf("%f",&Celsius);
	Fahrenheit=(Celsius*9/5)+32;
	printf("The temperature in Fahrenheit is = %f  ", Fahrenheit);
	
  return 0;
	
}
