#include<bits/stdc++.h>
using namespace std;
long long dp[2097160],n,a[25][25],mod=1000000007;
long long f(long long mask,long long jum)
{
	if(mask==(1<<n)-1) return 1;
	if(dp[mask]!=-1) return dp[mask];
	long long res = 0;
	for(int i=0;i<n;i++)
	{
		if(a[jum][i] && !(mask&(1<<i)))
		{
			res+=f(mask|(1<<i),jum+1)%mod;
			res%=mod;
		}
	}
	return dp[mask] = res%mod;
}
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
	for(int i=0;i<=(1<<n);i++)
	{
		dp[i] = -1;
	}
	printf("%lld\n",f(0,0));
	return 0;
}