#include<stdio.h>
void main(){
	int a[10],i,esum=0,osum=0,*p;
	p=a;
	printf("Enter ten nos:");
	for(i=0;i<10;i++)
	{
		scanf("%d",p+i);
	}
	printf("all elements are\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(p+i));
		if(*(p+i)%2==0)
		esum=esum +*(p+i);
		else
		osum=osum +*(p+i);
	}
	printf("even no=%d\n",esum);
	printf("odd no=%d",osum);
}
