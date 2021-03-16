#include<bits/stdc++.h>
using namespace std;
long long permute[100010],t,a,b,ans;
const long long mod = 1000000007;
long long fast(long long a,long long p)
{
	long long res = 1;
	while(p)
	{
		if(p%2) 
		{
			res*=a;
			res%=mod;
		}
		a*=a;
		a%=mod;
		p/=2;
	}
	return res%mod;
}
int main()
{
	permute[0] = 1;
	for(int i=1;i<=100000;i++)
	{
		permute[i] = permute[i-1]*i;
		permute[i]%=mod;
	}
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&a,&b);
		a-=1;
		printf("%lld\n",( ((permute[a]*fast(permute[b],mod-2))%mod * (fast(permute[a-b],mod-2)%mod))%mod*2 )%mod);
	}
	return 0;
}