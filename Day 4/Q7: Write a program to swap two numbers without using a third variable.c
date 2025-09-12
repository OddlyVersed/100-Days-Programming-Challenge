#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the numbers(a and b) you want to swap = ");
	scanf("%d%d",&a,&b);
	printf("before swap: %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap: %d %d",a,b);
	
    return 0;
	
}
