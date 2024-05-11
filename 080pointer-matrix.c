// To input any matrix after that print it using pointer.
#include<stdio.h>
void main(){
	int r,c,i,j,*p;
	printf("size of row & column:\n");
	scanf("%d%d",&r,&c);
	int m[r][c];
	p=m;
	printf("Enter the value for matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",p+i*c+j);
		}
	}
	printf("matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",*(p+i*c+j));
		}
		printf("\n");
	}
}
