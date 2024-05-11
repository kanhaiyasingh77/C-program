#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,gt;
	printf("enter 10 nos\n");
	for(i=0;i<9;i++)
	{
		scanf("%d\t",&a[i]);
	}
	gt=a[0];
	for (j=0;j<9;j++)
	{
		if(a[j]>gt)
		gt=a[j];
	}
	printf("Greatest no.= %d",gt);
}
