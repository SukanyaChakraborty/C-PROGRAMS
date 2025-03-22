#include<stdio.h>
int main()
{
	int n,r,c=0,s=0;
	printf("ENTER A NUMBER :");
	scanf("%d", &n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("THE SUM OF DIGITS %d",s);
	return 0;
}
	
