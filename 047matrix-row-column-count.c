// To find sum of left,right,top,bottom elemeents of a matrix.
#include<stdio.h>
void main()
{
	int i,j,k,left,right,top,bottom,row,column;
	printf("Enter size of row and column:\n");
	scanf("%d%d",&row,&column);
	int a[row][column];
	left=right=top=bottom=0;
	printf("Enter the value of matrix\n");
	for(i=0;i<row;i++) 
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",a[i][j]);
			if(i==0)
			top=top+a[i][j];
			if(i==row-1)
			bottom=bottom+a[i][j];
			if(j==0)
			left=left+a[i][j];
			if(j==column-1)
			right=right+a[i][j];
		}
		printf("\n");                                                       
		
	}
	printf("Sum of top line elements=%d\n sum of bottom line elements=%d\n sum of left line elements=%d\n sum of right line elements=%d\n",top,bottom,left,right);
	
}
