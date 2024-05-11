// Program of lcm with less iteration.
#include<stdio.h>
void main(){
	int a,b,c,gt,i,flag=0,gti;
	printf("Enter three nos: \n");
	scanf("%d%d%d",&a,&b,&c);
	gt=(a>b&&a>c?a:b>c?b:c);
	
	for(i=1;flag==0;i++){
		gti=gt*i;
		while(gti%a==0&&gti%b==0&&gti%c==0){
			flag=1;
			break;
		}
		
	}
	if(flag==1){
	   printf("lcm=%d",gti);	
	}
	
}
