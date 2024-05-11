#include <stdio.h>
void main()
{
	int a,b,i,it,fa=0,fb=0;
	printf("Enter any two number: ");
	scanf("%d%d",&a,&b);
	
	for(i=1;i<=a;i++)
	{
	if(a%i==0)
	fa=fa+1;
	}
	for(it=1;it<=b;it++)
	{
	if(b%it==0)
	fb=fb+1;
	}
	if(fa==2||fb==2||fa==1||fb==1)
	{
		printf("Co prime no.!");
	}
	else
	printf(" Not Co prime no.!");
}
