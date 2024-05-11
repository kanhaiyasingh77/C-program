#include<stdio.h>
void main()
{
	int n,d,rev,num;
	printf("Enter any no. ");
	scanf("%d",&n);
	num=n;
	for(rev=0;n>0;d=n%10,rev=rev*10+d,n=n/10);
	if(num==rev)
	printf("Palindrome no.");
	else
	printf("Not palindrome no.");
}
