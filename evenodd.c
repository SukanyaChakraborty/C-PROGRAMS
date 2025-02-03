#include<stdio.h>
int main()
{
	int n;
	printf("ENTER A NUMBER :");
	scanf("%d", &n);
	if(n%2==0)
	printf("THE NUMBER %d is even",n);
	else
	printf("THE NUMBER %d is odd",n);
	return 0;
}
