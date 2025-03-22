#include<stdio.h>
int main()
{
	int n,r,c=0,f=0;
	printf("ENTER A NUMBER :");
	scanf("%d", &n);
	int a = n;
	while(n>0)
	{
		r=n%10;
		f=f*10+r;
		n=n/10;
	}
	printf("%d %d\n", n,f);
	if(a==f)
	printf("IT IS PALINDROMIC");
	else
	printf("IT IS NOT PALINDROMIC");
	return 0;
}
