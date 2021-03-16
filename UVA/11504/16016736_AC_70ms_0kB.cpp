#include<bits/stdc++.h>
using namespace std;
int t,n,m,ans,a,b;
bool visit[100010];
vector < int > adj[100010];
vector < int > adj_balik[100010];
stack < int > toposorted;
void toposort(int now)
{
	int sz;
	sz = adj[now].size();
	visit[now] = 1;
	for(int i=0;i<sz;i++)
	{
		if(!visit[adj[now][i]])
		{
			toposort(adj[now][i]);
		}
	}
	toposorted.push(now);
}
void dfs(int now)
{
	int sz;
	sz = adj[now].size();
	visit[now] = 0;
	for(int i=0;i<sz;i++)
	{
		if(visit[adj[now][i]])
		{
			dfs(adj[now][i]);
		}
	}
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;i++)
		{
			visit[i] = 0;
			adj[i].clear();
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d",&a,&b);
			adj[a].push_back(b);
		}
		for(int i=1;i<=n;i++)
		{
			if(!visit[i])toposort(i);
		}
		while(!toposorted.empty())
		{
			//printf("cek : %d\n",toposorted.front());
			if(visit[toposorted.top()])
			{
				dfs(toposorted.top());
				ans++;
			}
			toposorted.pop();
		}
		printf("%d\n",ans);
	}
	return 0;
}