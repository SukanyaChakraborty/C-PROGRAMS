#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,c=0,s=0,f;
	printf("ENTER A NUMBER :");
    scanf("%d",&n);
    
	int a=n,b=n;
    
    while(a!=0)
    {
    	r=a%10;
    	c++;
    	a=a/10;
    }
    
   	while(b!=0)
	{
		r=b%10;
		b=b/10;
		f=pow(r,c);
		s+=f;
	}
		
	if(s==n)
		printf("IT IS AN ARMSTRONG NUMBER",n);
	else
		printf("IT IS NOT AN ARMSTRONG NUMBER",n);
	
	return 0;
    }
