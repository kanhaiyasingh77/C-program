#include<stdio.h>
void main()
{
	int pm;
	printf("Enter the marks:\n");
	scanf("%d",&pm);
	if(pm>=90)
	printf("Excellent");
	else if(pm>=75)
	printf("Very good");
	else if(pm>=60)
	printf("Good");
	else if(pm>=45)
	printf("Average");
	else
	printf("fail");
}
