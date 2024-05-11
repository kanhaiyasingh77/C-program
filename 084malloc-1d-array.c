#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,i,position,n;
    printf("How many numbers?");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    printf("Enter %d number:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("Enter position no. for deletion: ");
    scanf("%d",&position);
    if(position>=1&&position<=n){
        for(i=position-1;i<n-1;i++){
            *(p+i)=*(p+i+1);
        }
        printf("Rest element are:\n");
        for(i=0;i<n-1;i++){
            printf("%d\n",*(p+i));
        }
    }
    else
    printf("Invalid position");
}
