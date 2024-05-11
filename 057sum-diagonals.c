#include<stdio.h>
void main()
{
	int i,j,d1=0,d2=0;
	int a[3][3];
	printf("Enter the elements of matrix:\n");
	for(i=0;i<3;i++ )
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			d1=d1+a[i][j];
			if(i+j==2)
			d2=d2+a[i][j];
		    printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	printf("sum of 1st diagonals elements=%d\n2nd diagonals=%d",d1,d2);
}
