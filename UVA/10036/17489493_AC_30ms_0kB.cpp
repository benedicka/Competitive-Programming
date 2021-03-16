#include<bits/stdc++.h>
using namespace std;
int t,n,k,x[10010];
bool dp[10010][110];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		memset(dp,0,sizeof(dp));
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
			x[i] = abs(x[i]);
			x[i]%=k;
		}
		dp[0][x[0]%k] = 1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
				if(dp[i-1][(j-x[i]+k)%k] || dp[i-1][(j+x[i])%k]) dp[i][j] = 1;
			}
		}
		printf("%s\n",dp[n-1][0]?"Divisible":"Not divisible");
	}
	return 0;
}