//Q.2 WAP in c to input three no after that find smallest no using if else if statement.
#include<stdio.h>
void main()
{

	printf("enter three no.\n");
	int a,b,c;
	scanf("%D%D%D",&a,&b,&c);

	if(a<b&a<c)
	printf("%d is the smallest\n",a);
	else
	{
	
		if(b<c) 
	 	printf("%d is the smallest\n",b);
		else
		printf("%d is the smallest",c);
	}
}