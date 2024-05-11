#include<stdio.h>
void main()
{
	int n,d,rev=0,nd;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("Number in words:");
	
	while(n>0)
	{
	d=n%10;
	rev=rev*10+d;
	n=n/10;
	}
	
	while(rev>0)
	{
	nd=rev%10;	
	switch(nd)
	{
		case 0:
			printf("zero ");
			break;
		case 1:
			printf("One ");
			break;
		case 2:
			printf("Two ");
			break;
		case 3:
			printf("Three ");
			break;
		case 4:
			printf("Four ");
			break;
		case 5:
			printf("Five ");
			break;
		case 6:
			printf("Six ");
			break;
		case 7:
			printf("Seven ");
			break;
		case 8:
			printf("Eight ");
			break;
		case 9:
			printf("Nine ");
			break;
		default:
			printf("Invalid digit");
		}
		rev=rev/10;
	}
}
