#include<stdio.h>
void main()
{
	char name[20];
	int i,count=0;
	printf("Enter your name: ");
	scanf("%s",name);
	printf("I am %s\n",name);
	printf("my name in upper case = ");
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]-32);
		count++;
	}
	printf("\ntotal no. of letters=%d",count);
}
