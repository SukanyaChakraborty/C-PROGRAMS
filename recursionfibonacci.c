#include<stdio.h>
int fibonacci(int num)
{
	if(num==0)
	return 0;
	if(num==1)
	return 1;
	else
	return fibonacci(num-1)+fibonacci(num-2);
	
}
int main()
{
	int num,i;
	printf("ENTER THE NUMBER OF TERMS:");
	scanf("%d",&num);
	printf("Fibonacci Series:");
	for(i=0;i<num;i++)
	{
		printf("%d",fibonacci(i));
	}
	printf("\n");
	return 0;
}
