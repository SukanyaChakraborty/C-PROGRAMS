#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=3;i++)
	{
		for(k=1;k<=3-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=2;i>=1;i--)
    {
    	for(j=1;j<=3-i;j++)
    	{
    		printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;

}
