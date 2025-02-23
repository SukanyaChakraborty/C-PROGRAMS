#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("ENTER A NUMBER :");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
	
		f=f*i;
	}
		printf("THE FACTORIAL OF %d is %d",n,f);
	return 0;
}
