#include<stdio.h>
int main()
{
	int n,r,c=0,f=0;
	printf("ENTER A NUMBER :");
	scanf("%d", &n);
	while(n>0)
	{
		r=n%10;
		f=f*10+r;
		n=n/10;
	}
	printf("THE REVERSE OF DIGITS %d",f);
	return 0;
}
	
