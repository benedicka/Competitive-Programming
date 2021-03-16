#include<bits/stdc++.h>
using namespace std;
long long n,h[100010],dp[100010],k;

int main()
{
	scanf("%lld %lld",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&h[i]);
	}
	for(int i=2;i<=n;i++)
	{
	//	printf("%d %d %d %d\n",dp[i-1],dp[i-2],h[i-1]-h[i],h[i-2]-h[i]);
		for(int j=1;j<=k;j++)
		{
			if(i>j)
			{
				if(j==1)dp[i] = dp[i-j]+abs(h[i-j]-h[i]);
				else dp[i] = min(dp[i],dp[i-j]+abs(h[i-j]-h[i]));
			}
		}
	//	printf("%d. %d\n",i,dp[i]);
	}
	printf("%lld\n",dp[n]);
	return 0;
}