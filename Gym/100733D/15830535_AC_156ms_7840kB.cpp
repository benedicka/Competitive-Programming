#include<bits/stdc++.h>
using namespace std;
int n,v[1000010],ans,dp[1000010];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			dp[i] = v[i];
			ans = max(ans,dp[i]);
		}
		else if(i<=2)
		{
			dp[i] = max(v[i],dp[i-1]);
			ans = max(ans,dp[i]);
		}
		else
		{
			dp[i] = max(dp[i-1],dp[i-3]+v[i]);
			ans = max(ans,dp[i]);
		}
	}
	printf("%d\n",ans);
	return 0;
}