#include<stdio.h>
void main()
{
	char name[20];
	int i,flag=0,j,length;
	printf("Enter a string: \n");
	scanf("%s",name);
	length=strlen(name);
	
	for(i=0,j=length-1;i<j;i++,j--)
	{
		if(name[i]!=name[j]){
		flag=1;
		break;
		}
		
	}
	if(flag==1)
	printf("string is not palindrome!");
	else
	printf("string is palindrome!");
}
