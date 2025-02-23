#include<stdio.h>
int main()
{
	int n,a=0,b=1,c=1,s,i;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	printf("%d %d ", a,b);
	for(i=3;i<=n;i++)
			{
				s=a+b;
				printf("%d ",s);
				a=b;
				b=s;
			}
			return 0;
		}
