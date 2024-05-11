//wap in c to input 10 numbers after that print it.

#include<stdio.h>
void main()
{
	int a[10],i;//*p
	//p=a 'or' p=&a[0]
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",a+i);//scanf("%d\n",p+i);
	}
	printf("All elements are\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(a+i));//printf("%d\n",*(p+i));
	}
}


