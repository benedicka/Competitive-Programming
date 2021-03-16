#include<bits/stdc++.h>
using namespace std;
long long jum[100010]={0},n,a,dp[100010]={0};
long long ans = 0;
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		dp[a]+=a;
	}
	for(int i=2;i<=100000;i++)
	{
		dp[i] = max(dp[i-1],dp[i-2]+dp[i]);
		ans = max(ans,dp[i]);
	}
	printf("%lld\n",ans);
	return 0;
}