
#include<stdio.h>
void main()
{
	int i,j,lines;
	printf("Enter no of lines:");
	scanf("%d",&lines);
	
	for(i=1;i<=lines;i++)
	{
		for(j=1;j<=lines;j++)
		{
			if(i==1||i==lines||j==1||j==lines)
			{
				printf("*");
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
