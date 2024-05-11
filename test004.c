#include<stdio.h>
void main()
{
    char chr[20];
    printf("Enter which color shirt are you weare\n");
    scanf("%s",chr);
    if(chr=="black" || chr=="blue")
    {
        printf("you can inside");

    }
    else
        printf("you can go outside");

}
