#include<stdio.h>
int main()
{
	long long ans,t,n,jum;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans = 0;
		if(n<=0) printf("0\n");
		else if(n==1) printf("1\n");
		else
		{
			jum = 0;
			for(long long i=1;i*i<=n;i++)
			{
				jum++;
				ans+=(n/i);
			}
			ans = 2*ans-(jum*jum);
			printf("%lld\n",ans);
		}
	}
	
	
	return 0;
}