#include<stdio.h>
int sum(int n)
{
	if(n!=0)
	return n+sum(n-1);
	else
	return n;
}
int main()
{
	int n;
	printf("ENTER n:");
	scanf("%d",&n);
	int a= sum(n);
	printf("%d",a);
    return 0;
}

