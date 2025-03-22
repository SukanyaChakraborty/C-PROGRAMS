#include<stdio.h>
int main()
{
	int n,r,c=0;
	printf("ENTER A NUMBER :");
	scanf("%d", &n);
	while(n>0)
	{
		r=n%10;
		c++;
		n=n/10;
	}
	printf("THE NUMBER OF DIGITS %d",c);
	return 0;
}
	
	

