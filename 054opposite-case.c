 #include<stdio.h>
void main()
{
	char name[20];
	int i,count=0;
	printf("Enter a letter: \n");
	scanf("%s",name);
	printf("My letter is %s!",name);
	printf("\nAll letters in opposite case are:\n");
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>='a'&&name[i]<='z' )
		printf("%c",name[i]-32);
		if(name[i]>='A'&&name[i]<='Z')
		printf("%c",name[i]+32);
	}
	
}
