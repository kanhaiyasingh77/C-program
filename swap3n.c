//Q.2 to input three nos after that swap it.
#include<stdio.h>
void main()
{
	int a,b,c,s;
	printf("enter three nos.\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	s=a;
	a=b;
	b=c;
	c=s;
	
	printf("a=%d\nb=%d\nc=%d",a,b,c);
	
}
