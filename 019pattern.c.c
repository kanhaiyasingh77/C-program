#include<stdio.h>
void main()
{
	int i,j,lines;
	printf("enter no of lines: ");
	scanf("%d",&lines);
	
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
