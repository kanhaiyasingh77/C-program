#include<stdio.h>
void main()
{
	int n,sum=0,d;
	printf("Enter any number: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
		
	}
	printf("sum of all digit=%d",sum);
}
