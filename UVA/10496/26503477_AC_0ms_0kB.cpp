#include<bits/stdc++.h>
using namespace std;
int t,n,x[15],y[15],cost[15][15],dp[12][(1<<12)],mxx,mxy;
int f(int mask,int now)
{
	if(mask==(1<<(n+1))-1)
	{
		return cost[now][0];
	}
	if(dp[now][mask]!=-1) return dp[now][mask];
	int res = INT_MAX;
	for(int i=1;i<=n;i++)
	{
		if(!(mask&(1<<i)))
		{
			res = min(res,cost[now][i]+f(mask|(1<<i),i));
		}
	}
	return dp[now][mask] = res;
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%d %d",&mxx,&mxy);
		scanf("%d %d",&x[0],&y[0]);
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d %d",&x[i],&y[i]);
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				cost[i][j] = abs(x[i]-x[j])+abs(y[i]-y[j]);
			}
		}
		memset(dp,-1,sizeof(dp));
		printf("The shortest path has length %d\n",f(1<<0,0));
	}
	return 0;
}