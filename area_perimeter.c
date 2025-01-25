#include<stdio.h>
int main()
{
	float l,b;
	printf("ENTER LENGTH: ");
	scanf("%f", &l);
	printf("ENTER BREADTH: ");
	scanf("%f", &b);
	float AREA= l*b;
	float PERIMETER= 2*(l+b);
	printf("THE AREA IS :%f",AREA);
	printf("THE PERIMETER IS :%f",PERIMETER);
	return 0;
}
