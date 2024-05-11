#include<stdio.h>
#include<stdlib.h>
void main(){
	do{
	int r,c,i,j,s,*p;
	
	printf("Enter the size of row and column:\n");
	scanf("%d%d",&r,&c);
	int m[r][c];
	p=m;
	printf("Enter the value for matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",p+i*r+j);
		}
	}
	printf("matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",*(p+i*r+j));
		}
		printf("\n");
	}
	
	printf("Enter the searching element:\n");
	int flag=0;
	char choice;
	scanf("%d",&s);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if((*(p+i*r+j)==s))
			flag=1;
		}
	}
	if(flag==1)
	printf("Searching is found!");
	else
	printf("searching is not found!");
	fflush(stdin);
	printf("Do you want to search more element[press y\Y]");
	scanf("%c",&choice);
	}
	while(choice=='Y'|| choice=='y');
}

