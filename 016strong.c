// Strong no.
#include<stdio.h>
void main()
{
	int n,num,d,i,fact=1,sum=0;
	printf("Enter any no.");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		d=n%10;
		for(i=1;i<=d;i++)
		{
			fact=fact*i;
			
		}
		sum=sum+fact;
		n=n/10;
		fact=1;
		
	}
	if(num==sum)
	printf("Strong no.");
	else
	printf("Strong no.");
}
