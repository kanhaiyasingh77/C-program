#include <stdio.h>
void main()
{
float m1,m2,m3,m4,tm,pm;
int rs;
printf("enter marks of four subject");
rs=scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
tm=m1+m2+m3+m4;
pm=tm/4;
printf("total marks=%f\n percentage=%f\n value of rs=%d\n",tm,pm,rs);
}