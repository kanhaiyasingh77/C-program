#include<stdio.h>
int a,b,c;
void input()
{
	printf("Enter three nos:\n");
	scanf("%d%d%d",&a,&b,&c);
}
void greatest()
{
	int gt;
	gt=(a>b&&a>c?a:b>c?b:c);
	printf("gratest no is=%d\n",gt);
}
void smallest()
{
	int st;
	st=a<b&&a<c?a:b<c?b:c;
	printf("smallest no is=%d",st);
}
void main()
{
	input();
	greatest();
	smallest();
}
