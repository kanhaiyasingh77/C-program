// Series of prime no.
#include<stdio.h>
void main()
{
	int i,j,count=0;
	printf("The series of prime no. upto 1000\n");
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d\n",i);
		count=0;
	}
}
