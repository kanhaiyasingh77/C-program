#include<stdio.h>
int i;
char st[40];
void input()
{
	printf("Enter any string:");
	scanf("%s",st);
}
void find_length()
{
	int length=0;
	for(i=0;st[i]!='\0';i++)
	{
		length++;
	}
	printf("Lenth of string=%d\n",length);
}
void convert_opposite()
{
	printf("string in opp. case is:\n");
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>='a' && st[i]<='z')
		{
			printf("%c",st[i]-32);
		}
		else if(st[i]>='A'&& st[i]<='Z')
		{
			printf("%c",st[i]+32);
		}
		else
		printf("invalid");
	}
}
void main()
{
	input();
	find_length();
	convert_opposite();
}



