// Write a program in c to input two nos & arithmetic operator, find arithmetic operation using switch case statement.
#include<stdio.h>
void main()
{
    int n1,n2; char opt;
    printf("Enter the two nos:\n");
    scanf("%d%d",&n1,&n2);
    fflush(stdin);
    printf("Enter the arithmetic operator: ");
    scanf("%c",&opt);

    switch(opt)
    {
        case't':
        printf("Addition=%d",n1+n2);
        break;
        case'-':
        printf("substraction=%d",n1-n2);
        break;
        case'*':
        printf("Multiplication=%d",n1*n2);
        break;
        case'/':
        printf("Division=%d",n1/n2);
        break;
        case'%':
        printf("Remainder=%d",n1%n2);
        break;
        default:
        printf("Invalid arithmetic operator!");
    }
    
}