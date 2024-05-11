#include<stdio.h>
void main()
{
	int n[10],i;
	printf("Enter 10 nos:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("Odd elements are:\n");
	for(i=0;i<10;i++)
	{
		if(n[i]%2!=0)
		printf("%d\t",n[i]);
	}
}
