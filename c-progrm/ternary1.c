// q.1 To input two numbers after that check both nos are equal or not using ternary.
#include <stdio.h>
void main()
{
	int a,b,gt;
	char d[]="equal",e[]="not equal";
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	gt=a==b?d:e;
	printf("answer=%s",gt);
	
}