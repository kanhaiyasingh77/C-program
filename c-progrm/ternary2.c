//Q.2 To input any year after that check year is leap or not using ternary operator.
#include <stdio.h>
void main()
{
	int a,gt;
	char d[]="leap year",e[]="not leap year";
	printf("enter the year= \n");
	scanf("%d",&a);
	gt=a%4==0?d:e;
	printf("output:\n%s",gt);
}