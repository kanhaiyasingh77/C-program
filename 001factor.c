#include<stdio.h>
void main()
{
	int i,n,a=0,b=0;
	printf("Enter anumber:\t");
	scanf("%d",&n);
	
	printf("All factors are:\n");
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		printf("%d\t",i);
		if(i%2==0)
		a=a+1;
		else
		b=b+1;
		}	
	}
	printf("\nEven factor=%d\todd factor=%d",a,b);
	
}
