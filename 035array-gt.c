#include<stdio.h>
void main()
{
	int  a[10],i,gt;
	printf("Enter 10 number");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	gt=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>gt)
		gt=a[i];
	}
	
}
