#include<stdio.h>
void main(){
    int i,j,row,col;
    printf("Enter the row_size&col_size:");
    scanf("%d%d",&row,&col);
    int m[row][col];
    printf("Enter the %d value for matrix\n",row*col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("Original matrix is:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix:\n");
    for(i=0;i<row;i++){
    	for(j=0;j<col;j++){
    		printf("%d\t",m[j][i]);
		}
		printf("\n");
	}
	
}
