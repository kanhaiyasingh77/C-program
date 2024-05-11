#include<stdio.h>
void main()
{
	int i,j,lines;
	printf("Enter no. of lines: ");
	scanf("%d",&lines);
	
	for(i=1;i<=lines;i++)
	{
		for(j=lines;j>=i;j--)
		printf("%d",j);
	}
	printf("\n");
}
