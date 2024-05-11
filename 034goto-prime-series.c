#include<stdio.h>
void main()
{
	int i,j,count=0;
	i=1;
	outer:
		if(i<=100)
		{
			j=1;
			inner:
				if(j<=i)
				{
					if(i%j==0)
					count++;
					j++;
					goto inner;
				}
			if(count==2)
			{
				printf("%d\n",i);
				count=0;
				i++;				
				goto outer;
			}

		}
}
