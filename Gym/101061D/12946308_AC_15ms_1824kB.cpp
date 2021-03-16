#include<stdio.h>



int main()
{
long long t,n;
long long a=0,b=0;
	scanf("%lld",&t);
	while(t--)
	{
		a = 0;
		b = 0;
		for(int i=0;i<5;i++)
		{
			scanf("%lld",&n);
			if(a<n)
			{
			b = a;
			a = n;
			}
			else if(b<n && n<a)
			{
				b = n;
			}
		}
		
		printf("%lld\n",a*b);
	}
	
	return 0;
}