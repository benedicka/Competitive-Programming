#include<stdio.h>
int main()
{
	long long t,n,ans,a;
	scanf("%lld",&t);
	while(t--)
	{
		ans = 0;
		scanf("%lld",&n);
		a = 5;
		while(a<=n)
		{
			ans +=n/a;
			a*=5;
			//printf("%lld\n",a);
		}
		printf("%lld\n",ans);
	}
	
	return 0;
}