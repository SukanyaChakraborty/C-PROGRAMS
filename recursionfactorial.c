#include<stdio.h>
int factorial(int n)
{
	if(n>1)
	return n*factorial(n-1);
	else
	return n;
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int a=factorial (n);
	printf("%d",a);
	return 0;
}
