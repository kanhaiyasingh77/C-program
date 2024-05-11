#include<stdio.h>
#include<conio.h>
 void main()
 {
 	char name[10][30],ch;
 	int i,j,u,l;
 	printf("Enter name of 10 students\n");
 	for(i=0;i<10;i++)
 	{
 	  scanf("%s",name[i]);	
	}
	printf("name\t upper\t lower\n");
	for(i=0;i<10;i++)
	{
		u=0;
		l=0;
		for(j=0;name[i][j]!='\0';j++)
		{
			ch=name[i][j];
			if(ch>='a'&&ch<='z')
			l++;
			else if(ch>='A'&&ch<='Z')
			 u++;
		}
		printf("%s\t%d\t%d\n",name[i],u,l);
	}
 }
