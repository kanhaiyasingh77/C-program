#include<stdio.h>
void main()
{
	char name[20],ch[20];
	int i,count=0;
	printf("Enter your name & searching letter: \n");
	scanf("%s%s",name,ch);
	for(i=0;name[i]!='\0';i++)
	{
		if(ch[0]==name[i])
		count++;
	
	}
	printf("no. of searching letters=%d",count);
	
}
