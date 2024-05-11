#include<stdio.h>
void main()
{
    int i,j,lines;
    printf("Enter the no of lines: ");
    scanf("%d",&lines);

    for(i=1;1<=lines;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
            printf("\n");
        }
        
    }
}