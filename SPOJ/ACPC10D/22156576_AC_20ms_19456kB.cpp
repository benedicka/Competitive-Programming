#include<bits/stdc++.h>
using namespace std;
long long n,x[100010][10],dp[100010][10];
int tc =1;
int main()
{
	while(1)
	{
		scanf("%lld",&n);
		if(!n) break;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				scanf("%lld",&x[i][j]);
				dp[i][j] = LONG_LONG_MAX;
			}
		}
		dp[0][0] = x[0][1];
		dp[0][1] = x[0][1];
		dp[0][2] = x[0][1]+x[0][2];
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i-1>=0)
				{
					dp[i][j] = min(dp[i][j],dp[i-1][j]+x[i][j]);
					if(j+1<3) dp[i][j] = min(dp[i][j],dp[i-1][j+1]+x[i][j]);
					if(j-1>=0) 
					{
						dp[i][j] = min(dp[i][j],dp[i-1][j-1]+x[i][j]);
						
					}
				}
				if(j-1>=0) dp[i][j] = min(dp[i][j],dp[i][j-1]+x[i][j]);
			}
		}
		printf("%d. %lld\n",tc,dp[n-1][1]);
		tc++;
	}
	
	return 0;
}