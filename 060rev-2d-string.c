#include<stdio.h>
 void main()
 {
 	char name[10][30],rev[10][30];
 	int i,j,k,len;
 	printf("Enter name of 10 students\n");
 	for(i=0;i<10;i++)
 	{
 	  gets(name[i]);	
	}
	printf("original\t reverse\n");
	for(i=0;i<10;i++)
	{
		len=strlen(name);
		for(k=0,j=len-1;j>=0;k++,j--)
		{
			rev[i][k]=name[i][j];
		}
		rev[i][k]='\0';
		printf("%s\t%s\n",name[i],rev[i]);
	}
 }
