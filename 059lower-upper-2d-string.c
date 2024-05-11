#include<stdio.h>
 void main()
 {
 	char name[10][30],uname[10][30];
 	int i,j;
 	printf("Enter name of 10 students\n");
 	for(i=0;i<10;i++)
 	{
 	  scanf("%s",name[i]);	
	}
	printf("upper\t lower\n");
	for(i=0;i<10;i++)
	{
		for(j=0;name[i][j]!='\0';j++)
		{
			uname[i][j]=name[i][j]-32;	
		}
		uname[i][j]='\0';
		printf("%s\t%s\n",uname[i],name[i]);
	}
 }
