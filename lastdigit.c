#include<stdio.h>
int main()
{
	int number, lastDigit;
	printf("Enter a number: ");
	scanf("%d", &number);
	lastDigit= number%10;
	if(lastDigit<0)
	{
		lastDigit= -lastDigit;
	}
	  printf("THE LAST DIGIT OF THE NUMBER IS: %d\n", lastDigit);
	  return 0;
}
