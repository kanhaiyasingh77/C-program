//Q.3 To input length and breadth after that find area and perimeter of rectangle if both are positive.
#include <stdio.h>
void main()
{
	float length,breadth,area,peri;
	printf("enter length and breadth:\n");
	scanf("%f%f",&length,&breadth);
	area=length*breadth;
	peri=2*(length+breadth);
	length>0&&breadth>0?printf("area=%f\nperimeter=%f",area,peri):printf("invalid input");
	
	
}