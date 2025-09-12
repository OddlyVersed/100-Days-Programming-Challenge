#include<stdio.h>

int main()
{
	int i,sum=0,n;
	printf("Enter a positive integer n = ");
	scanf("%d",&n);
	    if(n>0){
	        for(i = 1;i<=n;++i){
	            sum +=i;
	        }
	        printf("Sum=%d\n", sum);
	    } else {
	        printf("Please enter a positive integer.\n");
	    }
	
    return 0;
	
}
