#include<stdio.h>
void main()
{
	int n,s=0,i=1;
	printf("enter a number:\t");
	scanf("%d",&n);
	
	for(i;i<=n;i++)
	{
		if(n%i==0)
		s=s+1;
	}
	
	if(s==2)
	printf("%d is prime.",n);
	else
	printf("%d is not prime",n);
}
