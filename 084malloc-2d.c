#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,r,c,i;
    printf("Enter the size of row & column:\n");
    scanf("%d%d",&r,&c);
    p=(int*)malloc(sizeof(int)*r*c);
    printf("Enter value of matrix");
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",(p+i*c+j));
        }
    }
    printf("matrix is \n");
    for(i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",*(p+i*c+j));
        }
        printf('\n');
    }
}