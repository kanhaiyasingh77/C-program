//Wap in c to check whether a matrix is diagonal or not.
#include<stdio.h>
void main(){
    int i,j,row_size,col_size,flag=0;
    printf("Enter the row size & column size: ");
    scanf("%d%d",&row_size,&col_size);
    int m[row_size][col_size];
    printf("Enter the value of matrix:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            if(i!=j && m[i][j]!=0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    printf("Given matrix is not a Diagonal Matrix");
    else
    printf("given matrix is a digonal matrix");
}
