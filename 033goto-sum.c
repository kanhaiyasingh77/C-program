#include<stdio.h>
void main()
{
	int n,sum=0,d;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	sum_of_digit:
		if(n>0)
		{
			d=n%10;
			sum=sum+d;
			n=n/10;
			goto sum_of_digit;
		}
		
		printf("sum of digit=%d",sum);
}
