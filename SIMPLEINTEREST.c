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
	float SI= p*r*t/100;
    printf("\nTHE SIMPLE_INTEREST: %f", SI);
	return 0;
	
}
