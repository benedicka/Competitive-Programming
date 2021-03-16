#include<bits/stdc++.h>
using namespace std;
long long n,k,ans,dp[110][110];
int main()
{
	scanf("%lld %lld",&n,&k);
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=n;j++)
		{
			dp[i][j] = -1;
		}	
	}
	dp[1][1] = 1;
	dp[1][k] = 1;
	for(int i=1;i<=100;i++)
	{
		for(int j=n;j>0;j--)
		{
			if(j-1>=0 && dp[i-1][j-1]>=0  ) 
			{
				if(dp[i][j]==-1) dp[i][j] = dp[i-1][j-1];
				else  dp[i][j] = dp[i-1][j-1]+dp[i][j];
			}
			if(j-k>=0 && dp[i-1][j-k]>=0 && i%2!=0)
			{
				if(dp[i][j]==-1)dp[i][j] = dp[i-1][j-k];
				else dp[i][j] = dp[i-1][j-k]+dp[i][j];
			} 
		}
	}
	for(int i=1;i<=100;i+=2)
	{
		for(int j=1;j<=n;j++)
		{
			if(dp[i][j]!=-1) ans+=dp[i][j];
		}
	}
	printf("%lld\n",ans);
	return 0;
}