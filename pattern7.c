#include<stdio.h>
int main()
{
	int i,j,k,c=1;
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=4-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",c++);
		}
		printf("\n");
	}
	return 0;

}
