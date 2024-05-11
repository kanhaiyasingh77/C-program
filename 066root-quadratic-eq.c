#include<stdio.h>
#include<string.h>
#include<math.h>
int a,b,c;
double dis,root1,root2;
char nature[50];

void input(int p,int q,int r)
{
	a=p;
	b=q;
	c=r;
}
void find_root()
{
	dis=b*b-4*a*c;
	if(dis>=0)
	{
		root1=(-b+sqrt(dis))/2;
		root2=(-b-sqrt(dis))/2;
		if(dis==0)
		{
			strcpy(nature,"roots are real & equal");
		}
		else
		strcpy(nature,"roots are real & unequal");
	}
	else
	strcpy(nature,"roots are imaginary");	
}
void display_root()
{
	if(dis>=0)
	printf("root1=%lf\nroot2=%lf\n root nature=%s\n",root1,root2,nature);
	else
	printf("Root nature=%s",nature);
}
void main()
{
	input(1,5,6);
	find_root();
	display_root();
}
