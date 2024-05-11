//wap in c to print lucas series up to50 terms.
#include<stdio.h>
void main()
{
	double lucas=3;
	int r=1; int y;
	printf("Lucas series upto 50 trms:\n2\t1\t3\t");
	int i;
	for(i=1;i<50;i++)
	{
		y=lucas;
		lucas=y+r;
		r=y;
		printf("%lf \t",lucas);
	}
}
