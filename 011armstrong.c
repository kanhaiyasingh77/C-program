#include<stdio.h>
void main()
{
	int n,sum=0,d,temp;
	printf("Enter any number: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
	d=n%10;
	sum=sum+(d*d*d);
	n=n/10;	
	}
	if(temp==sum)
	printf("Armstrong no.!");
	else
	printf("not Armstrong no.!");
}
