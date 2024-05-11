#include<stdio.h>
#include<stdio.h>
void main(){
	int *p,i,n;
	printf("how many nos to be inputted??");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Enter %d numbers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	printf("All elements are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(p+i));
	}
}
