#include<stdio.h>
int main()
{
       int i,f=-1,s,n;
       printf("ENTER A NUMBER:");
       scanf("%d",&n);
       int a[n];
       printf("ENTER THE ARRAY ELEMENTS :\n");
       for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	   printf("ENTER THE SEARCH ELEMENTS:");
	   scanf("%d",&s);
	   for(i=0;i<n;i++)
	   {
	   	  if(a[i]==s)
	   	  {
	   	  	f=i;
	   	  	break;
			 }
		   }	
		   if(f!=-1)
		   printf("SEARCH SUCCESSFUL");
		   else
		   printf("SEARCH NOT SUCCESSFUL");
		   return 0;
}
