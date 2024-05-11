#include<stdio.h>
void main()
{

	int a,b,c;
	printf("Enter three nos\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	if(a>b&a>c)
		printf("Greatest no.=%d",a);
		
	else if(b>c)
		printf("greatest no.=%d",b);
		
	else
		printf("greatest no.=%d",c);
		
}

	
	

