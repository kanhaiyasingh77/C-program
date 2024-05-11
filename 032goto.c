#include<stdio.h>
void main()
{
    int i,n,fact=5;
    i=1;
    n=5;
    factorial:
    if(i<=n)
    {
        fact=fact*i;
        i++;
        goto factorial;
    }
    printf("factorial=%d",fact);
}
