#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE FIRST NUMBER :");
	scanf("%d", &a);
	printf("ENTER THE SECOND NUMBER :");
	scanf("%d", &b);
	{
		if(a>b)
		printf("a is the greatest number");
		else if(b>a)
		printf("b is the greatest number");
		
	}
	   return 0;
}
