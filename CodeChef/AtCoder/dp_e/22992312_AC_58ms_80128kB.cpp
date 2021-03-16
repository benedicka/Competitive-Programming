#include<bits/stdc++.h>
using namespace std;
long long n,w[1010],v[1010],dp[1010][100010],mx,wm,jumw;

int main()
{
	scanf("%lld %lld",&n,&wm);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%lld %lld",&w[i],&v[i]);
		mx+=v[i];
		jumw+=w[i];
	}
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=100000;j++)
		{
			dp[i][j]=jumw+1;
		}
	}
	dp[0][0] = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=mx;j>=0;j--)
		{
			if(j==mx)
			{
				dp[i][j] = dp[i-1][j-v[i]]+w[i];
				dp[i][j] = min(dp[i][j],dp[i-1][j]);
				continue;
			}
			if(j-v[i]>=0) dp[i][j] = min(dp[i][j+1],dp[i-1][j-v[i]]+w[i]);
			dp[i][j] = min(dp[i][j],dp[i-1][j]);
			//printf("%-7lld ",dp[i][j]);
		}
		//printf("\n");
	}
	for(int i=mx;i>=0;i--)
	{
		if(dp[n][i]<=wm)
		{
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}