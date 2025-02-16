#include<stdio.h>
//#include<ctype.h>
int main()
{
	char ch;
	printf("ENTER A CHARACTER : ");
	scanf("%c", &ch);
	ch= tolower(ch);
	if(ch=='a' || ch =='e' || ch== 'i' || ch=='o' || ch=='u')
	{
		printf("%c is a vowel.\n",ch);
	
	}
	else if((ch>='a' && ch<='z'))
	{
		printf("%c is a consonant.\n",ch);
		
	}
	else 
	{
		printf("INVALID INPUT! PLEASE ENTER AN ALPHABETIC CHARACTER.\n");
	}
	return 0;
}
