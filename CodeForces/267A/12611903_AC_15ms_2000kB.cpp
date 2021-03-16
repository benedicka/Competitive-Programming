#include<stdio.h>
#include<string.h>

int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		c=0;
		while (a!=0 && b!=0)
		{
			if (a>=b) 
			{
				c=c+a/b;	
				a=a%b;
				
			}
			else if (a<b)
			{
				c=c+b/a;
				b=b%a;
			}
			
		}
		printf("%d\n",c);
	}
	
	return 0;
}