#include<stdio.h>
void main()
{
	int  a[10],i,count=0,j;
	printf("Enter 10 number");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("all prime nos are\n");
	for(i=1;i<10;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			count++;
		}
		if(count==2)
		printf("%d\n",a[i]);
		count=0;
	}
	
}
