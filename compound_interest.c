#include<stdio.h>
int main()
{
	float p,r,t;
	printf("ENTER THE PRINCIPLE: ");
	scanf("%f",&p);
	printf("ENTER THE RATE: ");
	scanf("%f",&r);
	printf("ENTER THE TIME: ");
	scanf("%f",&t);
	double AMOUNT= p*pow((1+r/100),t);
    double COMPOUND_INTEREST= AMOUNT-p;
	printf("THE AMOUNT IS: %f", AMOUNT);
	printf("\nTHE COMPOUND_INTEREST IS: %f", COMPOUND_INTEREST);
	return 0;
	
}
