#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER THE FIRST NUMBER :");
	scanf("%d", &a);
	printf("ENTER THE SECOND NUMBER :");
	scanf("%d", &b);
	printf("ENTER THE THIRD NUMBER :");
	scanf("%d", &c);
	{
		if(a>b && a>c)
		printf("a is the greatest number");
		else if(b>a && b>c)
		printf("b is the greatest number");
		else if(c>a && c>b)
		printf("c is the greatest number");
	}
	   return 0;
}
