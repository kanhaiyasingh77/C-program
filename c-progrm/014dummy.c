#include<stdio.h>
void main()
{
	int n,d,sum=0;
	printf("Enter any no. ");
	scanf("%d",&n);
	
	for(sum=0;n>0;d=n%10,sum=sum+d,n=n/10);
	printf("sum=%d",sum);
}
