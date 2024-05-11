#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(i==5)
        continue;
        printf("%d\n",i);
    }
}