#include<stdio.h>
void main()
{
	int i,j,lines;
	printf("Enter no of lines:");
	scanf("%d",&lines);
	
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
