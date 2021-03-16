#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long n,ans,cnt,tmp;
bool prime[1010];
long long p(long long a, long long x)
{
	long long res = 1;
	while(x)
	{
		if(x%2) res = (res*a)%mod;
		a*=a;
		a%=mod;
		x/=2;
	}
	return res;
}
void sieve()
{
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i=2;i<=1000;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=1000;j+=i)
			{
				prime[j] = 0;
			}
		}
	}
}
int main()
{
	sieve();
	scanf("%lld",&n);
	ans = 1;
	for(int i=2;i<=1000;i++)
	{
		cnt = 0;
		if(prime[i])
		{
			tmp = i;
			while(tmp<=n)
			{
				cnt+=(n/tmp);
				tmp*=i;
			}
			
		}
		if(cnt)
		{
			
			ans*=(cnt+1);
			ans%=mod;
		}
	}
	printf("%lld\n",ans);
	return 0;
}