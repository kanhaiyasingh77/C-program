#include<stdio.h>
void main()
{
	char name[20];
	int i,count=0;
	printf("Enter your name: \n");
	scanf("%s",name);
	printf("My name is %s!",name);
	printf("\nAll letters are:\n");
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
		count++;
		printf("\n");
	}
	printf("no. of letters=%d",count);
	
}
