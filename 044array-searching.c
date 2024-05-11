#include<stdio.h>
void main()
{
	int n[10],i,flag=0,s;
	printf("Enter 10 numbers: \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("Searching element= ");
	scanf("%d",&s);
	for(i=0;i<10;i++)
	{
		if(n[i]==s)
		{
			flag=1;
			break;
		}
	}
	if(flag=1)
		{
		printf("searching is found."); 
		}
		else
		printf("searching is not found."); 
	
}
