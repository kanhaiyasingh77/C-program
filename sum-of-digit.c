//Q.1 To input a four digit no. and add the digit.
#include <stdio.h>
void main()
{
	int a,d1,d2,d3,d4,sum;
	
	printf("Enter a number of four digit:\n");
	scanf("%d",&a);
	
	if(a>=1000&&a<=9999)
	{
	d1=a%10;
	a=a/10;
	d2=a%10;
	a=a/10;
	d3=a%10;
	a=a/10;
	d4=a%10;
	sum=d1+d2+d3+d4;
	printf("sum of digit=%d",sum);
	}
	else
	printf("Invalid number!");
}
