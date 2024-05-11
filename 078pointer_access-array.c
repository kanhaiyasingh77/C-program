// Wap in c to input 10 nos after that print it using pointer
#include<stdio.h>
void main(){
    int a[10],i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        scanf("%d",a+i);
    }
    printf("All elements are:\n");
    for(i=0;i<10;i++){
        printf("%d\t",*(a+i));
    }
}
