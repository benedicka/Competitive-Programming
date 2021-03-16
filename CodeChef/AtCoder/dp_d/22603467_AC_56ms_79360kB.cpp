#include<bits/stdc++.h>
using namespace std;
long long n,mx,w[110],v[110],dp[110][100010];

int main()
{
	scanf("%lld %lld",&n,&mx);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld %lld",&w[i],&v[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=mx;j++)
		{
			dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
			if(j-w[i]>=0) dp[i][j] = max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
			//printf("%lld ",dp[i][j]);
		}
		//printf("\n");
	}
	printf("%lld\n",dp[n][mx]);
	return 0;
}