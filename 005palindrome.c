#include<stdio.h>
void main()
{
	int n,rev=0,d,num;
	printf("Enter any no. ");
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
		
	}
	if(num==rev)
	printf("palindrome no");
	else
	printf("not palindrome no!");
}
