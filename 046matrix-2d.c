#include<stdio.h>
void main()
{
	int row,column,i,j,ecount=0,ocount=0;
	printf("Enter size of row and column:\n");
	scanf("%d%d",&row,&column);
	int a[row][column];
	printf("Enter the value of matrix: \t");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++) 
		{
			printf("%d\t",a[i][j]);
			if(a[i][j]%2==0)
			{
			ecount++;
			}
			else
			ocount++;
		}
		printf("\n");
	}
	printf("no of even elements=%d \n",ecount);
	printf("no of odd elements=%d \n",ocount);
	
}
