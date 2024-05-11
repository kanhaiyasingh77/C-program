#include<stdio.h>
void main()
{
	int n,i=1,s=0;
	printf("enter the number:\t");
	scanf("%d",&n);
	printf("factors are:\t");
	for(i;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
			s=s+i;
		}
	}
	
	if(n==s)
	{
	printf("\n%d is perfect no.",n);
	}
	else
	printf("\n%d is not perfect no.",n);
}
