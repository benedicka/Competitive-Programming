#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long t,n,pow2[100010],ans[100010];
int main()
{
	pow2[0] = 1;
	for(int i=1;i<=100000;i++)
	{
		pow2[i] = (pow2[i-1]*2)%mod;
	}
	ans[1] = ans[2] = 1;
	for(int i=3;i<=100000;i++)
	{
		ans[i] = (ans[i-1]%mod*(pow2[i-1]-1)%mod)%mod;
	}
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",ans[n]);
	}
	return 0;
}