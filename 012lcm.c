#include<stdio.h>
void main()
{
	int a,b,c,lcm,i;
	printf("Enter three no: ");
	scanf("%d%d%d",&a,&b,&c);
	
	lcm=a>b&&a>c?a:(b>c?b:c);
	for(i=1;i>1;i++)
	{
	while(lcm*i%a!=0||lcm*i%c!=0||lcm*i%b!=0)
	{
		printf("lcm=%d",lcm*i);	
	}
	}
	
}
