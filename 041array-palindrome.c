#include<stdio.h>
void main()
{
	int i,n[10],j,num=0,temp=0,d;
	printf("enter 10 nos:");
	for(i=0;i<9;i++)
	{
		scanf("%d\n",&n[i]);
	}
	printf("palindrome nos are:\n");
	for(i=0;i<9;i++)
	{
		 num=n[i];
		 while(n[i]>0)
		 {
		 	d=n[i]%10;
			 n[i]=n[i]/10;
			 temp=temp*10+d;	
		 }
		 if(num==temp)
		 printf("\n%d\t",num);
		 temp=0;
	}
}

