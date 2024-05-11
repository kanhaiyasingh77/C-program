#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three nos\n");
	scanf("%d\n%d\n%d",&a,&b,&c);
	
	if(a>b&a>c)
	 printf("greatest no=%d",a);
	 
	 if(b>c)
	 printf("greatest no=%d",b);
	 
	 if(b<c)
	 printf("greatest no=%d",c);


}
