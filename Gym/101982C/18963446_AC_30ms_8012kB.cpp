#include<bits/stdc++.h>
using namespace std;
const long long md =  998244353;
long long n,x[1010],macam,k,ans,fact[1010],inv[1010],dp[1010][1010];
map < long long , long long > mp;

int main()
{
	scanf("%lld %lld",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[macam]);
		mp[x[macam]]++;
		if(mp[x[macam]]==1) macam++;
	}
	
	for(int i=0;i<=macam;i++)
	{
		dp[i][0] = 1;
	}
	for(int i=1;i<=macam;i++)
	{
		for(int j=1;j<=k;j++)
		{
			dp[i][j] = ((dp[i-1][j-1]%md * mp[x[i-1]])%md + dp[i-1][j]%md)%md;
		}
	}
	printf("%lld\n",dp[macam][k]);
	return 0;
}
	