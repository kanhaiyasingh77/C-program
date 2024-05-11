#include<stdio.h>
void main()
{
	int a,b,c,gt;
	printf("Enter three nos:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	int* n1,*n2,*n3;
	n1=&a;
	n2=&b;
	n3=&c;
	gt=(*n1> *n2&&*n1>*n3?*n1:(*n2>*n3?*n2:*n3));
	printf("Greatest no=%d",gt);
}
