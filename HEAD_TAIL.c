#include<stdio.h>
int main()
{
	char toss;
	printf("ENTER THE COIN TOSS RESULT (H FOR HEADS, T FOR TAILS):");
	scanf("%c", &toss);
	if(toss== 'H' || toss== 'h')
	{
		printf("HEADS\n");
	}
	else if(toss== 'T' || toss== 't')
	{
		printf("TAILS\n");
		
	}
	else
	{
		printf("INVALID INPUT! PLEASE ENTER 'H' OR 'T'.\n");
	}
	return 0;
}
