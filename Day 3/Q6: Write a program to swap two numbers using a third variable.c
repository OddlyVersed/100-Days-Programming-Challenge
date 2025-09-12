#include<stdio.h>

int main()
{
	int a,b,hold;
	printf("Enter the numbers(a and b) you want to swap = ");
	scanf("%d%d",&a,&b);
	printf("before swap: %d%d\n",a,b);
	hold=a;
	a=b;
	b=hold;
	printf("after swap: %d%d",a,b);
	
    return 0;
	
}
