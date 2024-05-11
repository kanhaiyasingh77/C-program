#include<stdio.h>
void main()
{
	int a[10],i,gt;
	printf("enter 10 nos\n");
	for(i=0;i<10;i++)
	{
		scanf("%d\t",&a[i]);
	}
	gt=a[0];
	for (i=1;i<10;i++)
	{
		if(a[i]<gt)
		gt=a[i];
	}
	printf("smallest no.= %d",gt);
}
