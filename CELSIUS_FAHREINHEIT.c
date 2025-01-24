#include<stdio.h>
int main()
{
	float fahreinheit,celsius;
	printf("ENTER FAHREINHEIT: ");
	scanf("%f", &fahreinheit);
	celsius= (fahreinheit-32)*5/9;
	printf("celsius: %f",celsius);
	return 0;
}
