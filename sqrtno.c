#include<stdio.h>
#include<math.h>
int main()
{
	double n,s;
	printf("ENTER A NUMBER: ");
	scanf("%lf",&n);
	s= sqrt(n);
	printf("SQUARE ROOT OF %.2lf is %.2lf\n",n,s);
	return 0;
}
