#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum+= pow(i,2);
	}
	 printf("THE SUM OF THE SQUARES OF THE FIRST 10 NATURAL NUMBERS IS: %d\n",sum);
	 return 0;
	
}
