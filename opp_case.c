#include<stdio.h>
void main()
{
	int ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(ch>='a'&&ch<='z')
		printf("character in upper case= %c",ch-32);
		
	else
		printf("character in lower case= %c",ch+32);
}
