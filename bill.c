#include<stdio.h>
void main()
{
	int pread,cread,unit,bill;
	printf("Enter previous reading & current reading:\n");
	scanf("%d%d",&pread,&cread);
	
	unit=cread-pread;
	if(unit>=0)
	{
	if(unit>=0||unit<100)
	bill=unit*3.5;
	if(unit>100||unit>=200)
	bill=unit*4;
	if(unit>200||unit<=300)
	bill=unit*4.5;
	if(unit>300)
	bill=unit*5;
	
	printf("bill=%d",bill);
	}
	else
	printf("Invalid reading!");
	
	
	
}
