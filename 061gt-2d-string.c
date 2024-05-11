#include<stdio.h>
#include<string.h>
 void main()
 {
 	char name[10][30],temp[30];
 	int i;
 	printf("Enter name of 10 students\n");
 	for(i=0;i<10;i++)
 	{
 	  gets(name[i]);	
	}
	strcpy(name,temp);
	for(i=1;i<10;i++)
	{
		if(strcmp(name[i],temp)>0)
		strcpy(temp,name[i]);			
	}
	printf("greatest name= %s",temp);
 }
