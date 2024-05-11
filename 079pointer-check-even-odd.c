// To input 10 nos after that print it using pointer.
#include<stdio.h>
void main(){
    int a[10],i,*p,ecount=0,ocount=0;
    p=&a[0];
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",(p+i));
    }
    printf("All elements are:\n");
    for(i=0;i<10;i++){
        printf("%d\t",*(p+i));
        if(*(p+i)%2==0)
        ecount++;
        else
        ocount++;
    }
    printf("\nEven no=%d",ecount);
    printf("\nOdd no=%d",ocount);
    
}
