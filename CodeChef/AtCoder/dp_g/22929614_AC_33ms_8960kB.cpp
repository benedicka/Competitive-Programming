#include<bits/stdc++.h>
using namespace std;
int ans,n,m,a[100010],b[100010],dp[100010];
vector < int > adj[100010];
bool visit[100010];
int dfs(int x)
{
	if(dp[x]!=-1) return dp[x];
	dp[x] = 1;
	for(int i=0;i<adj[x].size();i++)
	{
		dp[x] = max(dp[x],1+dfs(adj[x][i]));
	}
	return dp[x];
}
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		adj[a[i]].push_back(b[i]);
	}
	for(int i=1;i<=n;i++) dp[i] = -1;
	ans = 1;
	for(int i=1;i<=n;i++)
	{
		ans = max(ans,dfs(i));
	}
	printf("%d\n",ans-1);
	return 0;
}