#include<stdio.h>
void main()
{
	char name[20],rev[20];
	int i,count=0,j,len;
	printf("Enter your name: ");
	gets(name);
	len=strlen(name);
	for(i=0,j=len-1;name[i]!='\0';i++,j--)
	{
		rev[j]=name[i];
	}
	//rev[j]='\0';
	printf("All letters in reverse order are: \n");
	printf("%s",rev);
}
