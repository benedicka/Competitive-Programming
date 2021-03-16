#include<bits/stdc++.h>
using namespace std;
long long m,k,t,fact[1010],dp[1010][1010];
const long long mod = 1e9+7,mx=1000;
void pre()
{
	fact[0] = 1;
	for(int i=1;i<=mx;i++)
	{
		fact[i] = fact[i-1]*i;
		fact[i]%=mod;	
	//	printf("%lld\n",fact[i]);	
	}
	dp[0][0] = 1;
	for(int i=1;i<=mx;i++)
	{
		dp[i][1] = 1;
	//	printf("1 ");
		for(int j=2;j<i;j++)
		{
			dp[i][j] = dp[i-1][j-1]%mod;
			dp[i][j]+=(j*dp[i-1][j])%mod;
			dp[i][j]%=mod;
	//		printf("%lld ",dp[i][j]);
		}
	//	printf("1\n");
		dp[i][i] = 1;
	}
}
int main()
{
	freopen("galactic.in","r",stdin);
	pre();
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&m,&k);
		if(m<k) printf("0\n");
		else printf("%lld\n",(dp[m][k]*fact[k]%mod)%mod);
	}
	return 0;
}