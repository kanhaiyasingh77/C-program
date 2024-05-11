#include<stdio.h>
void main()
{
	int a[10],i,j;
	printf("Enter 10 nos: ");
	for(i=0;i<9;i++)
	{
	scanf("%d\t",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		printf("%d\t",a[i]);
	}
	
}
