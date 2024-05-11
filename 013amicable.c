#include<stdio.h>
void main()
{
	int a,b,d,sum=0,sum1=0;
	printf("Enter two nos. ");
	scanf("%d%d",&a,&b);
	
	while(a>0)
	{
		d=a%10;
		sum=sum+d;
		a=a/10;
	}
	while(b>0)
	{
		d=a%10;
		sum1=sum1+d;
		b=b/10;
	}
	if(sum==b&&sum1==a)
	printf("Amicable no!");
	else
	printf("Not Amicable no!");
}
