#include<bits/stdc++.h>
using namespace std;
int mx[100010];
bool visit[100010];
vector < int > adj[100010];
int n,m,a,b,ans,x[100010];
int dfs(int x)
{
	if(mx[x]!=-1) return mx[x];
	else
	{
		visit[x] = 1;
		int cnt=1,sz;
		sz = adj[x].size();
		for(int i=0;i<sz;i++)
		{
			if(sz>adj[adj[x][i]].size() && !visit[adj[x][i]])
			{
				visit[adj[x][i]] = 1;
				cnt = max(cnt,1+dfs(adj[x][i]));
				visit[adj[x][i]] = 0;
			}
		}
		visit[x] = 0;
		return mx[x] = cnt;
	}
}
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		mx[i] = -1;
		x[i] = i;
		visit[i] = 0;
	}
	while(m--)
	{
		scanf("%d %d",&a,&b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=0;i<n;i++)
	{
		dfs(x[i]);
		ans = max(ans,mx[x[i]]);
	}
	printf("%d\n",ans);
	return 0;
}