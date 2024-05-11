//Input three nos, fint gt using nested if.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three nos:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("Gt=%d",a);
        else
        printf("Gt=%d",c);
    }
    else
    {
        if(b>c)
        printf("Gt=%d",b);
        else
        printf("Gt=%d",c);
    }
}