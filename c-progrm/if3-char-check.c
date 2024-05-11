//Q.3 Wap in C to input any character after that check character is lower, upper digit or special character using else if ladder statement.
#include<stdio.h>
void main()
{
	printf("enter any character:\n");
	char ch;
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z')
	{
	printf("%c is in upper case",ch);
	}
	else if(ch>='a'&&ch<='z')
		{
		printf("%c is in lower case",ch);
		}
	else if(ch>='0'&&ch<='9')
		printf("%c  is digit",ch);
	else
	printf("%c is special character",ch);
}