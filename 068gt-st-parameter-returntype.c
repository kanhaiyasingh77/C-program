#include<stdio.h>
int find_greatest();
int find_smallest();
void show_result();
void main()
{
	show_result();
}
int find_greatest(int a,int b,int c)
{
	int gt;
	gt=(a>b&&a>c?a:(b>c?b:c));
	return(gt);
}
int find_smallest(int a, int b, int c)
{
	int st;
	st=(a<b&&a<c?a:(b<c?b:c));
	return(st);
}
void show_result()
{
	int a,b,c;
	printf("Enter three nos:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("greatest no=%d\n",find_greatest(a,b,c));
	printf("smallest no=%d",find_smallest(a,b,c));
}
