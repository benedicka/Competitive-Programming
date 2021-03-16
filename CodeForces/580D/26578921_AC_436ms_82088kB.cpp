#include<bits/stdc++.h>
using namespace std;
long long n,m,k,x[20],bonus[20][20],a,b,tmp,dp[20][500010],ans;
long long f(int mask,int cnt,int prev)
{
	if(cnt==m)
	{
		return 0;
	}
	if(dp[prev][mask]!=-1) return dp[prev][mask];
	long long res = -1;
	for(int i=0;i<n;i++)
	{
		if(!(mask&(1<<i)))res = max(res,bonus[prev][i]+x[i]+f(mask|(1<<i),cnt+1,i));
	}
	return dp[prev][mask] = res;
}
int main()
{
	scanf("%lld %lld %lld",&n,&m,&k);
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	for(int i=0;i<k;i++)
	{
		scanf("%lld %lld %lld",&a,&b,&tmp);
		bonus[a-1][b-1] = tmp;
	}
	ans = -1;
	for(int i=0;i<n;i++)
	{
		ans = max(ans,x[i]+f((1<<i),1,i));
	}
	printf("%lld\n",ans);
	return 0;
}