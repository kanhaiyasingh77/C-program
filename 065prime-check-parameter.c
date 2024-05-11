#include<stdio.h>
void prime_check(int);
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	prime_check(n);
}
void prime_check(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("prime number!");
	else
	printf("Not prime number!");
}
