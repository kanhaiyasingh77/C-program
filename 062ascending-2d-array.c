#include<stdio.h>
#include<string.h>
 void main()
 {
 	char name[10][30],temp[30];
 	int i,j;
 	printf("Enter name of 10 students\n");
 	for(i=0;i<10;i++)
 	{
 	  scanf("%s",name[i]);	
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("All names in ascending order are:\n");
	for(i=0;i<10;i++)
	{
		printf("%s\n",name[i]);
	}
 }
