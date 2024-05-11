#include<stdio.h>
void main()
{
	int a,b,c,lcm;
	printf("Enter three no: ");
	scanf("%d%d%d",&a,&b,&c);
	
	lcm=a>b&&a>c?a:(b>c?b:c);
	
	while(lcm%a!=0||lcm%c!=0||lcm%b!=0)
	{
		lcm++;
	}
	printf("lcm=%d",lcm);
}
