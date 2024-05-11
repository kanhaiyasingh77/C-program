#include<stdio.h>
int main()
{
	//percentage Input
	float math, science, hindi, english, economics, total, per ; // per= percentage
	
	printf("Math: ") ;
	scanf("%f",&math) ;
	
	printf("Science: ") ;
	scanf("%f",&science) ;
	
	printf("Hindi: ") ;
	scanf("%f",&hindi) ;
	
	printf("English: ") ;
	scanf("%f",&english) ;
	
	printf("Economics: ") ;
	scanf("%f",&economics) ;
	
	total = math+science+hindi+economics+english ;
	printf("your total marks: %f\n",total) ;
	
    per = (total/500)*100 ;
    printf("your percentage is: %f",per) ;
    return 0;
	
}
