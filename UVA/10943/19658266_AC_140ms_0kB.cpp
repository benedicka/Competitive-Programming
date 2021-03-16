#include<bits/stdc++.h>
using namespace std;
int n,k,dp[110][110];
const int mod = 1000000;
int main()
{
	while(scanf("%d %d",&n,&k)!=EOF)
	{
		if(n==0 && k==0) break;
		memset(dp,0,sizeof(dp));
		for(int i=0;i<=n;i++)
		{
			dp[1][i] = 1;
		}
		for(int i=2;i<=k;i++)
		{
			for(int j=0;j<=n;j++)
			{
				for(int k=0;k<=n;k++)
				{
					if(j-k>=0)
					{
						dp[i][j]+=dp[i-1][j-k]%mod;
						dp[i][j]%=mod;
					}
					else break;
				}
			}
		}
		printf("%d\n",dp[k][n]%mod);
	}
	return 0;
}