#include <stdio.h>
void main()
{
	float len,bred,area,peri;
	printf("Enter the length and breadth=\n");
	scanf("%f%f",&len,&bred);
	area=len*bred;
	peri=2*(len+bred);
	printf("area=%f\n peri=%f",area,peri);
}