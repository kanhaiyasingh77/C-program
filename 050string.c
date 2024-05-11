#include<stdio.h>
void main()
{
	char name[20],v=0,c=0,ch;
	int i,count=0;
	
	printf("Enter your name: ");
	scanf("%s",name);
	printf("I am %s\n",name);
	printf("All letters are: \n");
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
		count++;
		ch=name[i];
		if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='U'||ch=='u'||ch=='o'||ch=='u')
		v++;
		else
		c++;
		printf("\n");
	}
	printf("total no. of letters=%d\n",count);
	printf("no. of vowel letters=%d\nconsonent=%d",v,c);
}
