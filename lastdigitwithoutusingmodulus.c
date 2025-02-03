#include<stdio.h>
int find_last_digit(int num)
{
	
	if(num<0)
	{
		num=-num;
	}
	int last_digit= num-(num/10)*10;
	return last_digit;
}
int main()
{
	int num;
	printf("ENTER AN INTEGER :");
	scanf("%d", &num);
	int last_digit= find_last_digit(num);
	printf("THE LAST DIGIT IS: %d\n", last_digit);
	return 0;
}
