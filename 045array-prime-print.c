#include<stdio.h>
void main()
{
	int n[10],i,count=0,j,num;
	printf("Enter 10 nos:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("prime nos are:\n");
	for(i=0;i<10;i++)
	{
		num=n[i];
		for(j=1;j<=n[i];j++)
		{
			if(n[i]%j==0)
			count++;
		}
		if(count==2)
		printf("%d\t",num);
	}
}
