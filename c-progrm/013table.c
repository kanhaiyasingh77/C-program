#include<stdio.h>
void main()
{
	int n,i,rs;
	char choice;
	
	do
	{
		printf("Enter any number: ");
		scanf("%d",&n);
		for(i=1;i<=10;i++)
		{
			rs=i*n;
			printf("%d X %d =%d\n",i,n,rs);
		}
			fflush(stdin);
			printf("do you want to continue this operation[press y|Y]");
			scanf("%c",&choice);
	}
		while(choice=='y'|| choice=='Y');
}
