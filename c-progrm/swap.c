#include <stdio.h>
void main()
{
int a,b,c;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("value after swaping the numbers\n a=%d\n b=%d\n",a,b);
}