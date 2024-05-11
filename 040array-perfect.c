#include<stdio.h>
void main()
{
	int i,n[10],j,num=0,sum=0;
	printf("enter 10 nos:");
	for(i=0;i<9;i++)
	{
		scanf("%d\n",&n[i]);
	}
	printf("perfect nos are:\n");
	for(i=0;i<9;i++)
	{
		 num=n[i];
		 for(j=1;j<n[i];j++)
		 {
		 	if(n[i]%j==0)
		 	{
		 		sum=sum+j;
		 	}
		 }
		 if(num==sum)
		 printf("\n%d\t",num);
		 sum=0;
	}
}

