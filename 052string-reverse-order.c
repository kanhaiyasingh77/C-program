#include<stdio.h>
void main()
{
	char name[20];
	int i,count=0,j;
	printf("Enter your name: ");
	scanf("%s",name);
	printf("All letters are: ");
	for(j=0;name[j]!='\0';j++)
	{
		printf("%c",name[j]);
		count++;
	}
	
	printf("\nAll letters in reverse order are: \n");
	for(i=count-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
}
