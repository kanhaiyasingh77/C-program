#include<stdio.h>
void main()
{
    char chr[20];
    printf("Enter shirt colour B for black and blue and O for other:\n");
    scanf("%s",chr);
    if(chr=='black'||chr=="blue")
    {
        printf("you can inside");

    }
    else{
        printf("you can go outside");
    }

}
