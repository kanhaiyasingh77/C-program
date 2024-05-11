//Q.1 WAP in c to input three numbers after that find greatest number using nested if.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);

	
	if(a>b&a>c)
		printf("%d is greatest\n",a);
	else
	{
		if(b>c)
		{
		 printf("%d is greatest\n",b);
		}
		else
		printf("%d is greatest\n",c);
	}
	
	
}