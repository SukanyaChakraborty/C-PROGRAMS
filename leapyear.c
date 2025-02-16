#include<stdio.h>
int main()
{
	int y;
	printf("ENTER A YEAR :");
	scanf ("%d", &y);
	if(y%400==0 || (y%4==0 && y%100!=0))
	printf("IT IS A LEAP YEAR %d", y);
	else
	printf("IT IS NOT A LEAP YEAR %d", y);
}
	
	


