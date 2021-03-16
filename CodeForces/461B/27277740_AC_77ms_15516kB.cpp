#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7,mx=1e5;
long long n,dp[mx+10][5],color[mx+10],x;
vector < long long > adj[mx+10];
bool visit[mx+10];
void dfs(int now)
{
	dp[now][0] = color[now]?0:1;
	dp[now][1] = color[now]?1:0;
	visit[now] = 1;
	for(int i=0;i<adj[now].size();i++)
	{
		int tmp = adj[now][i];
		if(visit[tmp])continue;
		dfs(tmp);
		dp[now][1] = ((dp[now][1]*(dp[tmp][0]+dp[tmp][1])%mod)%mod + (dp[now][0]*dp[tmp][1])%mod)%mod;	
		dp[now][0] = (dp[now][0]*dp[tmp][0]%mod + dp[now][0]*dp[tmp][1]%mod)%mod;
	}
}
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n-1;i++)
	{
		scanf("%lld",&x);
		adj[x].push_back(i+1);
		adj[i+1].push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&color[i]);
	}
	dfs(0);
	printf("%lld\n",dp[0][1]);
	return 0;
}